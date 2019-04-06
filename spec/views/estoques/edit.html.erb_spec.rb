require 'rails_helper'

RSpec.describe "estoques/edit", type: :view do
  before(:each) do
    @estoque = assign(:estoque, Estoque.create!(
      :quantidade => 1,
      :preco => "9.99",
      :tipo => "MyString",
      :produto => "MyString"
    ))
  end

  it "renders the edit estoque form" do
    render

    assert_select "form[action=?][method=?]", estoque_path(@estoque), "post" do

      assert_select "input[name=?]", "estoque[quantidade]"

      assert_select "input[name=?]", "estoque[preco]"

      assert_select "input[name=?]", "estoque[tipo]"

      assert_select "input[name=?]", "estoque[produto]"
    end
  end
end
