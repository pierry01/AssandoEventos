class Artist < ApplicationRecord
  has_many :talks
  validates :name, :email, presence: true
end
