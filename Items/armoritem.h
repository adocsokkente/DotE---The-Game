#ifndef ARMORITEM_H
#define ARMORITEM_H

#include <iostream>
#include "equipableitem.h"

/** Armor osztály */

class ArmorItem : public EquipableItem
{
    ///Fizikai védelem
    unsigned def;
    ///Erő ellenállás
    unsigned res;
public:
    ///Konstruktor
    ArmorItem(std::string n,            ///Név
              std::string d,            ///Leírás
              bool sellable,            ///Eladhatóság
              unsigned d = 1,           ///Fizikai védelem
              unsigned r = 0)           ///Erő ellenállás
              : EquipableItem(n, d, s), ///Alaposztály konstruktorának meghívása
              def(d),                   ///Fizikai védelem beállítása
              res(r)                    ///Erő ellenállás beállítása
              { /** Itt semmit nem kell csinálni */ }

    ///Fizikai védelem lekérdezése
    unsigned getDef(void) {return def;}
    ///Erő ellenállás lekérdezése
    unsigned getRes(void) {return res;}
    ///Fizikai védelem beállítása
    void setDef(unsigned d) {def = d;}
    ///Erő ellenállás beállítása
    void setRes(unsigned r) {res = r;}
    ///Destruktor
    ~ArmorItem() { /** Itt semmit nem kell csinálni */ }
};

#endif // ARMORITEM_H
