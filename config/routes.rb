Rails.application.routes.draw do
  root 'talks#index'

  resources :talks, path: 'palestras', only: [:show]
end
