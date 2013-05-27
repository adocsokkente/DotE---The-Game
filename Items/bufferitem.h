#ifndef BUFFERITEM_H
#define BUFFERITEM_H

#include "item.h"
#include <iostream>

/** Buffer Item osztály */

class BufferItem : public Item
{
    ///Maximális korlát
    unsigned UseMax;
    ///Felhasználtság számláló
    unsigned UseCtr;
public:
    ///Konstruktor
    BufferItem(std::string n = std::string(), ///Név
               std::string d = std::string(), ///Leírás
               bool s = false,                ///Eladhatóság
               unsigned Max = 1,              ///Maximális felhasználhatóság
               unsigned Cnt = 0)              ///Jelenlegi felhasználtság
               : Item(n,d,s),                 ///Alaposztály konstruktorának meghívása
               UseMax(Max),                   ///Maximális felhasználtság beállítása
               UseCtr(Cnt)                    ///Jelenlegi felhasználtság beállítása
               { /** Itt semmit nem kell csinálni */ }

    ///Counter lekérdezése
    virtual unsigned getCtr(void) {return UseCtr;}
    ///Maximális korlát lekérdezése
    virtual unsigned getMax(void) {return UseMax;}
    ///Counter direkt beállítása
    virtual void setCtr(unsigned c) {UseCtr=c;}
    ///Maximális érték direkt beállítása
    virtual void setMax(unsigned m) {UseMax=m;}
    ///Counter növelése eggyel
    virtual BufferItem& operator++() {++UseCtr; return *this;}
    ///Counter csökkentése eggyel
    virtual BufferItem& operator--() {--UseCtr; return *this;}
    ///Annak lekérdezése, hogy elértük-e a maximális kapacitást
    virtual bool isOnMaxCap(void) {return UseCtr>=UseMax;}
    ///Destruktor
    virtual ~BufferItem(){ /** Itt semmit nem kell csinálni */ }
};

#endif // BUFFERITEM_H
