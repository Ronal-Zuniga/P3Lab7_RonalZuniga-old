#include "MagoRavenclaw.h"
#include <ctime>
#include <cstdlib>

MagoRavenclaw::MagoRavenclaw(int _creatividad, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->creatividad = _creatividad;
}


int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

void MagoRavenclaw::setCreatividad(int _creatividad){
	this->creatividad = _creatividad;
}

string MagoRavenclaw::toString(){
	return Mago::toString() + "Creatividad: " + to_string(this->creatividad) + "\n";
}