#include <iostream>
using namespace std;

int main()
{
    int na[10] = {0, }, nb[10] = {0, };
    int i, Ascore = 0, Bscore = 0;
    char winner;
    bool tie = true;

    for (i = 0; i < 10; i++){
        scanf("%d", &na[i]);
    }    
    for (i = 0; i < 10; i++){
        scanf("%d", &nb[i]);
    }
    for (i = 0; i < 10; i++){
        if (na[i] > nb[i]){
            Ascore += 3;
            winner = 'A';
            tie = false;
        }
        else if (na[i] < nb[i]){
            Bscore += 3;
            winner = 'B';
            tie = false;
        }
        else{
            Ascore += 1; 
            Bscore += 1;
        }        
    }
    printf("%d %d\n", Ascore, Bscore);
    if (Ascore > Bscore) printf("A");
    else if (Bscore > Ascore) printf("B");
    else{
        if (tie == true) printf("D");
        else printf("%c", winner);
    }
}