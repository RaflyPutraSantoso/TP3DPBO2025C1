#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

// Kelas Ssd yang merupakan turunan dari kelas Komponen
class Ssd : public Komponen {
    private:
        int kapasitasGB;
        string tipeDrive;
    
    public:
        Ssd() {}
    
          // Konstruktor dengan parameter kapasitasGB, tipeDrive, merk, dan nama
        Ssd(int kapasitasGB, string tipeDrive, string merk, string nama) 
            : Komponen(merk, nama) {
            this->kapasitasGB = kapasitasGB;
            this->tipeDrive = tipeDrive;
        }
    
        //setter
        void setKapasitasGB(int kapasitasGB) {
            this->kapasitasGB = kapasitasGB;
        }
    
        void setTipeDrive(string tipeDrive) {
            this->tipeDrive = tipeDrive;
        }
    
        //getter
        int getKapasitasGB() {
            return kapasitasGB;
        }
    
        string getTipeDrive() {
            return tipeDrive;
        }
    
    ~Ssd() 
    {

    }
};