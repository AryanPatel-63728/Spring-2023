#include "home.h"
using namespace std;

// default constructor
Home::Home()
{
    value = 0;
}
//destructor
Home:: ~Home()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Home::reset()
{
    value = 0;
}
void Home::count()
{
    value = value + 1;
}
// mutator method
void Home::setHome(int value)
{
    this->value = value;
}
// accessor method
int Home::getHome() const
{
    return value;
}