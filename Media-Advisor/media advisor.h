#ifndef MEDIA_ADVISOR_H
#define MEDIA_ADVISOR_H

#include <Windows.h>

#define ENVI_SIZE 14 // Number of "environments" elements
#define JOBS_SIZE 12 // Number of "jobs" elements
#define FEED_SIZE 2  // Number of "feedbacks" elements
#define NO_CONCLUSION 1000

//Tables
extern char* stimulus_situations[];
extern char* environments[];
extern char* stimulus_responses[];
extern char* jobs[];
extern char* feedbacks[];
extern char* mediums[];

extern HANDLE console;

// display the options of questions
void display_options(char* options[], int size);

#endif