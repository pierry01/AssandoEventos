require 'rails_helper'

RSpec.describe LanchoneteController, type: :controller do

  describe "GET #item" do
    it "returns http success" do
      get :item
      expect(response).to have_http_status(:success)
    end
  end

  describe "GET #preco:decimal" do
    it "returns http success" do
      get :preco:decimal
      expect(response).to have_http_status(:success)
    end
  end

end
