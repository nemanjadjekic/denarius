#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "account.h"

class SavingsAccount final : public Account {
protected:
    void m_update_monthly() override;

public:
    SavingsAccount(std::string name, double balance);
    ~SavingsAccount() override;
};

#endif //SAVINGS_ACCOUNT_H
