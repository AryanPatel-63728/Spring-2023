
using namespace std;

class Quiz
{
public:
    // default constructor
    Quiz();
    //destructor
    ~Quiz();
    // method of the class - act on the class fuction (member fuction)
    void reset();
    void count();
    // mutator method
    void setQuiz(int value);
    // accessor method
    int getQuiz() const;
private:
    int value;
};
