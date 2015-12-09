#include "rey.hpp"

Rey::Rey(unsigned int x, char c, bool color){
    X_ = x;
    Y_ = c-'a';
    white_ = color;
    visible_ = true;
}
Rey::~Rey(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}

void Rey::kill(){
    X_ = 0;
    Y_ = 0;
    white_ = false;
    visible_ = false;
}
    
bool Rey::owner(){
    return white_;
}
bool Rey::isitplaced(unsigned int x, char c){
    if(X_ == x && Y_ == c-'a') return true;
    return false;
}
void Rey::print(){
    if(white_){
        cout << "\033[1;37m r \033[0m";
    }else{
        cout << "\033[1;30m r \033[0m";
    }
}
void Rey::move(unsigned int x, char c){
    //Incompleto
    X_ = x;
    Y_ = c-'a';
}