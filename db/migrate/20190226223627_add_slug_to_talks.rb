class AddSlugToTalks < ActiveRecord::Migration[5.2]
  def change
    add_column :talks, :slug, :string
    add_index :talks, :slug, unique: true
  end
end
