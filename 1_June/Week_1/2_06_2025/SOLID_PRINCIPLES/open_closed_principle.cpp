#include<iostream>
#include<string>
using namespace std;
class PaymentProcessor{
    public:
        virtual void processPayment(double amount) = 0;
};

class CreditCardPayment : public PaymentProcessor{
    public:
    void processPayment(double amount) override{
        cout<<"Processing credit card payment of amount: "<<amount<<endl;
    }
};

class UPIPayment : public PaymentProcessor{
    public:
    void processPayment(double amount) override{
        cout<<"Processing UPI payment of amount: "<<amount<<endl;
    }
};

void processPayment(PaymentProcessor* processor, double amount){
    processor->processPayment(amount);
}

int main(){
    CreditCardPayment creditCardProcessor;
    UPIPayment upiProcessor;
    processPayment(&creditCardProcessor, 100.0);
    processPayment(&upiProcessor, 100.0);
    return 0;

}