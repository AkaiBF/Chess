#include "peon.hpp"

Peon::Peon(unsigned int x, char c, bool color){
    simbolo_ = 'p';
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Peon::~Peon(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Peon::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}
    
bool Peon::owner(){
    return white_;
}
bool Peon::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Peon::print(){
    if(white_){
        cout << "\033[1;37m " << simbolo_ <<" \033[0m";
    }else{
        cout << "\033[1;30m " << simbolo_ <<" \033[0m";
    }
}

void Peon::damifb(char c){
    simbolo_ = c;
}

void Peon::move(unsigned int x, char c){
    X_ = x;
    Y_ = c-'a';
    
}