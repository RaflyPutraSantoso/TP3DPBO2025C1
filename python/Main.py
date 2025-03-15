from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Ssd import Ssd
from Vga import Vga
from Psu import Psu
from Casing import Casing
from Peripheral import Peripheral
from Motherboard import Motherboard
from Komputer import Komputer

def main():
    # Membuat objek CPU, RAM, HDD, SSD, VGA, PSU, dan Casing
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    ram2 = Ram(8, "DDR4", "Kingston", "Fury")
    harddrive = Harddrive(2000, "HDD", "Seagate", "Barracuda")
    ssd = Ssd(1024, "SSD", "Samsung", "Evo")
    vga = Vga(12, "GDDR6", "NVIDIA", "RTX 3080")
    psu = Psu(850, "80+ Gold", "Corsair", "RM850x")
    casing = Casing("ATX", "NZXT", "H510")

    # Membuat objek Motherboard dengan komposisi lengkap
    ram_list = [ram1, ram2]
    motherboard = Motherboard(cpu, ram_list, harddrive, ssd, vga, psu, casing)

    # Membuat objek Komputer dengan Motherboard
    komputer = Komputer("PC Rafly", motherboard)

    # Menambahkan peripheral (Mouse dan Keyboard)
    mouse = Peripheral("Mouse", "VortexSeries", "INNOX3PRO")
    keyboard = Peripheral("Keyboard", "WEIKAV", "LUCKY65%")
    komputer.add_peripheral(mouse)
    komputer.add_peripheral(keyboard)

    # Menampilkan informasi komputer
    print("Informasi Komputer:")
    print("Nama:", komputer.get_nama())

    # Menampilkan informasi Motherboard
    print("Motherboard:")
    print("  CPU:", komputer.get_motherboard().get_cpu().get_merk(), 
          komputer.get_motherboard().get_cpu().get_nama(), 
          f"({komputer.get_motherboard().get_cpu().get_jumlah_core()} Core,", 
          f"{komputer.get_motherboard().get_cpu().get_kecepatan_ghz()} GHz)")

    # Menampilkan informasi RAM
    print("  RAM:")
    for ram in komputer.get_motherboard().get_ram_list():
        print("    ", ram.get_merk(), ram.get_nama(), 
              f"({ram.get_kapasitas_gb()} GB, {ram.get_ddr()})")

    # Menampilkan informasi HDD
    print("  HDD:", komputer.get_motherboard().get_harddrive().get_merk(), 
          komputer.get_motherboard().get_harddrive().get_nama(), 
          f"({komputer.get_motherboard().get_harddrive().get_kapasitas_gb()} GB,", 
          f"{komputer.get_motherboard().get_harddrive().get_tipe_drive()})")

    # Menampilkan informasi SSD
    print("  SSD:", komputer.get_motherboard().get_ssd().get_merk(), 
          komputer.get_motherboard().get_ssd().get_nama(), 
          f"({komputer.get_motherboard().get_ssd().get_kapasitas_gb()} GB,", 
          f"{komputer.get_motherboard().get_ssd().get_tipe_drive()})")

    # Menampilkan informasi VGA
    print("  VGA:", komputer.get_motherboard().get_vga().get_merk(), 
          komputer.get_motherboard().get_vga().get_nama(), 
          f"({komputer.get_motherboard().get_vga().get_vram_gb()} GB,", 
          f"{komputer.get_motherboard().get_vga().get_tipe_vga()})")

    # Menampilkan informasi PSU
    print("  PSU:", komputer.get_motherboard().get_psu().get_merk(), 
          komputer.get_motherboard().get_psu().get_nama(), 
          f"({komputer.get_motherboard().get_psu().get_watt()} Watt,", 
          f"{komputer.get_motherboard().get_psu().get_sertifikasi()})")

    # Menampilkan informasi Casing
    print("  Casing:", komputer.get_motherboard().get_casing().get_merk(), 
          komputer.get_motherboard().get_casing().get_nama(), 
          f"({komputer.get_motherboard().get_casing().get_tipe_casing()})")

    # Menampilkan peripheral
    print("Peripheral:")
    for peripheral in komputer.get_peripheral_list():
        print("  ", peripheral.get_tipe_peripheral() + ":", 
              peripheral.get_merk(), peripheral.get_nama())

if __name__ == "__main__":
    main()