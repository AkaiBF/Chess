#include "dama.hpp"

Dama::Dama(unsigned int x, char c, bool color){
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Dama::~Dama(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Dama::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}
    
bool Dama::owner(){
    return white_;
}
bool Dama::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Dama::print(){
    if(white_){
        cout << "\033[1;37m d \033[0m";
    }else{
        cout << "\033[1;30m d \033[0m";
    }
}
void Dama::move(unsigned int x, char c){
    //Incompleto
    X_ = x;
    Y_ = c-'a';
}