#ifndef WEAPONITEM_H
#define WEAPONITEM_H

#include <iostream>
#include "equipableitem.h"

/** Fegyver osztály */

class WeaponItem : public EquipableItem
{
protected:
    ///Maximális sebzés
    unsigned dmgMax;
    ///Minimális sebzés
    unsigned dmgMin;
public:
    ///Konstruktor
    WeaponItem(std::string n = std::string(), ///Név
               std::string d = std::string(), ///Leírás
               bool s = false,                ///Eladhatóság
               unsigned Max = 1,              ///Maximális sebzés
               unsigned Min = 1)              ///Minimális sebzés
               : EquipableItem(n,d,s),        ///Alaposztály konstruktorának meghívása
               dmgMax(Max),                   ///Maximális sebzés beállítása
               dmgMin(Min)                    ///Minimális sebzés beállítása
               { /** Itt semmit nem kell csinálni */ }

    ///Minimális sebzés beállítása
    virtual void setDmgMin(unsigned m) {dmgMin=m;}
    ///Maximális sebzés beállítása
    virtual void setDmgMax(unsigned m) {dmgMax=m;}
    ///Minimális sebzés lekérdezése
    virtual unsigned getDmgMin(void) {return dmgMin;}
    ///Maximális sebzés lekérdezése
    virtual unsigned getDmgMax(void) {return dmgMax;}
    ///Destruktor
    virtual ~WeaponItem() { /** Itt semmit nem kell csinálni */ }
};

#endif // WEAPONITEM_H
