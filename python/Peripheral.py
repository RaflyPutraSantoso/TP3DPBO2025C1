from Komponen import Komponen

class Peripheral(Komponen):
    #atribut private
    __tipe_peripheral = ""

    #constructor
    def __init__(self, tipe_peripheral, merk, nama):
        super().__init__(merk, nama)
        self._tipe_peripheral = tipe_peripheral

    #setter
    def set_tipe_peripheral(self, tipe_peripheral):
        self._tipe_peripheral = tipe_peripheral

    #getter
    def get_tipe_peripheral(self):
        return self._tipe_peripheral