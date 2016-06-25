/*************************************
	Feedback.cpp

	Gets the "feedback" from user
	sets the "feedback case"
**************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "media advisor.h"
#include "Feedback.h"

#pragma warning(disable: 4715)
int Feedback::feedback_rules(int feedback)
{
	switch(feedback)
	{
	case 1:
		return 0;
	case 2:
		return 1;
	}
}

void Feedback::question()
{
	cout << "Q3: Is feedback on the trainee\'s progress required or not required?" << endl;
}

void Feedback::set_feedback()
{
	do
	{
		SetConsoleTextAttribute(console, 0xf0);
		cout << "A: ";
		cin >> feedback;
	}while(feedback < 1 || feedback > FEED_SIZE);
}

void Feedback::set_feedback_case()
{
	feedback_case = feedback_rules(feedback);
	//cout << "feedback is: " << feedbacks[feedback_case] << endl;
}

int Feedback::get_feedback()
{
	return feedback_case;
}