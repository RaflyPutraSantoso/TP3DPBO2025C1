from Motherboard import Motherboard
from Peripheral import Peripheral

class Komputer:
    #atribut private
    __nama = ""
    __motherboard = Motherboard
    __peripheral_list = []

    #constructor
    def __init__(self, nama, motherboard):
        self._nama = nama
        self._motherboard = motherboard
        self._peripheral_list = []


    #setter
    def set_nama(self, nama):
        self._nama = nama

    def set_motherboard(self, motherboard):
        self._motherboard = motherboard

    def add_peripheral(self, peripheral):
        self._peripheral_list.append(peripheral)


    #getter
    def get_nama(self):
        return self._nama

    def get_motherboard(self):
        return self._motherboard

    def get_peripheral_list(self):
        return self._peripheral_list