//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_IOILINGALLON_H
#define DP_CREATIONAL_ADAPTER_IOILINGALLON_H


#include "Oil.h"

/**
 * The target interface. This is the interface that the client wants the target object.
 */
class IOilInGallon {
public:
    virtual Oil buyOilInGallon(double price, double quantityInGallon) = 0;

    virtual ~IOilInGallon();
};


#endif //DP_CREATIONAL_ADAPTER_IOILINGALLON_H
