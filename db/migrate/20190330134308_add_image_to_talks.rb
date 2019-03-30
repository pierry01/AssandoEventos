class AddImageToTalks < ActiveRecord::Migration[5.2]
  def change
    add_column :talks, :image_uid, :string
    add_column :talks, :image_name, :string
  end
end
