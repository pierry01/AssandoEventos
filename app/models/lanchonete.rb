class Lanchonete < ApplicationRecord
  dragonfly_accessor :image

  validates :item, :preco, presence: true

  before_save :generate_slug

  protected

  def generate_slug
    self.slug = item.parameterize
  end
end
