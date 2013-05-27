#include <iostream>
#include "item.h"
#include "equipableitem.h"
#include "arguments.h"
#include "questitem.h"
#include "bufferitem.h"

using namespace std;

/** TESZTPROGRAM AZ ITEMEK TESZTELÉSÉHEZ */

///Kiírja az Item típusú objektumok adatait a standard kimenetre
void itemWriteToCout(const Item& i)
{
    ///Kiírjuk a tárgy nevét
    cout << "Nev: " << i.getName() << endl;
    ///Kiírjuk a tárgy leírását
    cout << "Leiras: " << i.getDescription() << endl;
    ///Ha a sellable érték true, az írjuk ki, hogy eladható, ...
    if (i.getSellable()) cout << "Eladhato" << endl;
    ///Egyébként azt, hogy nem eladható
    else cout << "Nem eladhato" << endl;
}

///Származtatott, felszerelhetõ Item objetumok kiíratása a standar kimenetre
void equipableItemWriteToCout(const EquipableItem& i)
{
    ///Kiírjuk az alapadatokat, ...
    itemWriteToCout(i);
    ///Majd sorban a módosító tömb adatait
    for(unsigned it=0; it<NUMBER_OF_ARGUMENTS; it++)
        cout << i.getModifier(it) << endl;
}

int main()
{
    ///Try-catch blokk indítása
    try
    {
        ///Jelzésképp a standard kimenetre is kiíratunk
        cout << "TESZTPROGRAM INDITASA" << endl << endl;

        ///Létrehozunk két felszerelhetõ tárgyat (a nevek most nem lényegesek)
        EquipableItem i1("Alma","Finom alma.", true), i2("Edes korte","Edes korte.", false);

        ///Kiíratás megkezdése
        cout << "1. Kiiratas" << endl << endl;
        ///Kiírjuk a 2. adatait
        itemWriteToCout(i2);
        cout << endl;
        ///Hozzáadunk az erõpontokhoz 3-at
        i1.AddToModifier(3,STR);

        ///Bõvebb kiíratás
        cout << "2. Kiiratas" << endl << endl;
        ///Kiíratjuk az elsõ új adatait
        equipableItemWriteToCout(i1);
        cout << endl;

        ///Létrehozunk alap értékekkel egy küldetéstárgyat
        QuestItem q1;

        ///Küldetéstárgy kiíratása
        cout << "3. Kiiratas" << endl << endl;
        ///Kiíratjuk az értékeket
        itemWriteToCout(q1);
        cout << endl;

        ///Buffer Item létrehozása
        BufferItem b1("Varazsital","Magikus ereju ital.",true), b2("Dragako","Misztikus dragako.",true,3,1);
        ///Kiíratások megkezdése
        cout << "4. Kiiratas" << endl << endl;
        ///Alapadatok kiíratása
        itemWriteToCout(b1);
        ///Jelenlegi, maximális kapacitás kiíratása
        cout << "Jelenlegi kapacitas: " << b1.getCtr() << endl << "Maximalis kapacitas: " << b1.getMax() << endl;
        cout << endl;
        ///Operátorok tesztelése
        if ((++b1).getCtr()==b1.getMax()) cout << "Elertuk a maximalis kapacitast!" << endl;
        if ((--b1).getCtr()==b1.getMax()) cout << "Ezt elvileg nem szabad kiirnia!" << endl;
        if((++(--(++(++b2)))).getCtr()==b2.getMax()) cout << "Elertuk a maximalix kapacitast!" << endl;
        if((++b1).isOnMaxCap()) cout << "Elertuk a maximalis kapacitast!" << endl;
    }
    ///Hibakezelés
    catch (const char* s)
    {
        ///Amennyiben const char * típusú kivétel jön, szimplán kiíratjuk
        cout << s << endl;
    }

    ///Teszt vége
    return 0;
}
