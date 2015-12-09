#include <iostream>
using namespace std;

class Rey{
    private:
    unsigned int X_;
    unsigned int Y_;
    bool white_;
    bool visible_;
    public:
    
    Rey(unsigned int x, char c, bool color);
    ~Rey();
    
    void kill();
    bool owner();
    bool isitplaced(unsigned int x, char c);
    void print();
    void move(unsigned int x, char c);
};