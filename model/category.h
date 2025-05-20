#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category {
private:
    std::string m_name;
    std::string m_description;

public:
    Category(std::string name, std::string description);
    [[nodiscard]] std::string get_name() const;
    [[nodiscard]] std::string get_description() const;
};

#endif //CATEGORY_H
