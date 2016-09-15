//
//  main.c
//  change_cs50
//
//  Created by Sahil Malhotra on 09/01/16.
//  Copyright © 2016 Sahil Malhotra. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    float chg;
    int counter=0;
    do
    {
        printf("Change: ");
        scanf(" %f", &chg);
    }while(chg<0.00);
    
    chg=round(chg*100.00);
    
    while(chg!=0)
    {
        if(chg>=25.00)
        {
            counter=counter + (int)chg/25;
            printf("%d 25Cent bite(s)\n", (int)chg/25);
            chg= (int)chg % 25;
        }
        else if(chg>=10.00)
        {
            counter=counter + (int)chg/10;
            printf("%d 10Cent bite(s)\n", (int)chg/10);
            chg= (int)chg % 10;
        }
        else if(chg>=5.00)
        {
            counter=counter + (int)chg/5;
            printf("%d 5Cent bite(s)\n", (int)chg/5);
            chg= (int)chg % 5;
        }
        else if(chg>=1.00)
        {
            counter=counter + (int)chg/1;
            printf("%d 1Cent bite(s)\n", (int)chg/1);
            chg= (int)chg % 1;
        }
    }
    printf("\nTotal Bites: %d\n\n", counter);
    return 0;
}

