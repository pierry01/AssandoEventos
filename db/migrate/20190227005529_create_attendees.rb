class CreateAttendees < ActiveRecord::Migration[5.2]
  def change
    create_table :attendees do |t|
      t.string :name
      t.string :email
      t.string :phone
      t.string :cpf

      t.timestamps
    end

    add_index :attendees, :email, unique: true
    add_index :attendees, :cpf, unique: true
  end
end
