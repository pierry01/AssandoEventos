require 'rails_helper'

RSpec.describe "estoques/index", type: :view do
  before(:each) do
    assign(:estoques, [
      Estoque.create!(
        :quantidade => 2,
        :preco => "9.99",
        :tipo => "Tipo",
        :produto => "Produto"
      ),
      Estoque.create!(
        :quantidade => 2,
        :preco => "9.99",
        :tipo => "Tipo",
        :produto => "Produto"
      )
    ])
  end

  it "renders a list of estoques" do
    render
    assert_select "tr>td", :text => 2.to_s, :count => 2
    assert_select "tr>td", :text => "9.99".to_s, :count => 2
    assert_select "tr>td", :text => "Tipo".to_s, :count => 2
    assert_select "tr>td", :text => "Produto".to_s, :count => 2
  end
end
