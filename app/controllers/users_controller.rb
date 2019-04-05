class UsersController < ApplicationController
  skip_before_action :authenticate_user!, only: [:new, :create]

  def new
    @user = User.new
    @title = "Inscrição"
  end

  def create
    @user = User.new(user_params)
    @title = "Inscrição"

    if @user.save
      redirect_to root_path, notice: 'Inscrição feita. Nos vemos no evento!'
    else
      render :new
    end
  end

  private

  def user_params
    params.require(:user).permit(:name, :sobrenome, :usuario, :cpf, :email, :phone, :password, :password_confirmation)
  end
end