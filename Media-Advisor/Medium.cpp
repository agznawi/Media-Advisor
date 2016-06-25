/*********************************************************
	Medium.cpp

	Gets "stimulus situation", "stiumulus response",
	 and "feedback case",
	outputs the proper medium
**********************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include "media advisor.h"
#include "Medium.h"

int Medium::medium_rules(int stim_situ, int stim_resp, int feedback)
{
	// rule 9
	if(stim_situ == 2 && stim_resp == 1 && feedback == 0)
		return 0;
	// rule 10, 12, 13
	if(feedback == 0 &&
		( (stim_situ == 3 && stim_resp == 3) ||
		(stim_situ == 1 && stim_resp == 0) ||
		(stim_situ == 0 && stim_resp == 3) ))
		return 1;
	// rule 11, 14
	if( (stim_situ == 1 && stim_resp == 2 && feedback == 1) ||
		(stim_situ == 0 && stim_resp == 0 && feedback == 0) )
		return 3;

	return NO_CONCLUSION;
}

void Medium::set_medium(Environment* x, Job* y, Feedback* z)
{
	medium = medium_rules(x->get_stimulus_situation(), y->get_stimulus_response(), z->get_feedback());
}

void Medium::output()
{
	if(medium != NO_CONCLUSION)
	{
		SetConsoleTextAttribute(console, 0xf0);
		cout << "Output: medium is ";
		SetConsoleTextAttribute(console, 0xe2);
		cout << mediums[medium] << endl << endl;
		SetConsoleTextAttribute(console, 0xf0);
	}
	else
	{
		SetConsoleTextAttribute(console, 0xfc);
		cout << "I am unable to draw any conclusions on the basis of the data.\n\n";
		SetConsoleTextAttribute(console, 0xf0);
	}
}