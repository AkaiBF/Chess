#include "alfil.hpp"

Alfil::Alfil(unsigned int x, char c, bool color){
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Alfil::~Alfil(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Alfil::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}
    
bool Alfil::owner(){
    return white_;
}
bool Alfil::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Alfil::print(){
    if(white_){
        cout << "\033[1;37m a \033[0m";
    }else{
        cout << "\033[1;30m a \033[0m";
    }
}
void Alfil::move(unsigned int x, char c){
    //Incompleto
    X_ = x;
    Y_ = c-'a';
}