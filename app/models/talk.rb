class Talk < ApplicationRecord
  dragonfly_accessor :image

  belongs_to :artist

  has_and_belongs_to_many :users

  validates :title, :description, :start, :artist, :finish, presence: true
  validate :start_is_before_finish

  before_save :generate_slug

  private

  def start_is_before_finish
    return if start.blank? || finish.blank?

    errors.add(:finish, 'deve ser após o início da palestra') if finish <= start
  end

  def generate_slug
    self.slug = title.parameterize
  end
end
