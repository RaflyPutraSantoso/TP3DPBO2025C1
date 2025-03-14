#pragma once
#include <iostream>
#include <string>

using namespace std;

// Kelas Komponen sebagai kelas dasar (base class)
class Komponen {
private:
    string merk;
    string nama;

public:
    Komponen()
    {

    }

      // Konstruktor dengan parameter untuk menginisialisasi merk dan nama
    Komponen(string merk, string nama)
    {
        this->merk = merk;
        this->nama = nama;
    }

    //setter
    void setMerk(string merk)
    {
        this->merk = merk;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    //getter
    string getMerk()
    {
        return merk;
    }

    string getNama()
    {
        return nama;
    }

    ~Komponen()
    {
        
    }
};