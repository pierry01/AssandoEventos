class DropItemsFromEstoques < ActiveRecord::Migration[5.2]
  def change
    remove_column :estoques, :preco
  end
end
