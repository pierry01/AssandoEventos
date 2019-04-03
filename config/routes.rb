Rails.application.routes.draw do
  namespace :admin do
      resources :users
      resources :artists
      resources :talks

      root to: "users#index"
    end
  devise_for :users

  root 'talks#index'

  # get 'talks/marcar_presenca'

  resources :talks, path: 'palestras', only: [:show, :new, :create]
  resources :users, path: 'usuarios', only: [:new, :create]
  resources :contacts, path: 'contato', only: [:new, :create]
end
