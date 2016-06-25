/*********************************************************
	Medium.h

	Gets "stimulus situation", "stiumulus response",
	 and "feedback case"
	outputs the proper medium
**********************************************************/

#ifndef MEDIUM_H
#define MEDIUM_H

#include "Environment.h"
#include "Job.h"
#include "Feedback.h"

class Medium
{
private:
	int medium;
	int medium_rules(int stim_situ, int stim_resp, int feedback);

public:
	void set_medium(Environment* x, Job* y, Feedback* z);
	void output();
};

#endif