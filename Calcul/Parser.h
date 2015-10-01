//
// Created by Eason Lee on 9/29/2015.
//

#ifndef CALCULATOR_PARSER_H
#define CALCULATOR_PARSER_H

#include "AST.h"
#include <deque>
#include <string>

using namespace std;

class Parser {
public:
    Parser(string str);
    expr* gothrough();

private:
    char currentvalue;
    deque<char> token;
    string exprstr;
    expr * Expressions();
    expr * Factors ();
    expr * terms();
    bool JudgeDi();
    void next();
};

#endif //CALCULATOR_PARSER_H
