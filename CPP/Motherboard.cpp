#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Ssd.cpp"
#include "Vga.cpp"
#include "Psu.cpp"
#include "Casing.cpp"

// Kelas Motherboard yang merepresentasikan sebuah motherboard dengan berbagai komponen
class Motherboard {
private:
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;  
    Ssd ssd;
    Vga vga;
    Psu psu;
    Casing casing;

public:
    Motherboard() {}


    // Konstruktor dengan parameter untuk menginisialisasi semua komponen
    Motherboard(Cpu cpu, vector<Ram> ramList, Harddrive harddrive, Ssd ssd, Vga vga, Psu psu, Casing casing) {
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;  
        this->ssd = ssd;
        this->vga = vga;
        this->psu = psu;
        this->casing = casing;
    }

    //Setter
    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }

    void setRamList(vector<Ram> ramList) {
        this->ramList = ramList;
    }

    void addRam(Ram ram) {
        this->ramList.push_back(ram);
    }

    void setHarddrive(Harddrive harddrive) {  
        this->harddrive = harddrive;
    }

    void setSsd(Ssd ssd) {
        this->ssd = ssd;
    }

    void setVga(Vga vga) {
        this->vga = vga;
    }

    void setPsu(Psu psu) {
        this->psu = psu;
    }

    void setCasing(Casing casing) {
        this->casing = casing;
    }


    //Getter
    Cpu getCpu() {
        return cpu;
    }

    vector<Ram> getRamList() {
        return ramList;
    }

    Harddrive getHarddrive() {  
        return harddrive;
    }

    Ssd getSsd() {
        return ssd;
    }

    Vga getVga() {
        return vga;
    }

    Psu getPsu() {
        return psu;
    }

    Casing getCasing() {
        return casing;
    }

    ~Motherboard() 
    {
        
    }
};