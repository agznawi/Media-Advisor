#include <iostream>
#include <Windows.h>
using std::cout;
using std::endl;

#include "media advisor.h"
#include "Environment.h"
#include "Job.h"
#include "Feedback.h"
#include "Medium.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void main()
{
	system("color f0");

	Environment env;
	env.question();
	display_options(environments, ENVI_SIZE);
	env.set_environment();
	env.set_stimulus_situation();
	system("cls");

	Job job;
	job.question();
	display_options(jobs, JOBS_SIZE);
	job.set_job();
	job.set_stimulus_response();
	system("cls");

	Feedback fbck;
	fbck.question();
	display_options(feedbacks, FEED_SIZE);
	fbck.set_feedback();
	fbck.set_feedback_case();
	system("cls");

	Medium med;
	med.set_medium(&env, &job, &fbck);
	med.output();

	return;
}

// display the options of questions
void display_options(char* options[], int size)
{
	// takes pointer to array and its size
	// and prints out its contents each in line (with numbers)
	SetConsoleTextAttribute(console, 0xf8);
	cout << endl;
	for(int i = 0; i < size; ++i)
		cout << ((size > 9 && i < 9)? "0": "") << i+1 << ". " << options[i] << endl;
	cout << endl;
}
