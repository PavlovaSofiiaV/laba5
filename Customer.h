#ifndef LABA5_CUSTOMER_H
#define LABA5_CUSTOMER_H
#include <string>

using namespace std;


class Customer {private:
    string name;
    string surname;
    string login;
    int tablenumber;
    int telnumber;
    static int count;
public:
    Customer();
    Customer(string name, int tablenumber=1, int telnumber=0);
    Customer(string name,string surname, string login);

    Customer(const Customer& other);
    Customer(Customer&& other);

    ~Customer();

    void printOrder();

    void printInfo()const;
    static int getcount();
    string getname()const;
    string getsurname()const;
    string getlogin()const;



};


#endif //LABA5_CUSTOMER_H
