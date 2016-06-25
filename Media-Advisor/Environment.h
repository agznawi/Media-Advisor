/*******************************************
	Environment.h

	Gets the "environment" from user
	selects the proper "stimulus situation"
********************************************/

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

class Environment
{
private:
	int environment;
	int stimulus_situation;
	int environment_rules(int environment);

public:
	void question();
	void set_environment();
	int get_stimulus_situation();
	void set_stimulus_situation();
};

#endif