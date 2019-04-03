class User < ApplicationRecord
  # Include default devise modules. Others available are:
  # :confirmable, :lockable, :timeoutable, :trackable and :omniauthable
  devise :database_authenticatable, :recoverable, :validatable

  validates :name, :email, :cpf, presence: true
  validates :email, :cpf, uniqueness: true
end
