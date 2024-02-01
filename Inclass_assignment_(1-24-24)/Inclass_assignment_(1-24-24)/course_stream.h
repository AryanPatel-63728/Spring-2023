
using namespace std;

class Course_stream
{
public:
    // default constructor
    Course_stream();
    //destructor
    ~Course_stream();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setCourse_stream(int value);
    // accessor method
    int getCourse_stream() const;
private:
    int value;
};
