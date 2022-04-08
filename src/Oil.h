//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_OIL_H
#define DP_CREATIONAL_ADAPTER_OIL_H


#include <ostream>
#include <iostream>

using namespace std;

class Oil {
private:
    double price;
    double quantityInLiter;
public:
    Oil();

    Oil(double price, double quantityInLiter);

    virtual ~Oil();

    double getPrice() const;

    void setPrice(double price);

    double getQuantityInLiter() const;

    void setQuantityInLiter(double quantityInLiter);

    friend ostream &operator<<(ostream &os, const Oil &oil);
};


#endif //DP_CREATIONAL_ADAPTER_OIL_H
