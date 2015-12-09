#include <iostream>
using namespace std;

class Alfil{
    private:
    unsigned int X_;
    unsigned int Y_;
    bool white_;
    bool visible_;
    public:
    
    Alfil(unsigned int x, char c, bool color);
    ~Alfil();
    
    void kill();
    bool owner();
    bool isitplaced(unsigned int x, char c);
    void print();
    void move(unsigned int x, char c);
};