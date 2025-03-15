from Komponen import Komponen

class Psu(Komponen):
    #atribut private
    __watt = ""
    __sertifikasi = ""

    #constructor
    def __init__(self, watt, sertifikasi, merk, nama):
        super().__init__(merk, nama)
        self._watt = watt
        self._sertifikasi = sertifikasi

    #setter
    def set_watt(self, watt):
        self._watt = watt

    def set_sertifikasi(self, sertifikasi):
        self._sertifikasi = sertifikasi

    #getter
    def get_watt(self):
        return self._watt

    def get_sertifikasi(self):
        return self._sertifikasi