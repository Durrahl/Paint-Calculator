

#include "stdafx.h"
#include "Calculation.h"
#include "Input.h"
#include <stdlib.h>
#include <iostream>
int main()
{
		//--Splash
	std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------|| Paint Calculator ||------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------||    By Durrahl    ||------------------------------------------------" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
		//--Decleration
	Calculation calculation;
	Input input;
	float amountOfPaint = 0;

		//--Gather room bounds
	amountOfPaint = input.Gather();

		//--Output Results
	std::cout << "The amount of paint required is: " << (amountOfPaint / 1000) << " Litres" << std::endl;

		//--Misc
	system("PAUSE");
    return 0;
}

