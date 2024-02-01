
using namespace std;

class Assignment
{
public:
    // default constructor
    Assignment();
    //destructor
    ~Assignment();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setAssignment(int value);
    // accessor method
    int getAssignment() const;
private:
    int value;
};
