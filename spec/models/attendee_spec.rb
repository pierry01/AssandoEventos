require 'rails_helper'

RSpec.describe Attendee, type: :model do
  it { should validate_presence_of(:name) }
  it { should validate_presence_of(:email) }
  it { should validate_presence_of(:cpf) }

  it { should validate_uniqueness_of(:email) }
  it { should validate_uniqueness_of(:cpf)}
end
