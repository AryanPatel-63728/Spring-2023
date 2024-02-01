#include "announcement.h"
using namespace std;

// default constructor
Announcement::Announcement()
{
    value = 0;
}
//destructor
Announcement:: ~Announcement()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Announcement::reset()
{
    value = 0;
}
void Announcement::count()
{
    value = value + 1;
}
// mutator method
void Announcement::setAnnouncement(int value)
{
    this->value = value;
}
// accessor method
int Announcement::getAnnouncement() const
{
    return value;
}