#include <iostream>
using namespace std;

class Caballo{
    private:
    unsigned int X_;
    unsigned int Y_;
    bool white_;
    bool visible_;
    public:
    
    Caballo(unsigned int x, char c, bool color);
    ~Caballo();
    
    void kill();
    bool owner();
    bool isitplaced(unsigned int x, char c);
    void print();
    void move(unsigned int x, char c);
};