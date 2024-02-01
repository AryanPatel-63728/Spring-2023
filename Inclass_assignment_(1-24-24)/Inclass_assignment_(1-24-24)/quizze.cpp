#include "quiz.h"
using namespace std;

// default constructor
Quiz::Quiz()
{
    value = 0;
}
//destructor
Quiz:: ~Quiz()
{

}//destructor

// method of the class - act on the class fuction (member fuction)
void Quiz::reset()
{
    value = 0;
}
void Quiz::count()
{
    value = value + 1;
}
// mutator method
void Quiz::setQuiz(int value)
{
    this->value = value;
}
// accessor method
int Quiz::getQuiz() const
{
    return value;
}