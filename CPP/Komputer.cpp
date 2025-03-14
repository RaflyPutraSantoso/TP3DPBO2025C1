#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Motherboard.cpp"
#include "Peripheral.cpp"


class Komputer {
    private:
        string nama;
        Motherboard motherboard;
        vector<Peripheral> peripheralList;
    
    public:
        Komputer() {}
    
        Komputer(string nama, Motherboard motherboard) {
            this->nama = nama;
            this->motherboard = motherboard;
        }
        
        //setter
        void setNama(string nama) {
            this->nama = nama;
        }
    
        void setMotherboard(Motherboard motherboard) {
            this->motherboard = motherboard;
        }
    
        void addPeripheral(Peripheral peripheral) {
            peripheralList.push_back(peripheral);
        }
        

        //getter
        string getNama() {
            return nama;
        }
    
        Motherboard getMotherboard() {
            return motherboard;
        }
    
        vector<Peripheral> getPeripheralList() {
            return peripheralList;
        }
    
    ~Komputer() 
    {
        
    }
};