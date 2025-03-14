#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

// Kelas Psu yang mewarisi dari kelas Komponen
class Psu : public Komponen {
    private:
        int watt;
        string sertifikasi;
    
    public:
        Psu() {}

        // Konstruktor dengan parameter untuk menginisialisasi watt, sertifikasi, merk, dan nama
        Psu(int watt, string sertifikasi, string merk, string nama) 
            : Komponen(merk, nama) {
            this->watt = watt;
            this->sertifikasi = sertifikasi;
        }
    

        // Setter
        void setWatt(int watt) {
            this->watt = watt;
        }
    
        void setSertifikasi(string sertifikasi) {
            this->sertifikasi = sertifikasi;
        }
    
        // Getter
        int getWatt() {
            return watt;
        }
    
        string getSertifikasi() {
            return sertifikasi;
        }
    
    ~Psu()
    {
        
    }
};