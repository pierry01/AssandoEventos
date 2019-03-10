require 'rails_helper'

RSpec.describe TalksController, type: :controller do
  render_views

  describe 'GET #index' do
    before do
      speaker = Speaker.create!(name: 'Jean Pierry', email: 'pierrybm@gmail.com')
      Talk.create!(title: 'Título da Palestra', description: 'Descrição da Palestra', start: '10:00:00', finish: '12:00:00', speaker: speaker)
      get :index
    end

    it 'return OK' do
      expect(response).to be_ok
      expect(response.body).to include('Assando Eventos')
    end

    it 'include list of talks' do
      talks = assigns(:talks)
      expect(talks.count).to eq(1)
      expect(talks.first.title).to eq('Título da Palestra')
    end
  end

  describe 'GET #show' do
    let(:talk) do
      speaker = Speaker.create!(name: 'Jean Pierry', email: 'pierrybm@gmail.com')
      Talk.create!(title: 'Título da Palestra', description: 'Descrição da Palestra', start: '10:00:00', finish: '12:00:00', speaker: speaker)
    end

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