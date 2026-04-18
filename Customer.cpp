#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;
int Customer::count=0;

Customer::Customer(): Customer("Ruslana", 1, 0) {}
Customer::Customer(string name, int tablenumber, int telnumber):name(name), tablenumber(tablenumber), telnumber(telnumber) {count++;}
Customer::Customer(string name, string surname, string login):name(name), surname(surname), login(login) {}
Customer::Customer(const Customer& other) {
    name=other.name;
    tablenumber=other.tablenumber;
    telnumber=other.telnumber;
    count++;
}
Customer::Customer(Customer&& other){
    name=std::move(other.name);
    tablenumber=other.tablenumber;
    telnumber=other.telnumber;
    count++;
}
Customer::~Customer() {}


void Customer::printInfo()const{
    cout << "Name: " << name << " | Surname: " << surname << " | Login: " << login << endl;
}
int Customer::getcount() {
    return count;
}
string Customer::getname() const {
    return name;
}
string Customer::getsurname() const {
    return surname;
}
string Customer::getlogin() const {
    return login;
}
