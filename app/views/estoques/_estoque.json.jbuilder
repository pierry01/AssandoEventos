json.extract! estoque, :id, :data, :quantidade, :preco, :tipo, :produto, :created_at, :updated_at
json.url estoque_url(estoque, format: :json)
