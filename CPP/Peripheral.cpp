#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

// Kelas Peripheral yang mewarisi dari kelas Komponen
class Peripheral : public Komponen {
    private:
        string tipePeripheral;
    
    public:
        Peripheral() {}

        // Konstruktor dengan parameter untuk menginisialisasi tipePeripheral, merk, dan nama
        Peripheral(string tipePeripheral, string merk, string nama) 
            : Komponen(merk, nama) {
            this->tipePeripheral = tipePeripheral;
        }
    
        // Setter
        void setTipePeripheral(string tipePeripheral) {
            this->tipePeripheral = tipePeripheral;
        }
        
        // Getter
        string getTipePeripheral() {
            return tipePeripheral;
        }
    
    ~Peripheral()
    {
        
    }
};