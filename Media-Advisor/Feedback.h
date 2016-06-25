/*************************************
	Feedback.h

	Gets the "feedback" from user
	sets the "feedback case"
**************************************/

#ifndef FEEDBACK_H
#define FEEDBACK_H

class Feedback
{
private:
	int feedback;
	int feedback_case;
	int feedback_rules(int feedback);

public:
	void question();
	void set_feedback();
	void set_feedback_case();
	int get_feedback();
};

#endif