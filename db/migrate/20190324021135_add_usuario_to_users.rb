class AddUsuarioToUsers < ActiveRecord::Migration[5.2]
  def change
    add_column :users, :usuario, :string 
  end
end
