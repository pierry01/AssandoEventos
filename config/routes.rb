Rails.application.routes.draw do
  devise_for :users
  root 'talks#index'

  resources :talks, path: 'palestras', only: [:show, :new, :create]
  resources :attendees, path: 'inscritos', only: [:new, :create]
  resources :contacts, path: 'contato', only: [:new, :create]
end
