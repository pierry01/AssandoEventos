class AddSlugToLanchonetes < ActiveRecord::Migration[5.2]
  def change
    add_column :lanchonetes, :slug, :string
    add_index :lanchonetes, :slug, unique: true
  end
end
