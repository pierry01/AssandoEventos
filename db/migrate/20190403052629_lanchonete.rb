class Lanchonete < ActiveRecord::Migration[5.2]
  def change
    create_table :lanchonetes do |t|
      t.string :item
      t.decimal :preco

      t.timestamps
    end
  end
end
