//
// Created by Eason Lee on 9/28/2015.
//

#ifndef CALCULATOR_AST_H
#define CALCULATOR_AST_H

class expr{
public:
    virtual ~expr(){};
    virtual int calcul()=0;
    virtual void Sexpr()=0;
    virtual void Pf()=0;
};

class Di:public expr{
public:
    Di(int num ):number(num){}
    int calcul();
    void Sexpr();
    void Pf();
private:
    int number;
};

class Binary:public expr{
public:
    Binary(expr* left,expr* right):l(left),r(right){}

protected:
    expr* l;
    expr* r;
};

class Plus:public Binary{
public:
    Plus(expr*left,expr*right ):Binary(left, right){}
    int calcul();
    void Sexpr();
    void Pf();
};

class Su:public Binary{
public:
    Su(expr*left,expr*right ):Binary(left, right){}
    int calcul();
    void Sexpr();
    void Pf();
};

class Mu:public Binary{
public:
    Mu(expr*left,expr*right ):Binary(left, right){}
    int calcul();
    void Sexpr();
    void Pf();
};

class Division:public Binary{
public:
    Division(expr*left,expr*right ):Binary(left, right){}
    int calcul();
    void Sexpr();
    void Pf();
};

class Mo:public Binary{
public:
    Mo(expr*left,expr*right ):Binary(left, right){}
    int calcul();
    void Sexpr();
    void Pf();
};
#endif //CALCULATOR_AST_H
