#ifndef EQUIPABLEITEM_H
#define EQUIPABLEITEM_H

#include <iostream>

#include "item.h"
#include "arguments.h"

/** Felszerelhető tárgy osztály */

class EquipableItem : public Item
{
protected:
    ///Módosítók tömbje
    int Modifier [NUMBER_OF_ARGUMENTS];
public:
    ///Konstruktor
    EquipableItem(std::string n = std::string(), std::string d = std::string(), bool s = false):Item(n,d,s)
    {
        ///Alapértelmezetten 0-ba állítjuk az összes módosítót
        for (int i=0; i<NUMBER_OF_ARGUMENTS; i++)
            Modifier[i]=0;
    }
    ///Módosító beállítása
    virtual void setModifier(int val, unsigned arg) {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; Modifier[arg]=val;}
    ///Módosító lekérdezése
    virtual const int& getModifier(unsigned arg) const {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; return Modifier[arg];}
    ///Hozzáadás adott módosító értékéhez
    virtual void AddToModifier(int val, unsigned arg) {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; Modifier[arg]+= val;}
    ///Destruktor
    virtual ~EquipableItem() {}
};
#endif // EQUIPABLEITEM_H
