class LanchonetesController < ApplicationController
  respond_to :html, :json

  skip_before_action :authenticate_user!, only: [:show, :index]

  def index
    @lanchonetes = Lanchonete.all
    authorize @lanchonetes
  end

  def new
    @lanchonete = Lanchonete.new
    authorize @lanchonete

    @title = "Cadastro de item"
  end

  def create
    @lanchonete = Lanchonete.new(lanchonete_params)
    authorize @lanchonete

    @title = "Cadastro de item"

    if @lanchonete.save
      redirect_to root_path, notice: 'Item cadastrado'
    else
      render :new
    end
  end


  protected

  def lanchonete_params
    params.require(:lanchonete).permit(:item, :preco, :start, :image)
  end
end
