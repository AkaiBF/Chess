#include <iostream>
using namespace std;

class Torre{
    private:
    unsigned int X_;
    unsigned int Y_;
    bool white_;
    bool visible_;
    public:
    
    Torre(unsigned int x, char c, bool color);
    ~Torre();
    
    void kill();
    bool owner();
    bool isitplaced(unsigned int x, char c);
    void print();
    void move(unsigned int x, char c);
};