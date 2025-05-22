#include "savings_account.h"

SavingsAccount::SavingsAccount(std::string name, const double balance)
    : Account(std::move(name), balance) {}

SavingsAccount::~SavingsAccount() = default;


void SavingsAccount::m_update_monthly() {
    constexpr double monthly_interest_rate = 5;
    this->deposit(monthly_interest_rate);
}

