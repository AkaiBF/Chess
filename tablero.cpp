#include <iostream>
#include "peon.hpp"
#include "torre.hpp"
#include "caballo.hpp"
#include "alfil.hpp"
#include "dama.hpp"
#include "rey.hpp"
using namespace std;

Rey rb(5,'a',true);
Dama db(4,'a',true);
Alfil ab1(3,'a',true);
Alfil ab2(6,'a',true);
Caballo cb1(2,'a',true);
Caballo cb2(7,'a',true);
Torre tb1(1,'a',true);
Torre tb2(8,'a',true);
Peon pb1(1,'b',true);
Peon pb2(2,'b',true);
Peon pb3(3,'b',true);
Peon pb4(4,'b',true);
Peon pb5(5,'b',true);
Peon pb6(6,'b',true);
Peon pb7(7,'b',true);
Peon pb8(8,'b',true);
Rey rn(5,'h',false);
Dama dn(4,'h',false);
Alfil an1(3,'h',false);
Alfil an2(6,'h',false);
Caballo cn1(2,'h',false);
Caballo cn2(7,'h',false);
Torre tn1(1,'h',false);
Torre tn2(8,'h',false);
Peon pn1(1,'g',false);
Peon pn2(2,'g',false);
Peon pn3(3,'g',false);
Peon pn4(4,'g',false);
Peon pn5(5,'g',false);
Peon pn6(6,'g',false);
Peon pn7(7,'g',false);
Peon pn8(8,'g',false);

void bb(){
    cout << "\033[1;37m-----\033[0m";
}

void bn(){
    cout << "\033[1;30m-----\033[0m";
}

void pb(){
    cout << "\033[1;37m|\033[0m";
}

void pn(){
    cout << "\033[1;30m|\033[0m";
}

void pp(int n, char c){
    if (pb1.isitplaced(n,c))
    pb1.print();
    else if (pb2.isitplaced(n,c))
    pb2.print();
    else if (pb3.isitplaced(n,c))
    pb3.print();
    else if (pb4.isitplaced(n,c))
    pb4.print();
    else if (pb5.isitplaced(n,c))
    pb5.print();
    else if (pb6.isitplaced(n,c))
    pb6.print();
    else if (pb7.isitplaced(n,c))
    pb7.print();
    else if (pb8.isitplaced(n,c))
    pb8.print();
    else if (tb1.isitplaced(n,c))
    tb1.print();
    else if(tb2.isitplaced(n,c))
    tb2.print();
    else if(cb1.isitplaced(n,c))
    cb1.print();
    else if(cb2.isitplaced(n,c))
    cb2.print();
    else if(ab1.isitplaced(n,c))
    ab1.print();
    else if(ab2.isitplaced(n,c))
    ab2.print();
    else if(rb.isitplaced(n,c))
    rb.print();
    else if(db.isitplaced(n,c))
    db.print();
    else if (pn1.isitplaced(n,c))
    pn1.print();
    else if (pn2.isitplaced(n,c))
    pn2.print();
    else if (pn3.isitplaced(n,c))
    pn3.print();
    else if (pn4.isitplaced(n,c))
    pn4.print();
    else if (pn5.isitplaced(n,c))
    pn5.print();
    else if (pn6.isitplaced(n,c))
    pn6.print();
    else if (pn7.isitplaced(n,c))
    pn7.print();
    else if (pn8.isitplaced(n,c))
    pn8.print();
    else if (tn1.isitplaced(n,c))
    tn1.print();
    else if(tn2.isitplaced(n,c))
    tn2.print();
    else if(cn1.isitplaced(n,c))
    cn1.print();
    else if(cn2.isitplaced(n,c))
    cn2.print();
    else if(an1.isitplaced(n,c))
    an1.print();
    else if(an2.isitplaced(n,c))
    an2.print();
    else if(rn.isitplaced(n,c))
    rn.print();
    else if(dn.isitplaced(n,c))
    dn.print();
    else
    cout << "   ";
}

int dimepieza(int n, char c){
    if (pb1.isitplaced(n,c))
    return 1;
    else if (pb2.isitplaced(n,c))
    return 2;
    else if (pb3.isitplaced(n,c))
    return 3;
    else if (pb4.isitplaced(n,c))
    return 4;
    else if (pb5.isitplaced(n,c))
    return 5;
    else if (pb6.isitplaced(n,c))
    return 6;
    else if (pb7.isitplaced(n,c))
    return 7;
    else if (pb8.isitplaced(n,c))
    return 8;
    else if (tb1.isitplaced(n,c))
    return 9;
    else if(tb2.isitplaced(n,c))
    return 10;
    else if(cb1.isitplaced(n,c))
    return 11;
    else if(cb2.isitplaced(n,c))
    return 12;
    else if(ab1.isitplaced(n,c))
    return 13;
    else if(ab2.isitplaced(n,c))
    return 14;
    else if(rb.isitplaced(n,c))
    return 15;
    else if(db.isitplaced(n,c))
    return 16;
    else if (pn1.isitplaced(n,c))
    return 17;
    else if (pn2.isitplaced(n,c))
    return 18;
    else if (pn3.isitplaced(n,c))
    return 19;
    else if (pn4.isitplaced(n,c))
    return 20;
    else if (pn5.isitplaced(n,c))
    return 21;
    else if (pn6.isitplaced(n,c))
    return 22;
    else if (pn7.isitplaced(n,c))
    return 23;
    else if (pn8.isitplaced(n,c))
    return 24;
    else if (tn1.isitplaced(n,c))
    return 25;
    else if(tn2.isitplaced(n,c))
    return 26;
    else if(cn1.isitplaced(n,c))
    return 27;
    else if(cn2.isitplaced(n,c))
    return 28;
    else if(an1.isitplaced(n,c))
    return 29;
    else if(an2.isitplaced(n,c))
    return 30;
    else if(rn.isitplaced(n,c))
    return 31;
    else if(dn.isitplaced(n,c))
    return 32;
    else
    
    return 0;
}

void kill(int id){
    switch(id){
        case 1:
            pb1.kill();
        break;
        case 2:
            pb2.kill();
        break;
        case 3:
            pb3.kill();
        break;
        case 4:
            pb4.kill();
        break;
        case 5:
            pb5.kill();
        break;
        case 6:
            pb6.kill();
        break;
        case 7:
            pb7.kill();
        break;
        case 8:
            pb8.kill();
        break;
        case 9:
            tb1.kill();
        break;
        case 10:
            tb2.kill();
        break;
        case 11:
            cb1.kill();
        break;
        case 12:
            cb2.kill();
        break;
        case 13: 
            ab1.kill();
        break;
        case 14:
            ab2.kill();
        break;
        case 15:
            rb.kill();
        break;
        case 16:
            db.kill();
        break;
        case 17:
            pn1.kill();
        break;
        case 18:
            pn2.kill();
        break;
        case 19:
            pn3.kill();
        break;
        case 20:
            pn4.kill();
        break;
        case 21:
            pn5.kill();
        break;
        case 22:
            pn6.kill();
        break;
        case 23:
            pn7.kill();
        break;
        case 24:
            pn8.kill();
        break;
        case 25:
            tn1.kill();
        break;
        case 26:
            tn2.kill();
        break;
        case 27:
            cn1.kill();
        break;
        case 28:
            cn2.kill();
        break;
        case 29: 
            an1.kill();
        break;
        case 30:
            an2.kill();
        break;
        case 31:
            rn.kill();
        break;
        case 32:
            dn.kill();
        break;
        default:
            cout << "Error" << endl;
    }
}

void damificar_white(int n){
    char c;
    switch(n){
        case 1:
            cout << ">>Pieza >> ";
            cin >> c;
            pb1.damifb(c);
        break;
        case 2:
            cout << ">>Pieza >> ";
            cin >> c;
            pb2.damifb(c);
        break;
        case 3:
            cout << ">>Pieza >> ";
            cin >> c;
            pb3.damifb(c);
        break;
        case 4:
            cout << ">>Pieza >> ";
            cin >> c;
            pb4.damifb(c);
        break;
        case 5:
            cout << ">>Pieza >> ";
            cin >> c;
            pb5.damifb(c);
        break;
        case 6:
            cout << ">>Pieza >> ";
            cin >> c;
            pb6.damifb(c);
        break;
        case 7:
            cout << ">>Pieza >> ";
            cin >> c;
            pb7.damifb(c);
        break;
        case 8:
            cout << ">>Pieza >> ";
            cin >> c;
            pb8.damifb(c);
        break;
    }
}

void damificar_black(int n){
    char c;
    switch(n){
        case 17:
            cout << ">>Pieza >> ";
            cin >> c;
            pn1.damifb(c);
        break;
        case 18:
            cout << ">>Pieza >> ";
            cin >> c;
            pn2.damifb(c);
        break;
        case 19:
            cout << ">>Pieza >> ";
            cin >> c;
            pn3.damifb(c);
        break;
        case 20:
            cout << ">>Pieza >> ";
            cin >> c;
            pn4.damifb(c);
        break;
        case 21:
            cout << ">>Pieza >> ";
            cin >> c;
            pn5.damifb(c);
        break;
        case 22:
            cout << ">>Pieza >> ";
            cin >> c;
            pn6.damifb(c);
        break;
        case 23:
            cout << ">>Pieza >> ";
            cin >> c;
            pn7.damifb(c);
        break;
        case 24:
            cout << ">>Pieza >> ";
            cin >> c;
            pn8.damifb(c);
        break;
    }
}

//Vendria bien que devolviera un entero para detectar errores
void mover(int n, char c, int i){
    switch(i){
        case 1:
            pb1.move(n, c);
        break;
        case 2:
            pb2.move(n, c);
        break;
        case 3:
            pb3.move(n, c);
        break;
        case 4:
            pb4.move(n, c);
        break;
        case 5:
            pb5.move(n, c);
        break;
        case 6:
            pb6.move(n, c);
        break;
        case 7:
            pb7.move(n, c);
        break;
        case 8:
            pb8.move(n, c);
        break;
        case 9:
            tb1.move(n, c);
        break;
        case 10:
            tb2.move(n, c);
        break;
        case 11:
            cb1.move(n, c);
        break;
        case 12:
            cb2.move(n, c);
        break;
        case 13: 
            ab1.move(n, c);
        break;
        case 14:
            ab2.move(n, c);
        break;
        case 15:
            rb.move(n, c);
        break;
        case 16:
            db.move(n, c);
        break;
        case 17:
            pn1.move(n, c);
        break;
        case 18:
            pn2.move(n, c);
        break;
        case 19:
            pn3.move(n, c);
        break;
        case 20:
            pn4.move(n, c);
        break;
        case 21:
            pn5.move(n, c);
        break;
        case 22:
            pn6.move(n, c);
        break;
        case 23:
            pn7.move(n, c);
        break;
        case 24:
            pn8.move(n, c);
        break;
        case 25:
            tn1.move(n, c);
        break;
        case 26:
            tn2.move(n, c);
        break;
        case 27:
            cn1.move(n, c);
        break;
        case 28:
            cn2.move(n, c);
        break;
        case 29: 
            an1.move(n, c);
        break;
        case 30:
            an2.move(n, c);
        break;
        case 31:
            rn.move(n, c);
        break;
        case 32:
            dn.move(n, c);
        break;
        default:
            cout << "Error" << endl;
    }
}

void show_tab(){
    cout << "\x1B[2J\x1B[1;1H";
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    cout << "\033[1;35m  h  \033[0m"; pb(); pp(1,'h'); pb(); pn(); pp(2,'h'); pn(); pb(); pp(3,'h'); pb(); pn(); pp(4,'h'); pn(); pb(); pp(5,'h'); pb(); pn(); pp(6,'h'); pn(); pb(); pp(7,'h'); pb(); pn();  pp(8,'h'); pn(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;;
    
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    cout << "\033[1;35m  g  \033[0m";pn();pp(1,'g'); pn(); pb();pp(2,'g'); pb(); pn(); pp(3,'g'); pn(); pb(); pp(4,'g'); pb(); pn(); pp(5,'g'); pn(); pb(); pp(6,'g'); pb(); pn(); pp(7,'g'); pn(); pb();  pp(8,'g'); pb(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    cout << "\033[1;35m  f  \033[0m";pb(); pp(1,'f'); pb(); pn(); pp(2,'f'); pn(); pb(); pp(3,'f'); pb(); pn(); pp(4,'f'); pn(); pb(); pp(5,'f'); pb(); pn(); pp(6,'f'); pn(); pb(); pp(7,'f'); pb(); pn();  pp(8,'f'); pn(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    cout << "\033[1;35m  e  \033[0m";pn();pp(1,'e'); pn(); pb();pp(2,'e'); pb(); pn(); pp(3,'e'); pn(); pb(); pp(4,'e'); pb(); pn(); pp(5,'e'); pn(); pb(); pp(6,'e'); pb(); pn(); pp(7,'e'); pn(); pb();  pp(8,'e'); pb(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    cout << "\033[1;35m  d  \033[0m";pb(); pp(1,'d'); pb(); pn(); pp(2,'d'); pn(); pb(); pp(3,'d'); pb(); pn(); pp(4,'d'); pn(); pb(); pp(5,'d'); pb(); pn(); pp(6,'d'); pn(); pb(); pp(7,'d'); pb(); pn();  pp(8,'d'); pn(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    
    
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    cout << "\033[1;35m  c  \033[0m";pn();pp(1,'c'); pn(); pb();pp(2,'c'); pb(); pn(); pp(3,'c'); pn(); pb(); pp(4,'c'); pb(); pn(); pp(5,'c'); pn(); pb(); pp(6,'c'); pb(); pn(); pp(7,'c'); pn(); pb();  pp(8,'c'); pb(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    cout << "\033[1;35m  b  \033[0m";pb(); pp(1,'b'); pb(); pn(); pp(2,'b'); pn(); pb(); pp(3,'b'); pb(); pn(); pp(4,'b'); pn(); pb(); pp(5,'b'); pb(); pn(); pp(6,'b'); pn(); pb(); pp(7,'b'); pb(); pn();  pp(8,'b'); pn(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bb();bn();bb();bn(); bb();bn();bb();bn();cout << endl;
    
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    cout << "\033[1;35m  a  \033[0m";pn();pp(1,'a'); pn(); pb();pp(2,'a'); pb(); pn(); pp(3,'a'); pn(); pb(); pp(4,'a'); pb(); pn(); pp(5,'a'); pn(); pb(); pp(6,'a'); pb(); pn(); pp(7,'a'); pn(); pb();  pp(8,'a'); pb(); cout << endl;
    cout << "\033[1;35m-----\033[0m";bn();bb();bn(); bb();bn();bb();bn();bb();cout << endl;
    cout << "\033[1;35m     | 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 |\033[0m"<< endl;
}

int main(){
    char camover;
    int iamover;
    char cmoved;
    int imoved;
    while(true){
        show_tab();
        cout << ">> ";
        cin >> camover >> iamover;
        cout << ">> ";
        cin >> cmoved >> imoved;
        cout << camover << " " << iamover << " " << cmoved << " " << imoved << endl;
        int pieza = dimepieza(iamover, camover);
        if(cmoved == 'h' and (pieza > 0 and pieza < 9))
        damificar_white(pieza);
        if(cmoved == 'a' and (pieza > 17 and pieza < 24))
        damificar_black(pieza);
        if(dimepieza(imoved, cmoved) != 0)
        kill(dimepieza(imoved, cmoved));
        mover(imoved, cmoved, dimepieza(iamover, camover));
    }
}