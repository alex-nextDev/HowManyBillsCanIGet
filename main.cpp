//
//  main.cpp
//  Exercice_7
//
//  Created by Alexandre Leuthreau on 14/11/2021.
//

#include <iostream>

using namespace std;

int main() {
 
    // Somme
    
    int amount;
    
    // Billets
    
    int fiftyEur;
    int twentyEur;
    
    // Pièces
    
    int twoEur;
    int oneEur;
    
    
    cout<<"Entrez la valeur d'une somme :"<<endl;
    cin>>amount;
    
   
    // Calcul
    
    if (amount >= 50)
        {
            fiftyEur = (amount/50);
            amount = (amount-(50 * fiftyEur));
            if (fiftyEur > 0)
            {
                cout<<fiftyEur<<"  billets de 50€ \n";
            }
        }
    
    if (amount >= 20)
        {
            twentyEur = (amount/20);
            amount = (amount-(20 * twentyEur));
            if (twentyEur > 0)
            {
                cout<<twentyEur<<"  billets de 20€ \n";
            }
        }
    
    if (amount >= 2)
        {
            twoEur = (amount/2);
            amount = (amount-(2 * twoEur));
            if (twoEur > 0)
            {
                cout<<twoEur<<"  pièces de 2€ \n";
            }

        }
    
    if (amount >= 1)
        {
            oneEur = (amount/1);
            amount = (amount-(1 * oneEur));
            if (oneEur > 0)
            {
                cout<<oneEur<<"  pièces de 1€ \n";
            }
        }
    
    return 0;
}
