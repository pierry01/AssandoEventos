require 'rails_helper'

RSpec.describe TalksController, type: :controller do
  render_views

  describe 'GET #index' do
    before do
      Talk.create(title: 'Primeira Palestra', description: 'Qualquer', start: '10:00:00', finish: '11:00:00')
      Talk.create(title: 'Abertura', description: 'Qualquer', start: '09:00:00', finish: '10:00:00')
      get :index
    end

    it 'return OK' do
      expect(response).to be_ok
      expect(response.body).to include('Assando Eventos')
    end

    it 'include list of talks' do
      talks = assigns(:talks)
      expect(talks.count).to eq(2)
      expect(talks.first.title).to eq('Abertura')
      expect(talks.second.title).to eq('Primeira Palestra')
    end
  end

  describe 'GET #show' do
    let(:talk) { Talk.create!(title: 'Primeira Palestra', description: 'Qualquer', start: '10:00:00', finish: '11:00:00') }

    before { get :show, params: { id: talk.slug } }

    it 'return OK' do
      expect(response).to be_ok
      expect(response.body).to include('Assando Eventos')
    end

    it 'include task details' do
      expect(assigns(:talk)).to eq(talk)
      expect(response.body).to include(talk.title)
      expect(response.body).to include(talk.description)
      expect(response.body).to include(I18n.l(talk.start, format: '%Hh%M'))
      expect(response.body).to include(I18n.l(talk.finish, format: '%Hh%M'))
    end
  end
end