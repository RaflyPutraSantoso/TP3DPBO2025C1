from Komponen import Komponen

class Ram(Komponen):
    #atribut private
    __kapasitas_gb = ""
    __ddr = ""

    #konstruktor
    def __init__(self, kapasitas_gb, ddr, merk, nama):
        super().__init__(merk, nama)
        self._kapasitas_gb = kapasitas_gb
        self._ddr = ddr

    #setter
    def set_kapasitas_gb(self, kapasitas_gb):
        self._kapasitas_gb = kapasitas_gb

    def set_ddr(self, ddr):
        self._ddr = ddr

    #getter
    def get_kapasitas_gb(self):
        return self._kapasitas_gb

    def get_ddr(self):
        return self._ddr