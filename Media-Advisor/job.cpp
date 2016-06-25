/********************************************
	Job.cpp

	Gets the "job" from user
	selects the proper "stimulus response"
*********************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "media advisor.h"
#include "Job.h"

#pragma warning(disable: 4715)
int Job::job_rules(int job)
{
	switch(job)
	{
	case 1:	case 2:	case 3:
		return 0;
	case 4: case 5: case 6:
		return 1;
	case 7: case 8: case 9:
		return 2;
	case 10: case 11: case 12:
		return 3;
	}
}

void Job::question()
{
	cout << "Q2: In what way is a trainee expected to act or respond on the job?" << endl;
}

void Job::set_job()
{
	do
	{
		SetConsoleTextAttribute(console, 0xf0);
		cout << "A: ";
		cin >> job;
	}while(job < 1 || job > JOBS_SIZE);
}

int Job::get_stimulus_response()
{
	return stimulus_response;
}

void Job::set_stimulus_response()
{
	stimulus_response = job_rules(job);
	//cout << "stimulus response is: " << stimulus_responses[stimulus_response] << endl;
}
