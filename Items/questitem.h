#ifndef QUESTITEM_H
#define QUESTITEM_H


/** Küldetés tárgy osztály */

class QuestItem : public Item
{
protected:
    ///Küldetés azonosító
    unsigned questID;
public:
    ///Konstruktor
    QuestItem(std::string n = std::string(),    ///Név
              std::string d = std::string(),    ///Leírás
              bool s = false,                   ///Eladhatóság
              unsigned q = 0)                   ///Küldetés ID
              :Item(n,d,s),                     ///Alaposztály konstruktorának meghívása
              questID(q)                        ///Küldetés ID konstruktorának meghívása
              { /** Itt semmit nem kell csinálni */ }

    ///Azonosító lekérdezése
    virtual const unsigned getQuestID(void) const {return questID;}
    ///Azonosító beállítása
    virtual void setQuestID(const unsigned q) {questID = q;}
    ///Destruktor
    virtual ~QuestItem() { /** Itt semmit nem kell csinálni */ }
};

#endif // QUESTITEM_H

