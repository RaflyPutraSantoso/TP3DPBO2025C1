#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"


using namespace std;

// Kelas Cpu yang mewarisi dari kelas Komponen
class Cpu : public Komponen
{
private:
    int jumlahCore; // atribut menyimpan jumlah core cpu
    float kecepatanGHz; // atribut menyimpan kecepatan cpu dalam GHz
public:
    Cpu()
    {


    }


    // Konstruktor dengan parameter untuk menginisialisasi jumlahCore, kecepatanGHz, merk, dan nama
    Cpu(int jumlahCore, float kecepatanGHz, string merk, string nama) : Komponen(merk, nama)
    {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
    }

    //Setter
    void setJumlahCore(int jumlahCore)
    {
        this->jumlahCore = jumlahCore;
    }


    void setKecepatanGHz(float kecepatanGHz)
    {
        this->kecepatanGHz = kecepatanGHz;
    }


    //Getter
    int getJumlahCore()
    {
        return this->jumlahCore;
    }


    float getKecepatanGHz()
    {
        return this->kecepatanGHz;
    }


    ~Cpu()
    {


    }
};
