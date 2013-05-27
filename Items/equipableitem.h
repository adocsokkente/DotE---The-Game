#ifndef EQUIPABLEITEM_H
#define EQUIPABLEITEM_H

#include <iostream>

#include "item.h"
#include "arguments.h"

/** Felszerelhetõ tárgy osztály */

class EquipableItem : public Item
{
protected:
    ///Módosítók tömbje
    int Modifier [NUMBER_OF_ARGUMENTS];
public:
    ///Konstruktor
    EquipableItem(std::string n = std::string(),    ///Név
                  std::string d = std::string(),    ///Leírás
                  bool s = false)                   ///Eladhatóság
                  :Item(n,d,s)                      ///Alaposztály konstruktorának meghívása
    {
        ///Alapértelmezetten 0-ba állítjuk az összes módosítót
        for (int i=0; i<NUMBER_OF_ARGUMENTS; i++)
            Modifier[i]=0;
    }

    ///Módosító beállítása - Kivételkezeléssel
    virtual void setModifier(int val, unsigned arg) {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; Modifier[arg]=val;}
    ///Módosító lekérdezése - Kivételkezeléssel
    virtual const int& getModifier(unsigned arg) const {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; return Modifier[arg];}
    ///Hozzáadás adott módosító értékéhez - Kivételkezeléssel
    virtual void AddToModifier(int val, unsigned arg) {if(arg>=NUMBER_OF_ARGUMENTS)throw "Unaccessable memory"; Modifier[arg]+= val;}
    ///Destruktor
    virtual ~EquipableItem() { /** Itt semmit nem kell csinálni */ }
};
#endif // EQUIPABLEITEM_H
