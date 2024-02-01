#include "course_stream.h"
using namespace std;

// default constructor
Course_stream::Course_stream()
{
    value = 0;
}
//destructor
Course_stream:: ~Course_stream()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Course_stream::reset()
{
    value = 0;
}
void Course_stream::count()
{
    value = value + 1;
}
// mutator method
void Course_stream::setCourse_stream(int value)
{
    this->value = value;
}
// accessor method
int Course_stream::getCourse_stream() const
{
    return value;
}