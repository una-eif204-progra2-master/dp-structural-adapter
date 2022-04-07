//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_OILINGALLONOBJECTADAPTER_H
#define DP_CREATIONAL_ADAPTER_OILINGALLONOBJECTADAPTER_H
#include "IOilInGallon.h"
#include "IOilInLiter.h"
#include "OilInLitre.h"

class OilInGallonObjectAdapter:public IOilInGallon {
private:
    IOilInLiter *oilInLiter = new OilInLitre();
public:
    double GALLON_X_LITER = 3.78541;
    Oil buyOilInGallon(double price, double quantityInGallon) override;
    double convertGallonToLitre(double gallonQuantity);
};


#endif //DP_CREATIONAL_ADAPTER_OILINGALLONOBJECTADAPTER_H
