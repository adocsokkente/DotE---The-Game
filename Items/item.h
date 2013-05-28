#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <SDL_image.h>

#include "image.h"

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
    ///Tárgyak képére mutató Image struktúra
    const static Image img;
public:
    ///Konstruktor
    Item(std::string n = std::string(), ///Név
         std::string d = std::string(), ///Leírás
         bool s = false,                ///Eladhatóság
         SDL_Surface* p = NULL)         ///Mutató a képre
         : name(n),                     ///Név beállítása
         description(d),                ///Leírás beállítása
         sellable(s)                    ///Eladhatóság beállítása
         { /** Itt semmit nem kell csinálni */ }

    ///Név lekérdezése
    virtual const std::string& getName(void) const {return name;}
    ///Név beállítása
    virtual void setName(const std::string& n) {name = n;}
    ///Leírás lekérdezése
    virtual const std::string& getDescription(void) const {return description;}
    ///Leírás beállítása
    virtual void setDescription(const std::string& d) {description = d;}
    ///Eladhatóság lekérdezése
    virtual const bool getSellable(void) const {return sellable;}
    ///Eladhatóság beállítása
    virtual void setSellable(bool s) {sellable = s;}
    ///Tárgy árának lekérdezése
    //virtual unsigned getPrice(void) const = 0;
    ///Kép pointerének lekérdezése
    static const SDL_Surface * getPic(void) {return img.getPic();}
    ///Destruktor
    virtual ~Item(){ /** Itt semmit nem kell csinálni */ }
};

#endif // ITEM_H
