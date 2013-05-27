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
    Item(std::string n = std::string(), std::string d = std::string(), bool s = false) : name(n), description(d), sellable(s){}
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
    virtual ~Item(){}
};

#endif // ITEM_H
