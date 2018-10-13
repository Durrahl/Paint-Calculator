#include "stdafx.h"
#include "Input.h"
#include <iostream>
#include <string>
#include "Room.h"

Input::Input()
{
	//Decleration
	Room room; //Object used to store room dimensions;
	


		//Text variables
	std::string dimFields[9] = {"","","","","","","","",""};

	//Start of input
		std::cout << "Please input the Depth of the room: ";

}


Input::~Input()
{
}

float Input::getInput()
{
	std::string inputStr;
	bool acceptInput = false;
	float input;

	

	while(acceptInput == false) {
		std::cin >> inputStr; //Take input for requested mesure.
		try
		{
			input = std::stof(inputStr);
			acceptInput = true;
		}
		catch (const std::exception&)
		{
			std::cout << std::endl << "The input cannot contain alphabetical characters, Please input it again using only numerical characters: ";
		}
	}
	return input;
}
