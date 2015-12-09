#include "caballo.hpp"

Caballo::Caballo(unsigned int x, char c, bool color){
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Caballo::~Caballo(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Caballo::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}
    
bool Caballo::owner(){
    return white_;
}
bool Caballo::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Caballo::print(){
    if(white_){
        cout << "\033[1;37m c \033[0m";
    }else{
        cout << "\033[1;30m c \033[0m";
    }
}
void Caballo::move(unsigned int x, char c){
    //Incompleto
    X_ = x;
    Y_ = c-'a';
}