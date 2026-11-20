#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>



/*exo01:doing max with three values:
 int main(void){

    int a,b,c;
    int max;

    printf("a: \n");
    scanf("%d",&a);

     printf("b: \n");
     scanf("%d",&b);

     printf("c: \n");
     scanf("%d",&c);
    max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    printf("max: %d\n",max);
    if (max==a) printf("OK its a\n");
    if (max==b) printf("OK is b\n");
    if (max==c) printf("OK is c\n");

}*/
    //exo02:
/*
    int main(void){

        int x;
        printf("the value of x: \n");
        scanf("%d",&x);
        if (x%2==0) {
            printf("the numbr is pair");

        }
        else {
            printf("the numbr impair");
        }
}*/
//exo03:la valeur abs
/*
int main(void) {
    float A;
    float B ;
    printf("give me the value of A :\n");
    scanf("%f",&A);
    /*
    B=abs(A);
    printf("the value abs is : %0.2f",B);
    printf("the value is : %d",abs(A));
}*/

//exo04:delta calculation:
/*

int main(void){
    int a,b,c;
    float delta;
    float X,x2,x1;
    printf("A :\n");
    scanf("%d",&a);
    printf("B :\n");
    scanf("%d",&b);
    printf("C :\n");
    scanf("%d",&c);
    delta=b*b-(4*a*c);
    if (delta>0) {
        x1=(-b-sqrt(delta)/2);
        x2=(-b+sqrt(delta)/2);
        printf("the value of x1 : %0.2f \n the value of x2 : %0.2f \n",x1,x2);
    }
    else if (delta==0) {
        X=(-b/2*a);
        printf("the value of X : %0.2f",X);
    }
    else {
        printf("doesnt have a solutions");
    }

}*/
/*
int main(void){
    int n;


    printf("the value of n: \n");
    scanf("%d",&n);

    for (int i = 1; i <= n; ++i) {
        printf("the table : %d*%d=%d \n",n,i,n*i);

    }


}*/
//exo06;fibonocci:
/*

int main(void){
    int n,u0,u1;
    int u;
    int i;
    printf("the value n :\n");
    scanf("%d",&n);
    u0=0;
    u1=1;
    u=0;
    for (int i = 0; i < n; ++i) {
        u=u0+u1;
        printf("%d+%d=%d \n",u0,u1,u);
        u0=u1;
        u1=u;

    }


}*/






//exo06:somme de a to n ;
/*
int main(void){
    int n,i;

    int cmp=0;
    printf("the value n : \n");
    scanf("%d",&n);

    if (n ==0) {
        printf("we dont hae any number");
        cmp=1;

    }
    else{
        while (n!=0) {
        n=n /10;
        cmp++;



        }
    }
        printf("this how many numbers wr got : %d",cmp);

    }*/
/*
int main(void){
    int n,i,inverse;
    int chiffre;
    printf("enter the number : \n");
    scanf("%d",&n);
    inverse=0;
    while (n>0) {
        chiffre=n%10;
        inverse=inverse*10+chiffre;
        n=n/10;
        printf("%d ",inverse);

    }


        }*/
/*
//exo08:counting the voyals :
int main(void){
    char ch[100];
    int n;
    int cmp=0;
    printf("enter the line of the text :");
    fgets(ch,100,stdin);
for (int i = 0; ch[i]!='\0'; ++i) {
    if (ch[i]=='a'||ch[i]=='e'||
        ch[i]=='i'||ch[i]=='o'||
        ch[i]=='u'||ch[i]=='y') {
        cmp++;
        }
}
     printf("the number of voyals is : %d",cmp);
    }*/
//exo09:to do min and max and moyen in table
/*
int main(void){
    int n,i;
    int t[100];
    int min,max,sum;
    float moy;
    printf("the value of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("the t[%d] i s: \n",i);
        scanf("%d",&t[i]);

    }
     min=t[i];
    for (int i = 1; i < n; ++i) {
        if (t[i]<min) {
         min=t[i];
            printf("the value of the min is : t[%d]",t[i]);


        }
        else{
            min=t[0];
            printf("the finla value is still the t[0]=%d",t[i]);




    }
    }
        max=t[0];
        for (int i = 0; i < n; ++i) {
            if (t[i]>max) {
                max=t[i];
                printf("the max of the value is : %d \n",t[i]);

            }
            else
            {
                max=t[0];
                printf("the finL IS THE SAM EVALUE :  %d \n",t[i]);
            }

        }









    }*/
/*exo09: for the prime number
    int n;
    bool pr=true;
    printf("the value of n : \n");
    scanf("%d",&n);
    if (n<2) {
        pr=false;

    }
    else {
        for (int i = 2; i <= n-1; ++i) {
            if (n%i==0) {
                pr=false;
                break;

            }

        }
    }
    if (pr==false) {
        printf("the number is prime \n");


    }
    else {
        printf("the numbe isnt prime");
    }

/*exo10:the max using two numbers:
int main(void) {
    int a,b;
    printf("a: \n  b : \n"),
    scanf("%d%d",&a,&b);
    if ((a>b)) {
        printf("a is the max ");

    }
    else if ( b>a){
        printf("b is the max \n");
    }
    else {
        printf("they are equal ");



    }


}*/
/*ex10:
int main(void) {
    int x;
    int sqr;
    printf("the value for x is : \n");
    scanf("%d",&x);
    sqr=x*x;
    printf("the sqr is : %d",sqr);
}*/
/*ex11:slove the exo again ::
int main(void) {
    int n,i;
    int inverse=0;
    int rest;
    printf("n value is : \n");
    scanf("%d",&n);
    while (n>0) {
        rest=n%10;
        /*for example we do :
         -n=312,312%10=2,rest=2,inv=2
         -n=31,31%10=1,rest=1,inv=21
         -n=3,3%10=3,rest=3,inv=213;
         donc we got : inverse=213;

        inverse=inverse*10+rest;
        n=n/10;

    }
    printf("inverse number : %d \n",inverse);*/


/*exo12: PGCD
int main(void) {
    int a,b,r;
    printf("the value a : \n");
    scanf("%d",&a);
    printf("the val  e b : \n");
    scanf("%d",&b);
    while (b!=0) {
        r=a % b;
        a=b;
        b=r;

    }
    printf("the value PGCD: %d \n",a);

}*/
/*exo13:so the exo say until u ge the number -1 u do the average
int main(void) {
    int x;
    int n=0;
    int s=0;
    float moy;
    printf("the value  x : \n");
    scanf("%d",&x);

    while (x>=1 && x<=100) {
        s=s+x;
        n++;
        scanf("%d",&x);
    }
    if (n>0) {
        moy= (float)s/n;
        printf("the moy is : %0.2f \n",moy);

    }
    else {
        printf("we dont have ");
    }:*/
/*for the first etoile doing the three steps :
int main(void) {

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <5-i; ++j) {
            printf(" ");
        }
        for (int j = 0; j <2*i-1 ; ++j) {
            printf("*");

        }
        printf("\n");

    }


} */
/*fo the random number is :

int main(void) {
    int scr, guess;

    srand(time(NULL));
    scr = rand() % 10 + 1;
    printf("the value is : %d",scr);

    for (int i = 1; i <= 3; i++) {
        printf("Guess the number (1-10): \n ");
        scanf("%d", &guess);

        if (guess == scr) {
            printf("You got it!\n");

        }
         else if (guess >scr ){
            printf("Too high!\n");
        }
        else{
            printf("Too low!\n");


        }
    }
    printf("u didnt got the number is : %d\n",scr);

    return 0;
}
*/
/*exo for arrays :*

int main() {
        int d1, d2;
        int essai = 0;

        srand(time(NULL));

        do {
            d1 = rand() % 6 + 1;
            d2 = rand() % 6 + 1;

            essai++;

            printf("essai %d : d1 = %d, d2 = %d\n",
                   essai, d1, d2);

        } while (d1 != 6 || d2 != 6);

        printf("Double 6 we got is  !\n");
        printf("Nombre total d'essais : %d\n", essai);
    printf("the value u guessed is d1 %d= d2 %d \n",d1,d2);
        return 0;
    }*/
/*suing the arrays : 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int d[2];
    int essai = 0;

    srand(time(NULL));

    do {
        for (int i = 0; i < 2; i++) {
            d[i] = rand() % 6 + 1;
        }

        essai++;

        printf("Essai %d : d1 = %d, d2 = %d\n",
               essai, d[0], d[1]);

    } while (d[0] != 6 || d[1] != 6);

    printf("Double 6! We got it!\n");
    printf("Nombre total d'essais : %d\n", essai);

    return 0;
}
*/
/*exo*/
int main(void){
 int a,b,c;
int somme;
printf("the value is  : \n")
 scanf("%d",%a);
 printf("the value is  : \n");
 scanf("%d",%b);
printf("the value is  : \n");
 scanf("%d",%c);
somme=a+b+c;
printf("the value is %d : \n",somme);



















































































