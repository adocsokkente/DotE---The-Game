#include "item.h"
#include <iostream>


/** Tömb osztály kívül implementált függvényei */

/// Tárgy nevét beállító függvény
void Item::setName(const std::string& n)
{
    name = n;
}

/// Tárgy tulajdonságait beállító függvény
void Item::setDescription(const std::string& d)
{
    description = d;
}
