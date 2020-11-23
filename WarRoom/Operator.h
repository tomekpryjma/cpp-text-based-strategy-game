#ifndef WAR_ROOM_OPERATOR_H
#define WAR_ROOM_OPERATOR_H
#pragma once

#include <iostream>

class Operator {
private:
    std::string name;

public:
    Operator() {}
    Operator(std::string operatorName);

    std::string getName() { return name; }
    std::string getNameWithCallsignPrefix();
};

#endif

//Operator(std::string operatorName) {
 //   name = operatorName;
//}