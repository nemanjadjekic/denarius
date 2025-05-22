#ifndef LOAN_ACCOUNT_H
#define LOAN_ACCOUNT_H

#include "account.h"

class LoanAccount final : public Account {
protected:
    void m_update_monthly() override;

public:
    LoanAccount(std::string name, double amount);
    ~LoanAccount() override;
};

#endif //LOAN_ACCOUNT_H
