class TalksController < ApplicationController
  def index
    @talks = Talk.includes(:speaker).order(start: :asc)
  end

  def show
    @talk = Talk.find_by(slug: params[:id])
    @title = @talk.title
  end
end