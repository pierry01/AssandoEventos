Rails.application.routes.draw do
  root 'talks#index'

  resources :talks, path: 'palestras', only: [:show]
  resources :attendees, path: 'inscritos', only: [:new, :create]
  resources :contacts, path: 'contato', only: [:new, :create]
end
