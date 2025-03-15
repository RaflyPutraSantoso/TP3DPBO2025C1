from Komponen import Komponen

class Vga(Komponen):
    #atribut private
    __vram_gb = ""
    __tipe_vga = ""

    #konstruktor
    def __init__(self, vram_gb, tipe_vga, merk, nama):
        super().__init__(merk, nama)
        self._vram_gb = vram_gb
        self._tipe_vga = tipe_vga

    #setter
    def set_vram_gb(self, vram_gb):
        self._vram_gb = vram_gb

    def set_tipe_vga(self, tipe_vga):
        self._tipe_vga = tipe_vga

    #getter
    def get_vram_gb(self):
        return self._vram_gb

    def get_tipe_vga(self):
        return self._tipe_vga