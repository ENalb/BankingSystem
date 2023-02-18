#include "banking_system.h"

BankingSystem::BankingSystem(const std::string& name) 
    : name_(name)
{}

void BankingSystem::add_account(const Account& account) {
    accounts_.push_back(account);
}

std::string BankingSystem::get_name() const {
    return name_;
}

void BankingSystem::set_name(const std::string& name) {
    name_ = name;
}

int BankingSystem::getSize() const
{
    return accounts_.size();
}