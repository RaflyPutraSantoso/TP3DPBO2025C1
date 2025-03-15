from Komponen import Komponen

class Casing(Komponen):
    #atribut private
    __tipe_casing = ""

    #constructor
    def __init__(self, tipe_casing, merk, nama):
        super().__init__(merk, nama)
        self._tipe_casing = tipe_casing

    #setter
    def set_tipe_casing(self, tipe_casing):
        self._tipe_casing = tipe_casing

    #getter
    def get_tipe_casing(self):
        return self._tipe_casing