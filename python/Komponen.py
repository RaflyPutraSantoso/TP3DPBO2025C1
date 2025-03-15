#deklarasi kelas
class Komponen():
    #atribut private
    __merk = ""
    __nama = ""

    #constuctor
    def __init__(self, merk = "", nama = ""):
        self._merk = merk
        self._nama = nama

    #setter
    def set_merk(self, merk):
        self._merk = merk

    def set_nama(self, nama):
        self._nama = nama

    #getter
    def get_merk(self):
        return self._merk

    def get_nama(self):
        return self._nama