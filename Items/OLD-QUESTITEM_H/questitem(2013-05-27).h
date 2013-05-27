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
    QuestItem(std::string n = std::string(), std::string d = std::string(), bool s = false):Item(n,d,s),questID(0){}
    ///Azonosító lekérdezése
    virtual const unsigned getQuestID(void) const {return questID;}
    ///Azonosító beállítása
    virtual void setQuestID(const unsigned q) {questID = q;}
    ///Destruktor
    virtual ~QuestItem() {}
};

#endif // QUESTITEM_H

