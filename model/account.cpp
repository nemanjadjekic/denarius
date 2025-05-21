#include "account.h"

Account::Account(std::string name, const double balance)
    : m_name(std::move(name)), m_balance(balance) {}

Account::~Account() = default;

void Account::m_add_transaction(const Transaction &transaction) {
    m_transactions.push_back(transaction);
}

void Account::deposit(const double amount) {
    m_balance += amount;
}

void Account::withdraw(const double amount) {
    m_balance -= amount;
}

double Account::get_balance() const {
    return m_balance;
}

std::vector<Transaction> Account::get_transactions() const {
    return m_transactions;
}
