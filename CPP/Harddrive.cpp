#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"


using namespace std;

// Kelas Harddrive yang mewarisi dari kelas Komponen
class Harddrive : public Komponen
{
private:
    int kapasitasGB; // Atribut untuk menyimpan kapasitas hard drive dalam GB
    string tipeDrive; // Atribut untuk menyimpan tipe hard drive (misalnya, SSD atau HDD)
public:
    Harddrive()
    {


    }

    // Konstruktor dengan parameter untuk menginisialisasi kapasitasGB, tipeDrive, merk, dan nama
    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama) : Komponen(merk, nama)
    {
        this->kapasitasGB = kapasitasGB;
        this->tipeDrive = tipeDrive;
    }


    // Setter
    void setKapasitasGB(int kapasitasGB)
    {
        this->kapasitasGB = kapasitasGB;
    }


    void setTipeDrive(float tipeDrive)
    {
        this->tipeDrive = tipeDrive;
    }


    // Getter
    int getKapasitasGB()
    {
        return this->kapasitasGB;
    }


    string getTipeDrive()
    {
        return this->tipeDrive;
    }


    ~Harddrive()
    {


    }
};
