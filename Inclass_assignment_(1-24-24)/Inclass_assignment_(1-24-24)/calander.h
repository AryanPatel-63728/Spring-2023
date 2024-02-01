
using namespace std;

class Calander
{
public:
    // default constructor
    Calander();
    //destructor
    ~Calander();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setCalander(int value);
    // accessor method
    int getCalander() const;
private:
    int value;
};
