class ContactMailer < ApplicationMailer
  def welcome(params)
    @name = params[:name]
    @message = params[:message]
    mail(from: params[:email], to: 'pierrybm@gmail.com', subject: "Assunto! #{@name}" )
  end
end
