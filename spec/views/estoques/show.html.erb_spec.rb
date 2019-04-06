require 'rails_helper'

RSpec.describe "estoques/show", type: :view do
  before(:each) do
    @estoque = assign(:estoque, Estoque.create!(
      :quantidade => 2,
      :preco => "9.99",
      :tipo => "Tipo",
      :produto => "Produto"
    ))
  end

  it "renders attributes in <p>" do
    render
    expect(rendered).to match(/2/)
    expect(rendered).to match(/9.99/)
    expect(rendered).to match(/Tipo/)
    expect(rendered).to match(/Produto/)
  end
end
