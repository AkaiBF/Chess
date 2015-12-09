#include "torre.hpp"

Torre::Torre(unsigned int x, char c, bool color){
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Torre::~Torre(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Torre::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

bool Torre::owner(){
    return white_;
}
bool Torre::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Torre::print(){
    if(white_){
        cout << "\033[1;37m t \033[0m";
    }else{
        cout << "\033[1;30m t \033[0m";
    }
}
void Torre::move(unsigned int x, char c){
    if(x == X_ or c-'a' == Y_){
        X_ = x;
        Y_ = c-'a';
    }
}