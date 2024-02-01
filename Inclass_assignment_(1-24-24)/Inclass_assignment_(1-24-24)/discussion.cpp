#include "discussion.h"
using namespace std;

// default constructor
Discussion::Discussion()
{
    value = 0;
}
//destructor
Discussion:: ~Discussion()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Discussion::reset()
{
    value = 0;
}
void Discussion::count()
{
    value = value + 1;
}
// mutator method
void Discussion::setDiscussion(int value)
{
    this->value = value;
}
// accessor method
int Discussion::getDiscussion() const
{
    return value;
}