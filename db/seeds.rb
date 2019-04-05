# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the rails db:seed command (or created alongside the database with db:setup).
#
# Examples:
#
#   movies = Movie.create([{ name: 'Star Wars' }, { name: 'Lord of the Rings' }])
#   Character.create(name: 'Luke', movie: movies.first)

puts 'Criando um Artist'
Artist.create(name: 'Jean Pierry', email: 'pierrybm@gmail.com')
puts 'Criando um Artist... OK'

puts 'Criando duas Talks'
Talk.create([
  {title: 'Talk1', description: 'Talk1 description', start: '10:00:00', finish: '11:00:00', artist_id: 1},
  {title: 'Talk2', description: 'Talk2 description', start: '11:00:00', finish: '12:00:00', artist_id: 1}])
puts 'Criando duas Talks... OK'

puts 'Criando dois Users'
User.create([
  {name: 'admin nome', sobrenome: 'admin sobrenome', email: 'admin@admin.com', cpf: '1123123123', phone: '123123123', role: 'admin', usuario: 'admin', password: '123456', password_confirmation: '123456'},
  {name: 'comum nome', sobrenome: 'comum sobrenome', email: 'comum@comum.com', cpf: '112123123', phone: '123123123', role: 'comum', usuario: 'comum', password: '123456', password_confirmation: '123456'}])
puts 'Criando dois Users... OK'