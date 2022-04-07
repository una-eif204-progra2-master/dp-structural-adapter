//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_OILINGALLONCLASSADAPTER_H
#define DP_CREATIONAL_ADAPTER_OILINGALLONCLASSADAPTER_H
#include "IOilInGallon.h"
#include "OilInLitre.h"

/**
 * Adapter Class Interface
 *
 * OilInGallonClassAdapter is an adapter class which extends adaptee implementation class
 * OilInLitre and implement target interface IOilInGallon.
 */
class OilInGallonClassAdapter : public OilInLitre, public IOilInGallon {
public:
    double GALLON_X_LITER = 3.78541;
    Oil buyOilInGallon(double price, double quantityInGallon) override;
    double convertGallonToLitre(double gallonQuantity);
};


#endif //DP_CREATIONAL_ADAPTER_OILINGALLONCLASSADAPTER_H
