#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

// Kelas Ram yang mewarisi dari kelas Komponen
class Ram : public Komponen
{
private:
    int kapasitasGB;
    string ddr;
public:
    Ram()
    {


    }

    // Konstruktor dengan parameter untuk menginisialisasi kapasitasGB, ddr, merk, dan nama
    Ram(int kapasitasGB, string ddr, string merk, string nama) : Komponen(merk, nama)
    {
        this->kapasitasGB = kapasitasGB;
        this->ddr = ddr;
    }

    //Setter
    void setKapasitasGB(int kapasitasGB)
    {
        this->kapasitasGB = kapasitasGB;
    }


    void setDdr(float ddr)
    {
        this->ddr = ddr;
    }


    //Getter
    int getKapasitasGB()
    {
        return this->kapasitasGB;
    }


    string getDdr()
    {
        return this->ddr;
    }


    ~Ram()
    {


    }
};
