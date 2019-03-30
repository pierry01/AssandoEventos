class AddStateAndCityToAttendees < ActiveRecord::Migration[5.2]
  def change
    add_column :attendees, :state, :string
    add_column :attendees, :city, :string
  end
end
