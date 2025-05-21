#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "transaction.h"

#include <string>
#include <vector>

class Account {
private:
    std::string m_name;
    double m_balance;
    std::vector<Transaction> m_transactions;

protected:
    void m_add_transaction(const Transaction &transaction);
    virtual void m_update_monthly() = 0;

public:
    Account(std::string name, double balance);
    virtual ~Account();
    void deposit(double amount);
    void withdraw(double amount);
    [[nodiscard]] double get_balance() const;
    [[nodiscard]] std::vector<Transaction> get_transactions() const;
};

#endif //ACCOUNT_H
