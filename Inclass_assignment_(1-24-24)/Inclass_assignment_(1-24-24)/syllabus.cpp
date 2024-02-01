#include "syllabus.h"
using namespace std;

// default constructor
Syllabus::Syllabus()
{
    value = 0;
}
//destructor
Syllabus:: ~Syllabus()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Syllabus::reset()
{
    value = 0;
}
void Syllabus::count()
{
    value = value + 1;
}
// mutator method
void Syllabus::setSyllabus(int value)
{
    this->value = value;
}
// accessor method
int Syllabus::getSyllabus() const
{
    return value;
}