#include <iostream>
using namespace std;

class Peon{
    private:
    unsigned int X_;
    unsigned int Y_;
    bool white_;
    bool visible_;
    char simbolo_;
    public:
    
    Peon(unsigned int x, char c, bool color);
    ~Peon();
    
    void kill();
    bool owner();
    bool isitplaced(unsigned int x, char c);
    void print();
    void damifb(char c);
    void move(unsigned int x, char c);
};