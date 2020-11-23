// WarRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

#include "WarRoom.h";
#include "Operator.h"

int main()
{
    srand((unsigned) time(NULL));
    const int operatorAmount = 5;
    std::vector<Operator> operators;

    for (int index = 0; index < operatorAmount; index++) {
        std::string operatorName = randomNameGenerator();
        operators.push_back(operatorName);
    }


    std::cout << "=== War Room ===\n";
    std::cout << "Your operators:\n";

    for (std::vector<Operator>::size_type index = 0; index != operators.size(); index++) {
        Operator op = operators[index];
        std::cout << op.getNameWithCallsignPrefix() << '\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
