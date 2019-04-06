class CreateEstoques < ActiveRecord::Migration[5.2]
  def change
    create_table :estoques do |t|
      t.datetime :data
      t.integer :quantidade
      t.decimal :preco
      t.string :tipo
      t.string :produto

      t.timestamps
    end
  end
end
