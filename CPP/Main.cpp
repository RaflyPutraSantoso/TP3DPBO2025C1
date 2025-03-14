#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Ssd.cpp"
#include "Vga.cpp"
#include "Psu.cpp"
#include "Casing.cpp"
#include "Peripheral.cpp"
#include "Motherboard.cpp"
#include "Komputer.cpp"

using namespace std;

int main() {
    // Membuat objek CPU, RAM, HDD, SSD, VGA, PSU, dan Casing
    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Ram ram2(8, "DDR4", "Kingston", "Fury");
    Harddrive harddrive(2000, "HDD", "Seagate", "Barracuda");
    Ssd ssd(1024, "SSD", "Samsung", "Evo");
    Vga vga(12, "GDDR6", "NVIDIA", "RTX 3080");
    Psu psu(850, "80+ Gold", "Corsair", "RM850x");
    Casing casing("ATX", "NZXT", "H510");

    // Membuat objek Motherboard dengan komposisi lengkap
    vector<Ram> ramList = {ram1, ram2};
    Motherboard motherboard(cpu, ramList, harddrive, ssd, vga, psu, casing);

    // Membuat objek Komputer dengan Motherboard
    Komputer komputer("PC Rafly", motherboard);

    // Menambahkan peripheral (Mouse dan Keyboard)
    Peripheral mouse("Mouse", "VortexSeries", "INNOX3PRO");
    Peripheral keyboard("Keyboard", "WEIKAV", "LUCKY65%");
    komputer.addPeripheral(mouse);
    komputer.addPeripheral(keyboard);

    // Menampilkan informasi komputer
    cout << "Informasi Komputer:" << endl;
    cout << "Nama: " << komputer.getNama() << endl;

    // Menampilkan informasi Motherboard
    cout << "Motherboard:" << endl;
    cout << "  CPU: " << komputer.getMotherboard().getCpu().getMerk() << " " 
         << komputer.getMotherboard().getCpu().getNama() << " (" 
         << komputer.getMotherboard().getCpu().getJumlahCore() << " Core, " 
         << komputer.getMotherboard().getCpu().getKecepatanGHz() << " GHz)" << endl;

    cout << "  RAM:" << endl;
    for (Ram ram : komputer.getMotherboard().getRamList()) {
        cout << "    " << ram.getMerk() << " " << ram.getNama() << " (" 
             << ram.getKapasitasGB() << " GB, " << ram.getDdr() << ")" << endl;
    }

    cout << "  HDD: " << komputer.getMotherboard().getHarddrive().getMerk() << " " 
         << komputer.getMotherboard().getHarddrive().getNama() << " (" 
         << komputer.getMotherboard().getHarddrive().getKapasitasGB() << " GB, " 
         << komputer.getMotherboard().getHarddrive().getTipeDrive() << ")" << endl;

    cout << "  SSD: " << komputer.getMotherboard().getSsd().getMerk() << " " 
         << komputer.getMotherboard().getSsd().getNama() << " (" 
         << komputer.getMotherboard().getSsd().getKapasitasGB() << " GB, " 
         << komputer.getMotherboard().getSsd().getTipeDrive() << ")" << endl;

    cout << "  VGA: " << komputer.getMotherboard().getVga().getMerk() << " " 
         << komputer.getMotherboard().getVga().getNama() << " (" 
         << komputer.getMotherboard().getVga().getVramGB() << " GB, " 
         << komputer.getMotherboard().getVga().getTipeVga() << ")" << endl;

    cout << "  PSU: " << komputer.getMotherboard().getPsu().getMerk() << " " 
         << komputer.getMotherboard().getPsu().getNama() << " (" 
         << komputer.getMotherboard().getPsu().getWatt() << " Watt, " 
         << komputer.getMotherboard().getPsu().getSertifikasi() << ")" << endl;

    cout << "  Casing: " << komputer.getMotherboard().getCasing().getMerk() << " " 
         << komputer.getMotherboard().getCasing().getNama() << " (" 
         << komputer.getMotherboard().getCasing().getTipeCasing() << ")" << endl;

    // Menampilkan peripheral
    cout << "Peripheral:" << endl;
    for (Peripheral peripheral : komputer.getPeripheralList()) {
        cout << "  " << peripheral.getTipePeripheral() << ": " 
             << peripheral.getMerk() << " " << peripheral.getNama() << endl;
    }

    return 0;
}