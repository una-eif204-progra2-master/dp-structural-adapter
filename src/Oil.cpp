//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "Oil.h"

Oil::Oil() {}

Oil::~Oil() {

}

double Oil::getPrice() const {
    return price;
}

void Oil::setPrice(double price) {
    Oil::price = price;
}

double Oil::getQuantityInLitre() const {
    return quantityInLitre;
}

void Oil::setQuantityInLitre(double quantityInLitre) {
    Oil::quantityInLitre = quantityInLitre;
}

std::ostream &operator<<(std::ostream &os, const Oil &oil) {
    os << "price: " << oil.price << " quantityInLitre: " << oil.quantityInLitre;
    return os;
}

Oil::Oil(double price, double quantityInLitre) : price(price), quantityInLitre(quantityInLitre) {
    double totalPrice = price * quantityInLitre;
    cout << "Total Cost of purchase is " << totalPrice << " dollars. Purchase Complete." << endl << endl;
}