#include"Parser.h"
#include <iostream>

int main(){
    std::string line;
    getline(cin,line);
    Parser* p=new Parser(line);
    expr* e=p->gothrough();
    std::cout<<e->calcul()<<endl;
    e->Pf();
    std::cout<<endl;
    e->Sexpr();
}

