
using namespace std;

class Grade
{
public:
    // default constructor
    Grade();
    //destructor
    ~Grade();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setGrade(int value);
    // accessor method
    int getGrade() const;
private:
    int value;
};
