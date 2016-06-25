/********************************************
	Job.h

	Gets the "job" from user
	selects the proper "stimulus response"
*********************************************/

#ifndef JOB_H
#define JOB_H

class Job
{
private:
	int job;
	int stimulus_response;
	int job_rules(int job);

public:
	void question();
	void set_job();
	int get_stimulus_response();
	void set_stimulus_response();
};

#endif