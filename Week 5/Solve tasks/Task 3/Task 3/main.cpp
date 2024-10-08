//
//  main.cpp
//  Task 3 Отправка уведомлений
//
//  Created by Билялов Эльдар on 02.10.2024.
//

#include <iostream>
#include <string>

using namespace std;

void SendSms(const string& number, const string& message) {
  cout << "Send '" << message << "' to number " << number << endl;
}
void SendEmail(const string& email, const string& message) {
  cout << "Send '" << message << "' to e-mail "  << email << endl;
}

class INotifier{
public:
    virtual void Notify(const string& message) const = 0;
protected:
    string notifier_type;
};

class SmsNotifier : public INotifier{
public:
    SmsNotifier(const string& number) {
        notifier_type = number;
        
    }
    virtual void Notify(const string& message) const override{
        SendSms(notifier_type, message);
    }
};

class EmailNotifier : public INotifier{
public:
    EmailNotifier(const string& email) {
        notifier_type = email;
    }
    void Notify(const string& message) const override{
        SendEmail(notifier_type, message);
    }
};

void Notify(INotifier& notifier, const string& message) {
  notifier.Notify(message);
}

int main() {
  SmsNotifier sms{"+7-495-777-77-77"};
  EmailNotifier email{"na-derevnyu@dedushke.ru"};
  Notify(sms, "I have White belt in C++");
  Notify(email, "And want a Yellow one");
  return 0;
}
