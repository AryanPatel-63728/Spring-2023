
using namespace std;

class Notification
{
public:
    // default constructor
    Notification();
    //destructor
    ~Notification();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setNotification(int value);
    // accessor method
    int getNotification() const;
private:
    int value;
};