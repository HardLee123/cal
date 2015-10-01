//
// Created by Eason Lee on 9/28/2015.
//
#include "AST.h"
#include <iostream>

int Di::calcul() {
    return number;
}
void Di::Pf() {
    std::cout<<number<<" ";
}
void Di::Sexpr() {
    std::cout<<number<<" ";
}

int Plus::calcul() {
    return l->calcul()+r->calcul();
}
void Plus::Pf() {
    l->Pf();
    r->Pf();
    std::cout<<"+"<<" ";
}
void Plus::Sexpr() {
    std::cout<<"("<<" ";
    std::cout<<"+"<<" ";
    l->Sexpr();
    r->Sexpr();
    std::cout<<")"<<" ";
}

int Su::calcul() {
    return l->calcul()-r->calcul();
}
void Su::Pf() {
    l->Pf();
    r->Pf();
    std::cout<<"-"<<" ";
}
void Su::Sexpr() {
    std::cout<<"("<<" ";
    std::cout<<"-"<<" ";
    l->Sexpr();
    r->Sexpr();
    std::cout<<")"<<" ";
}

int Mu::calcul() {
    return l->calcul()* r->calcul();
}
void Mu::Pf() {
    l->Pf();
    r->Pf();
    std::cout<<"*"<<" ";
}
void Mu::Sexpr() {
    std::cout<<"("<<" ";
    std::cout<<"*"<<" ";
    l->Sexpr();
    r->Sexpr();
    std::cout<<")"<<" ";
}

int Division::calcul() {
    return l->calcul()/ r->calcul();
}
void Division::Pf() {
    l->Pf();
    r->Pf();
    std::cout<<"/"<<" ";
}
void Division::Sexpr() {
    std::cout<<"("<<" ";
    std::cout<<"/"<<" ";
    l->Sexpr();
    r->Sexpr();
    std::cout<<")"<<" ";
}

int Mo::calcul() {
    return l->calcul()+r->calcul();
}
void Mo::Pf() {
    l->Pf();
    r->Pf();
    std::cout<<"%"<<" ";
}
void Mo::Sexpr() {
    std::cout<<"("<<" ";
    std::cout<<"%"<<" ";
    l->Sexpr();
    r->Sexpr();
    std::cout<<")"<<" ";
}