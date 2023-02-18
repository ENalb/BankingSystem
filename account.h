#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "person.h"

class Account {
public:
    Account(int, const Person&, double = 0);
    Account() = default;

    int get_id() const;
    void set_id(int);
    Person get_person() const;
    void set_person(const Person&);
    double get_money() const;

    void deposit(double money);
    void withdrow(double money);

private:
    int id_;
    Person owner_;
    double money_;
};

#endif //ACCOUNT_H