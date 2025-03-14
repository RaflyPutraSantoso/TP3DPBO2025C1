#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

// Kelas Vga yang merupakan turunan dari kelas Komponen
class Vga : public Komponen {
    private:
        int vramGB;
        string tipeVga;
    
    public:
        Vga() {}
    
        // Konstruktor dengan parameter vramGB, tipeVga, merk, dan nama
        Vga(int vramGB, string tipeVga, string merk, string nama) 
            : Komponen(merk, nama) {
            this->vramGB = vramGB;
            this->tipeVga = tipeVga;
        }
    
        //setter
        void setVramGB(int vramGB) {
            this->vramGB = vramGB;
        }
    
        void setTipeVga(string tipeVga) {
            this->tipeVga = tipeVga;
        }
    
        //getter
        int getVramGB() {
            return vramGB;
        }
    
        string getTipeVga() {
            return tipeVga;
        }
    
    ~Vga() 
    {
        
    }
};