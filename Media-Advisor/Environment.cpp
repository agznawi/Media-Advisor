/*******************************************
	Environment.cpp

	Gets the "environment" from user
	selects the proper "stimulus situation"
********************************************/

#include <iostream>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;

#include "media advisor.h"
#include "Environment.h"

#pragma warning(disable: 4715)
int Environment::environment_rules(int environment)
{
	switch(environment)
	{
	case 1:	case 2:	case 3:	case 4:
		return 0;
	case 5: case 6: case 7: case 8:
		return 1;
	case 9: case 10: case 11:
		return 2;
	case 12: case 13: case 14:
		return 3;
	}
}

void Environment::question()
{
	SetConsoleTextAttribute(console, 0xf0);
	cout << "Q1: What sort of environment is a trainee dealing with on the job?" << endl;
}

void Environment::set_environment()
{
	do
	{
		SetConsoleTextAttribute(console, 0xf0);
		cout << "A: ";
		cin >> environment;
	}while(environment < 1 || environment > ENVI_SIZE);
}

int Environment::get_stimulus_situation()
{
	return stimulus_situation;
}

void Environment::set_stimulus_situation()
{
	stimulus_situation = environment_rules(environment);
	//cout << "stimulus situation is: " << stimulus_situations[stimulus_situation] << endl;
}