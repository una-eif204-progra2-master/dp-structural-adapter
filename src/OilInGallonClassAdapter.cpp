//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "OilInGallonClassAdapter.h"

Oil OilInGallonClassAdapter::buyOilInGallon(double price, double quantityInGallon) {
    clog << "ADAPTER    >   ";
    double quantityInLitre = convertGallonToLitre(quantityInGallon);
    return OilInLitre::buyOil(price, quantityInLitre);
}

double OilInGallonClassAdapter::convertGallonToLitre(double gallonQuantity) {
    return gallonQuantity * GALLON_X_LITER;
}
