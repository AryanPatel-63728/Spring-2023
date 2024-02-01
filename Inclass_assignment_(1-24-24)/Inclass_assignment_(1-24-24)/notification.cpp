#include "notification.h"
using namespace std;

// default constructor
Notification::Notification()
{
    value = 0;
}
//destructor
Notification:: ~Notification()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Notification::reset()
{
    value = 0;
}
void Notification::count()
{
    value = value + 1;
}
// mutator method
void Notification::setNotification(int value)
{
    this->value = value;
}
// accessor method
int Notification::getNotification() const
{
    return value;
}