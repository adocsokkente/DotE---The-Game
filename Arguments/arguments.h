#ifndef ARGUMENTS_H
#define ARGUMENTS_H


/** Argumentum enumeráció */

enum Arguments
{
    ///Maximális életpont
    MaxHP = 0,
    ///Jelenlegi életpont
    CurHP,
    ///Maximális Force-pont
    MaxFP,
    ///Jelenlegi Force-pont
    CurFP,
    ///Világos - sötét oldal pont
    DLP,
    ///Erõ (fizikai) pont
    STR,
    ///Fizikai védekezés pont
    ARM,
    ///Erő ellenállás pont
    FRE,
    ///Garantált sebzés pont
    TRDM,
    ///Életpont regeneráció
    HPREG,
    ///Erőpont regeneráció
    FPREG,
    ///Argumentumok száma
    NUMBER_OF_ARGUMENTS
};

#endif // ARGUMENTS_H
