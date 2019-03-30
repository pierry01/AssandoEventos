class DropNamesTable < ActiveRecord::Migration[5.2]
  def change
    drop_table :names
  end
end
