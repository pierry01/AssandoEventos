class CreateTalks < ActiveRecord::Migration[5.2]
  def change
    create_table :talks do |t|
      t.string :title
      t.text :description
      t.datetime :start
      t.datetime :finish

      t.timestamps
    end
  end
end
