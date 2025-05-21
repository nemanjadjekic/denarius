#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "account.h"

class CheckingAccount : private Account {
private:
    void m_update_monthly() override;

public:
    CheckingAccount(std::string name, double balance);
    ~CheckingAccount() override;
};
#endif //CHECKING_ACCOUNT_H
