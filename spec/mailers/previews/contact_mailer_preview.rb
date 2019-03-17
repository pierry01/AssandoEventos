# Preview all emails at http://localhost:3000/rails/mailers/contact
class ContactPreview < ActionMailer::Preview
  def welcome
    params = {email: 'fulano@example.com', name: 'Fulano', message: 'Hello world!'}
    ContactMailer.welcome(params)
  end
end
