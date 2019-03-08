class Attendee < ApplicationRecord
  validates :name, :email, :cpf, presence: true
  validates :email, :cpf, uniqueness: true
end
