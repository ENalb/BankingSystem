#include "account.h"

Account::Account(int id, const Person& owner, double money) 
    : id_(id)
    , owner_(owner)
    , money_(money)
{}

int Account::get_id() const {
    return id_;
}

void Account::set_id(int id) {
    id_ = id;
}

Person Account::get_person() const {
    return owner_;
}

void Account::set_person(const Person& owner) {
    owner_ = owner;
}

double Account::get_money() const {
    return money_;
}

void Account::deposit(double money) {
    money_ += money;
}

void Account::withdrow(double money) {
    if (money_ <= money) {
        money_ -= money;
    }
}