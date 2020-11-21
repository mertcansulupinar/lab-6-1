#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //first question

    int i, num, divisors;

    divisors=0;

    printf("******First question******\n");
    printf("Please, enter an integer between 1 to 1000 = ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){

        if(num%i==0){

            divisors++;
        }
    }

    if(divisors==2){

        printf("%d is a prime number", num);
    }

    else{

        printf("%d is not a prime number", num);
    }

    printf("\n******************\n");

    getch();


    //second question

    int j, numPow;

    printf("******Second question******\n");

    for(j=0; j<=5; j++){

        numPow = pow(3,j);
        printf("%d	%d\n", j, numPow);
    }

    printf("\n******************\n");

    getch();

    //third question

    int m, k;

    printf("******Third question******\n");

    for(m=1; m<=3; m++){

        for(k=1; k<=4; k++){

            printf("X");
        }

        printf("\n");
    }

    printf("\n******************\n");

    getch();

    //Fourth question

    int g, f;

    printf("******Fourth question******\n");

    for(g=1; g<=4; g++){

        for(f=1; f<=g; f++){

            printf("X");
        }

        printf("\n");
    }

    printf("\n******************\n");

    getch();


    //Fifth question

    int t, y;

    printf("\n******Fifth question******\n");

    for (t=1; t<=5; t++){

        for(y=1; y<=4; y++){

            if(t%2==1){

                printf("X");
            }

            else{

                printf("O");
            }
        }

        printf("\n");
    }

    printf("\n******************\n");

    getch();


    //Try at home first question

    int o=5;
    int p, u;

    printf("******Try at home first question******\n");

    for(u=1; u<=o; u++)
    {

        for(p=1; p<=5; p++)
        {

            if((o-u)>=p)
            {
                printf("-");
            }

            else
            {
                printf("X");
            }
        }

        printf("\n");

    }

    printf("\n******************\n");

    getch();


    //Try at home second question

    int w, e;

    printf("******Try at home second question******\n");

    for(w=1; w<=4; w++){

        for(e=1; e<=4; e++){

            if(w==e){

                printf("O");
            }

            else{

                printf("X");
            }
        }

        printf("\n");
    }

    printf("\n******************\n");

    getch();

    //Try at home third question

    int h, v, l, r;

    l=1;
    r=4;

    printf("******Try at home Third question******\n");

    for(h=1; h<5; h++){

        for(v=1; v<r; v++){

            printf(" ");
        }

        for(v=1; v<=l; v++){

            printf("X");
        }

        printf("\n");

        l+=2;
        r--;
    }

    printf("\n******************\n");

    getch();






    return 0;
}
