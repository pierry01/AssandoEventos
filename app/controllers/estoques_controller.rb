class EstoquesController < ApplicationController
  before_action :set_estoque, only: [:show, :edit, :update, :destroy]

  respond_to :html

  def index
    @estoques = Estoque.all
    respond_with(@estoques)
  end

  def new
    @estoque = Estoque.new
    respond_with(@estoque)
  end

  def show
    redirect_to estoques_path
  end

  def edit
  end

  def create
    @estoque = Estoque.new(estoque_params)
    @estoque.save
    respond_with(@estoque)
  end

  def update
    @estoque.update(estoque_params)
    respond_with(@estoque)
  end

  def destroy
    @estoque.destroy
    respond_with(@estoque)
  end

  private
    def set_estoque
      @estoque = Estoque.find(params[:id])
    end

    def estoque_params
      params.require(:estoque).permit(:data, :quantidade, :tipo, :produto)
    end
end
