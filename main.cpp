#include <iostream>
#include "customerNumber.hpp"

using namespace std;

int main() {
    string customerNumber;
    cout<<"Enter the customer number: ";
    cin>>customerNumber;

    if (isValidCustomerNumber(customerNumber)) {
        cout<<"Valid customer number."<<endl;
    } else {
        cout<<"Invalid customer number."<<endl;
    }

    return 0;
}
