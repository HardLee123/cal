//
// Created by Eason Lee on 9/29/2015.
//

#include <string.h>
#include "Parser.h"
#include <iostream>

using namespace std;

Parser::Parser(string str) {
    exprstr=str;
    int length=strlen(exprstr.c_str());
    for(int i=0; i<length; i++){
        token.push_back(exprstr.c_str()[i]);
    }
}

expr * Parser::gothrough() {
    next();
    return Expressions();
}

expr * Parser::Expressions() {
    expr * e=Factors();
    while (currentvalue=='+'){
        next();
        expr* e2=Factors();
        e=new Plus(e,e2);
    }
    while (currentvalue=='-'){
        next();
        expr* e2=Factors();
        e=new Su(e,e2);
    }
    return e;

}

expr * Parser::Factors() {
    expr * e=terms();
    while (currentvalue==' '){
        next();
    }
    while (currentvalue=='*'){
        next();
        expr* e2=terms();
        e=new Mu(e,e2);
    }
    while (currentvalue=='/'){
        next();
        expr* e2=terms();
        e=new Division(e,e2);
    }
    while (currentvalue=='%'){
        next();
        expr* e2=terms();
        e=new Mo(e,e2);
    }
    return e;

}

expr * Parser::terms() {
    if (JudgeDi()){
        int value =currentvalue-'0';
        next();
        return new Di(value);
    }
    else if (currentvalue=='('){
        next();
        expr* e=Expressions();
        next();
        return e;
    }
}
bool Parser::JudgeDi() {
    if (currentvalue>='0'&&currentvalue<='9')
        return true;
    else
        return false;
}
void Parser::next() {
    currentvalue=token.front();
    token.pop_front();

}