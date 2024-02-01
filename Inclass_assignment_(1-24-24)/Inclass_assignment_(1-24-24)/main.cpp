#include <iostream>
#include "announcement.h"
#include "assignment.h"
#include "calander.h"
#include "course_stream.h"
#include "home.h"
#include "notification.h"
#include "quiz.h"
#include "discussion.h"
#include "grade.h"
#include "syllabus.h"

using namespace std;

int main()
{
    //instant metord
    Home home;
    Quiz quiz;
    Discussion discussion;
    Grade grade;
    Syllabus syllabus;
    Notification notification;
    Course_stream course_stream;
    Calander calander;
    Assignment assignnment;
    Announcement announcement;
    //check
    cout << "succusful exit...";
    return 0;
}
