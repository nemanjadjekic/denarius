#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "category.h"
#include "types.h"

#include <chrono>
#include <memory>
#include <string>

class Transaction {
private:
    std::string m_id;
    std::chrono::year_month_day m_date;
    double m_amount;
    TransactionType m_type;
    std::string m_description;
    std::shared_ptr<Category> m_category;

public:
    Transaction(
        std::string id,
        std::chrono::year_month_day date,
        double amount,
        TransactionType type,
        std::string description,
        std::shared_ptr<Category> category);
    [[nodiscard]] double get_amount() const;
    [[nodiscard]] std::shared_ptr<Category> get_category() const;
    [[nodiscard]] std::chrono::year_month_day get_date() const;

};

#endif //TRANSACTION_H
