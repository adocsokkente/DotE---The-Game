#ifndef ITEM_H
#define ITEM_H
#include <iostream>

/** Tárgy alaposztály */

class Item
{
protected:
    ///Tárgy neve
    std::string name;
    ///Tárgy leírása
    std::string description;
    ///Tárgy eladható-e
    bool sellable;
public:
    ///Konstruktor
    Item(std::string n = std::string(), ///Név
         std::string d = std::string(), ///Leírás
         bool s = false)                ///Eladhatóság
         : name(n),                     ///Név beállítása
         description(d),                ///Leírás beállítása
         sellable(s)                    ///Eladhatóság beállítása
         { /** Itt semmit nem kell csinálni */ }

    ///Név lekérdezése
    virtual const std::string& getName(void) const {return name;}
    ///Név beállítása
    virtual void setName(const std::string&);
    ///Leírás lekérdezése
    virtual const std::string& getDescription(void) const {return description;}
    ///Leírás beállítása
    virtual void setDescription(const std::string&);
    ///Eladhatóság lekérdezése
    virtual const bool getSellable(void) const {return sellable;}
    ///Eladhatóság beállítása
    virtual void setSellable(bool s) {sellable = s;}
    ///Destruktor
    virtual ~Item(){ /** Itt semmit nem kell csinálni */ }
};

#endif // ITEM_H
