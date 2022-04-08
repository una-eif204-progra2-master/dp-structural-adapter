//
// Created by Maikol Guzman Alan on 4/7/22.
//

#include "OilInLitre.h"

Oil OilInLitre::buyOil(double price, double quantityInLitre) {
    clog << "ADAPTEE |"<< endl;
    cout << "Purchasing " << quantityInLitre << " liter of Oil" << endl;
    Oil oil {price, quantityInLitre};
    return oil;
}
