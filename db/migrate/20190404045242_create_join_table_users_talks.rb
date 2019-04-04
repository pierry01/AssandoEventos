class CreateJoinTableUsersTalks < ActiveRecord::Migration[5.2]
  def change
    create_join_table :users, :talks do |t|
      t.index [:user_id, :talk_id]
      t.index [:talk_id, :user_id]
    end
  end
end
