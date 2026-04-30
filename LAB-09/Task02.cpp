/*
Task 2: Smart Notification System
Description
Design a notification system used in modern applications like mobile apps or web platforms.

Requirements
Create an abstract class Notification
Data Member:
recipient
Pure Virtual Function:
sendNotification()
Derived Classes
EmailNotification
SMSNotification
PushNotification
Functionality Requirements
Each class must:

Implement sendNotification()
Display:
Notification type
Recipient
Custom message format
Expected Output (Sample)
SMS Notification
To: 03001234567
Message: Your OTP is 1234
Status: Sent Successfully
Concepts Tested
Interface-style abstraction
Real-world system design
Polymorphism using base pointers
Flexible extensible architecture
*/
#include <iostream>
#include <string>

using namespace std;

class Notification {
protected:
    string recipient;

public:
    Notification(string r) : recipient(r) {}

    virtual ~Notification() {}

    virtual void sendNotification() const = 0;
};

class EmailNotification : public Notification {
private:
    string message;

public:
    EmailNotification(string r, string m) : Notification(r), message(m) {}

    void sendNotification() const override {
        cout << "Email Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Message: " << message << endl;
        cout << "Status: Sent Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

class SMSNotification : public Notification {
private:
    string message;

public:
    SMSNotification(string r, string m) : Notification(r), message(m) {}

    void sendNotification() const override {
        cout << "SMS Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Message: " << message << endl;
        cout << "Status: Sent Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

class PushNotification : public Notification {
private:
    string message;

public:
    PushNotification(string r, string m) : Notification(r), message(m) {}

    void sendNotification() const override {
        cout << "Push Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Message: " << message << endl;
        cout << "Status: Sent Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    const int NUM_NOTIFICATIONS = 3;
    
    Notification* notifications[NUM_NOTIFICATIONS];

    notifications[0] = new EmailNotification("user@example.com", "Verify your email address.");
    notifications[1] = new SMSNotification("03001234567", "Your OTP is 1234");
    notifications[2] = new PushNotification("Device_ABC123", "You have 3 new messages.");

    for (int i = 0; i < NUM_NOTIFICATIONS; ++i) {
        notifications[i]->sendNotification();
    }

    for (int i = 0; i < NUM_NOTIFICATIONS; ++i) {
        delete notifications[i];
    }

    return 0;
}

