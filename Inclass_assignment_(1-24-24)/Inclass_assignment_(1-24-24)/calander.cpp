#include "calander.h"
using namespace std;

// default constructor
Calander::Calander()
{
    value = 0;
}
//destructor
Calander:: ~Calander()
{

}

// method of the class - act on the class fuction (member fuction)
void Calander::reset()
{
    value = 0;
}
void Calander::count()
{
    value = value + 1;
}
// mutator method
void Calander::setCalander(int value)
{
    this->value = value;
}
// accessor method
int Calander::getCalander() const
{
    return value;
}