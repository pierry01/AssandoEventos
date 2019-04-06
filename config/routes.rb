Rails.application.routes.draw do
  namespace :admin do
    resources :users
    resources :artists
    resources :talks
    resources :lanchonetes

    root to: "users#index"
  end

  devise_for :users

  root 'talks#index'

  post 'talks/marcar_presenca'
  resources :estoques, path: 'estoque'
  resources :lanchonetes, path: 'lanchonete', only: [:index, :new, :create]
  resources :talks, path: 'palestras', only: [:show, :new, :create]
  resources :users, path: 'usuarios', only: [:new, :create]
end
