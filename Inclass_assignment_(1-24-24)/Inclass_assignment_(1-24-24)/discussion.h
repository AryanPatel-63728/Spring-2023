
using namespace std;

class Discussion
{
public:
    // default constructor
    Discussion();
    //destructor
    ~Discussion();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setDiscussion(int value);
    // accessor method
    int getDiscussion() const;
private:
    int value;
};
