
using namespace std;

class Announcement
{
public:
    // default constructor
    Announcement();
    //destructor
    ~Announcement();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setAnnouncement(int value);
    // accessor method
    int getAnnouncement() const;
private:
    int value;
};
