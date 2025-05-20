#include "category.h"

Category::Category(std::string name, std::string description)
    : m_name(std::move(name)), m_description(std::move(description)) {}

std::string Category::get_name() const {
    return m_name;
}

std::string Category::get_description() const {
    return m_description;
}

