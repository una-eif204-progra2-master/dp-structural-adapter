//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "OilInLitre.h"

Oil OilInLitre::buyOil(double price, double quantityInLitre) {
    cout << "Purchasing " << quantityInLitre << " litres of Oil" << endl;
    Oil oil {price, quantityInLitre};
    return oil;
}