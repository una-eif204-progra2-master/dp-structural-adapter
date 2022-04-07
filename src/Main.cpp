//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "IOilInGallon.h"
#include "OilInGallonClassAdapter.h"
#include "OilInGallonObjectAdapter.h"

using namespace std;

/**
 * Consider a scenario where the client is running an oil import business.
 * The Client system is designed to work with the imperial system, which only understand Oil quantity in Gallons.
 * The client wants the functionality to purchase oil from the traders.
 * @return
 */
int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Structural pattern - Adapter" << endl << endl;

    int PRICE_LITER = 2; // 2$ Per liter

    clog << "CLIENT     >   TARGET (IOilInGallon)" << endl;
    cout << "Implementation with [Class Adapter]" << endl;
    IOilInGallon *adapterClassInterface = new OilInGallonClassAdapter;
    adapterClassInterface->buyOilInGallon(PRICE_LITER, 1);
    adapterClassInterface->buyOilInGallon(PRICE_LITER, 10);

    clog << "CLIENT     >   TARGET (IOilInGallon)" << endl;
    cout << endl << "Implementation with [Object Adapter] (Preferred Way)" << endl;
    IOilInGallon *adapterObjectInterface = new OilInGallonObjectAdapter;
    adapterObjectInterface->buyOilInGallon(PRICE_LITER, 1);
    adapterObjectInterface->buyOilInGallon(PRICE_LITER, 40);

    return 0;
}
