class TalkPolicy < ApplicationPolicy
  def new?
    @user.role == 'admin'
  end
end
