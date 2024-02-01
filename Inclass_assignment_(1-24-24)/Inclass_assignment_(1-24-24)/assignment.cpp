#include "assignment.h"
using namespace std;

// default constructor
Assignment::Assignment()
{
    value = 0;
}
//destructor
Assignment:: ~Assignment()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Assignment::reset()
{
    value = 0;
}
void Assignment::count()
{
    value = value + 1;
}
// mutator method
void Assignment::setAssignment(int value)
{
    this->value = value;
}
// accessor method
int Assignment::getAssignment() const
{
    return value;
}