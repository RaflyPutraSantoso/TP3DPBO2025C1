#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

// Kelas Casing yang mewarisi dari kelas Komponen
class Casing : public Komponen {
    private:
        string tipeCasing;
    
    public:
        Casing() {}

        // Konstruktor dengan parameter untuk menginisialisasi tipeCasing, merk, dan nama
        Casing(string tipeCasing, string merk, string nama) 
            : Komponen(merk, nama) {
            this->tipeCasing = tipeCasing;
        }
    
        // Setter
        void setTipeCasing(string tipeCasing) {
            this->tipeCasing = tipeCasing;
        }
        
        // Getter
        string getTipeCasing() {
            return tipeCasing;
        }
    
    ~Casing()
    {
        
    }
};