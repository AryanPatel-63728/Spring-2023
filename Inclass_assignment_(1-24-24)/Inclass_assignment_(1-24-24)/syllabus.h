
using namespace std;

class Syllabus
{
public:
    // default constructor
    Syllabus();
    //destructor
    ~Syllabus();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setSyllabus(int value);
    // accessor method
    int getSyllabus() const;
private:
    int value;
};
