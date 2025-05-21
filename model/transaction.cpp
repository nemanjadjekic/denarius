#include "transaction.h"

Transaction::Transaction(
    std::string id,
    const std::chrono::year_month_day date,
    const double amount,
    const TransactionType type,
    std::string description,
    std::shared_ptr<Category> category)
        : m_id(std::move(id)),
        m_date(date),
        m_amount(amount),
        m_type(type),
        m_description(std::move(description)),
        m_category(std::move(category)) {}

double Transaction::get_amount() const {
    return m_amount;
}

std::shared_ptr<Category> Transaction::get_category() const {
    return m_category;
}

std::chrono::year_month_day Transaction::get_date() const {
    return m_date;
}
