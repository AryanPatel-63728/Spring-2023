
using namespace std;

class Home
{
public:
    // default constructor
    Home();
    //destructor
    ~Home();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setHome(int value);
    // accessor method
    int getHome() const;
private:
    int value;
};
