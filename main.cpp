#include <iostream>
#include "document.h"
#include "livre.h"
#include "manuel.h"
#include "roman.h"
#include "dictionnaire.h"
#include "StockDocuments.h"
using namespace std;



int main()
{
    StockDocuments l;
    Manuel *m1(0);
    Dictionnaire *d2(0);
    Roman *r3(0);
    Manuel a1("Dissertion et methode","Rochefort et Dalie",2);
    Dictionnaire a2("Larousse anglais","anglais");
    Roman a3("Les contemplations","Victor Hugo",8);
    m1 = &a1;
    d2=&a2;
    r3=&a3;

    l.ajouterDocument(m1);
    l.ajouterDocument(d2);
    l.ajouterDocument(r3);
    
    bonDeCommande(l, 20);
    
    return 0;
}
