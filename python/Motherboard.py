from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Ssd import Ssd
from Vga import Vga
from Psu import Psu
from Casing import Casing

class Motherboard:
    #atribut private
    __cpu = ""
    __ram_list = []
    __harddrive = ""
    __ssd = ""
    __vga = ""
    __psu = ""
    __casing = ""

    #constructor
    def __init__(self, cpu, ram_list, harddrive, ssd, vga, psu, casing):
        self._cpu = cpu
        self._ram_list = ram_list
        self._harddrive = harddrive
        self._ssd = ssd
        self._vga = vga
        self._psu = psu
        self._casing = casing

    #setter
    def set_cpu(self, cpu):
        self._cpu = cpu

    def set_ram_list(self, ram_list):
        self._ram_list = ram_list

    def add_ram(self, ram):
        self._ram_list.append(ram)

    def set_harddrive(self, harddrive):
        self._harddrive = harddrive

    def set_ssd(self, ssd):
        self._ssd = ssd

    def set_vga(self, vga):
        self._vga = vga

    def set_psu(self, psu):
        self._psu = psu

    def set_casing(self, casing):
        self._casing = casing


    #getter
    def get_cpu(self):
        return self._cpu

    def get_ram_list(self):
        return self._ram_list

    def get_harddrive(self):
        return self._harddrive

    def get_ssd(self):
        return self._ssd

    def get_vga(self):
        return self._vga

    def get_psu(self):
        return self._psu

    def get_casing(self):
        return self._casing