class AddImageToLanchonetes < ActiveRecord::Migration[5.2]
  def change
    add_column :lanchonetes, :image_uid, :string
    add_column :lanchonetes, :image_name, :string
  end
end
