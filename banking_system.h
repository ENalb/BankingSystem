#ifndef BANKING_SYSTEM_H
#define BANKING_SYSTEM_H

#include "account.h"
#include <vector>

class BankingSystem {
public:
    BankingSystem(const std::string&);
    void add_account(const Account&);
    std::string get_name() const;
    void set_name(const std::string&);
    int getSize() const;

private:
    std::string name_;
    std::vector<Account> accounts_;
}; 

#endif
