//
// Created by Eason Lee on 9/29/2015.
//
#include"Parser.h"
#include <iostream>

int main(){
    std::string line;
    getline(cin,line);
    Parser* p=new Parser(line);
    expr* e=p->gothrough();
    e->Sexpr();
}
