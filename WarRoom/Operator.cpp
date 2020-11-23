#include "Operator.h"
#include <iostream>
#include <string>

Operator::Operator(std::string operatorName) {
	name = operatorName;
}

std::string Operator::getNameWithCallsignPrefix() {
	return "callsign: " + name;
}