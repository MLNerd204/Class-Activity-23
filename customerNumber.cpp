#include "customerNumber.hpp"
#include <cctype>

bool isValidCustomerNumber(const std::string& customerNumber) {
    if (customerNumber.length() != 6) {
        return false;
    }
    if (!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])) {
        return false;
    }
    for (int i = 2; i < 6; ++i) {
        if (!isdigit(customerNumber[i])) {
            return false;
        }
    }
    return true;
}
