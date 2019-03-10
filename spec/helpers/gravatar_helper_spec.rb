require 'rails_helper'

RSpec.describe GravatarHelper, type: :helper do
  describe "#gravatar_url" do
    it "return the gravatar url" do
      expect(helper.gravatar_url('pierrybm@gmail.com')).to eq("http://gravatar.com/avatar/555ac0c28aff41adbbf71fd280e9f5f8")
    end
  end
end