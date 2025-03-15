from Komponen import Komponen

class Cpu(Komponen):
    #atribut private
    __jumlah_core = ""
    __kecepatan_ghz = ""

    #constructor
    def __init__(self, jumlah_core, kecepatan_ghz, merk="", nama=""):
        super().__init__(merk, nama)
        self.__jumlah_core = jumlah_core
        self.__kecepatan_ghz = kecepatan_ghz

    #setter
    def set_jumlah_core(self, jumlah_core):
        self.__jumlah_core = jumlah_core

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.__kecepatan_ghz = kecepatan_ghz

    #getter
    def get_jumlah_core(self):
        return self.__jumlah_core

    def get_kecepatan_ghz(self):
        return self.__kecepatan_ghz