// abstract_factory_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
where abstract factory can be used?
we are designing a user interface
and we have multiple theams
and each theams will have a specific set and colour of buttons, textbox, dials etc


*/


#include <iostream>
#include "GteenWidget.h"
#include "PinkWidget.h"
#include "IWidgetFactory.h"

int main()
{
    std::unique_ptr<IWidgetFactory> p1_fac = std::make_unique<GteenWidget>();
    printf("green widget------------------------------\n");
    printf("%d\n", p1_fac->createButton());
    printf("%d\n", p1_fac->createScrollbar());


    std::unique_ptr<IWidgetFactory> p2_fac = std::make_unique<PinkWidget>();
    printf("pink widget------------------------------\n");
    printf("%d\n", p2_fac->createButton());
    printf("%d\n", p2_fac->createScrollbar());
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
