#include "MagoGryffindor.h"
#include <ctime>
#include <cstdlib>

MagoGryffindor::MagoGryffindor(int _atrevimiento, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->atrevimiento = _atrevimiento;
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

void MagoGryffindor::setAtrevimiento(int _atrevimiento){
	this->atrevimiento = _atrevimiento;
}

string MagoGryffindor::toString(){
	return Mago::toString() + "Atrevimiento: " + to_string(this->atrevimiento) + "\n";
}