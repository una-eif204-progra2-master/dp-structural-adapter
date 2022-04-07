//
// Created by Maikol Guzman Alan on 4/7/22.
//

#ifndef DP_CREATIONAL_ADAPTER_IOILINLITER_H
#define DP_CREATIONAL_ADAPTER_IOILINLITER_H

#include "Oil.h"

/**
 * Adaptee a interface that is converted to another class using a so-called adapter class.
 * This defines the definition of actual logic class.
 *
 */
class IOilInLiter {
public:
    virtual Oil buyOil(double price, double quantityInLiter) = 0;

    virtual ~IOilInLiter();
};


#endif //DP_CREATIONAL_ADAPTER_IOILINLITER_H
