#include "MagoHufflepuff.h"
#include <ctime>
#include <cstdlib>

MagoHufflepuff::MagoHufflepuff(int _paciencia, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->paciencia = _paciencia;
}

int MagoHufflepuff::getPaciencia(){
	return this->paciencia;
}

void MagoHufflepuff::setPaciencia(int _paciencia){
	this->paciencia = _paciencia;
}

string MagoHufflepuff::toString(){
	return Mago::toString() + "Paciencia: " + to_string(this->paciencia) + "\n";
}