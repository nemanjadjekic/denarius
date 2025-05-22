#include "loan_account.h"

LoanAccount::LoanAccount(std::string name, const double amount)
    : Account(std::move(name), amount){};

LoanAccount::~LoanAccount() = default;

void LoanAccount::m_update_monthly() {
    this->withdraw(50);
}

