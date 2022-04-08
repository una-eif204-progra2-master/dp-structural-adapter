//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "Oil.h"

Oil::Oil() {}

Oil::~Oil() {

}

Oil::Oil(double price, double quantityInLiter) : price(price), quantityInLiter(quantityInLiter) {
    double totalPrice = price * quantityInLiter;
    cout << "Total Cost of purchase is " << totalPrice << " dollars. Purchase Complete." << endl << endl;
}

double Oil::getPrice() const {
    return price;
}

void Oil::setPrice(double price) {
    Oil::price = price;
}

double Oil::getQuantityInLiter() const {
    return quantityInLiter;
}

void Oil::setQuantityInLiter(double quantityInLiter) {
    Oil::quantityInLiter = quantityInLiter;
}

ostream &operator<<(ostream &os, const Oil &oil) {
    os << "price: " << oil.price << " quantityInLiter: " << oil.quantityInLiter;
    return os;
}
