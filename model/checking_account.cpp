#include "checking_account.h"

CheckingAccount::CheckingAccount(std::string name, const double balance)
    : Account(std::move(name), balance) {};

CheckingAccount::~CheckingAccount() override = default;

void CheckingAccount::m_update_monthly() override {
    constexpr double account_fee = 5;
    withdraw(account_fee);
}

