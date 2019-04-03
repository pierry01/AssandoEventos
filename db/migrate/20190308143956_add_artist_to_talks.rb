class AddArtistToTalks < ActiveRecord::Migration[5.2]
  def change
    add_reference :talks, :artist, foreign_key: true
  end
end
