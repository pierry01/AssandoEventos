class UserPolicy < ApplicationPolicy
  class Scope < Scope
    def resolve
      scope.all
    end
    
    def resolve_admin
      scope.where(usuario: user)
    end
  end
end