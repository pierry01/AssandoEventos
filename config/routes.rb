Rails.application.routes.draw do
  namespace :admin do
      resources :users
      resources :attendees
      resources :speakers
      resources :talks

      root to: "users#index"
    end
    
  devise_for :users
  root 'talks#index'

  resources :talks, path: 'palestras', only: [:show, :new, :create]
  resources :attendees, path: 'inscritos', only: [:new, :create] do
    get :cities, on: :collection
  end
  resources :contacts, path: 'contato', only: [:new, :create]
end
