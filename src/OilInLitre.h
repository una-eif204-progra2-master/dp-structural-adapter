//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_OILINLITRE_H
#define DP_CREATIONAL_ADAPTER_OILINLITRE_H
#include "IOilInLiter.h"

/**
 * This class defines implementation of actual logic.
 */
class OilInLitre : public IOilInLiter {
public:
    Oil buyOil(double price, double quantityInLitre) override;
};


#endif //DP_CREATIONAL_ADAPTER_OILINLITRE_H
