//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "OilInGallonObjectAdapter.h"

Oil OilInGallonObjectAdapter::buyOilInGallon(double price, double quantityInGallon) {
    clog << "ADAPTER    >   ";
    double quantityInLitre = convertGallonToLitre(quantityInGallon);
    return oilInLiter->buyOil(price, quantityInLitre);
}

double OilInGallonObjectAdapter::convertGallonToLitre(double gallonQuantity) {
    return gallonQuantity * GALLON_X_LITER;
}
