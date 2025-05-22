#include "checking_account.h"

CheckingAccount::CheckingAccount(std::string name, const double balance)
    : Account(std::move(name), balance) {};

CheckingAccount::~CheckingAccount() override = default;

void CheckingAccount::m_update_monthly() override {
    constexpr double maintenance_fee = 5;
    this->withdraw(maintenance_fee);
}

