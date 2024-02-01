#include "grade.h"
using namespace std;

// default constructor
Grade::Grade()
{
    value = 0;
}
//destructor
Grade:: ~Grade()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Grade::reset()
{
    value = 0;
}
void Grade::count()
{
    value = value + 1;
}
// mutator method
void Grade::setGrade(int value)
{
    this->value = value;
}
// accessor method
int Grade::getGrade() const
{
    return value;
}