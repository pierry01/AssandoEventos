require 'rails_helper'

RSpec.describe "estoques/new", type: :view do
  before(:each) do
    assign(:estoque, Estoque.new(
      :quantidade => 1,
      :preco => "9.99",
      :tipo => "MyString",
      :produto => "MyString"
    ))
  end

  it "renders new estoque form" do
    render

    assert_select "form[action=?][method=?]", estoques_path, "post" do

      assert_select "input[name=?]", "estoque[quantidade]"

      assert_select "input[name=?]", "estoque[preco]"

      assert_select "input[name=?]", "estoque[tipo]"

      assert_select "input[name=?]", "estoque[produto]"
    end
  end
end
