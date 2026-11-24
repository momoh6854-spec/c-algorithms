#include <stdio.h>
#include <math.h>
#include<stdbool.h>



/*comment declare et afficher une procedure
void afficherResultat(int n) {
    printf("Le resultat est : %d\n", n);
}

int main(void) {
    int n;
    printf("the value of n is : \n");
    scanf("%d",&n);

    afficherResultat(n);
return 0;
}
*/
/*ex02:renvoi la somme d une fonction
int somme(int a,int b){
 int s;
s=a+b;
    return s;

}
int main(void) {
    int a,b;
    int sm;
    printf("the value of a: \n b: \n");
    scanf("%d%d",&a,&b);
    sm=somme(a,b);
    printf("the value of we got sm : %d",sm);
    return 0;


}
*/
/*exo to make the max with the function x
int max(int a,int b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}
int main(void) {
    int a,b;
    int maximum;
    printf("a: \n , b: \n ");
    scanf("%d%d",&a,&b);
    maximum=max(a,b);
    printf("the finale max:%d \n",maximum);

}
*/
/*exo04:the c progrm we got for calculation:
float prgrmc(int cel) {
    float f;
    f=(cel*9/5)+32/5;
    return f;
}
int main(void) {
    int c;
    float ff;
    printf("the valu of c : \n");
    scanf("%d",&c);
    ff=prgrmc(c);
    printf("the final value of ff is : %0.2f ",ff);


}*/
/*Écrire un programme qui lit n entiers dans un tableau et utilise des fonctions séparées pour calculer et afficher la somme et la moyenne de ses éléments.*/
/*sloving the serie : exo01 : fonction lineare
int function_ln(int x) {
    int f;
    f=(3*x)+2;
    return f;
}
int main(void) {
    int F,x;
    printf("the value of x i s: \n");
    scanf("%d",&x);
    F=function_ln(x);
    printf("the final value is : %d \n",F);
}
*/
/*ex02: procedure for exchange
void swap(int x, int y) {
    int z;
    z=x;
    x=y;
    y=z;
    printf("the value we got swap is : %d and %d \n",x,y);
}
int main(void) {
    int x,y;
    printf("the value of x is : \n");
    scanf("%d",&x);
    printf("the value of y is : \n");
    scanf("%d",&y);
    swap(x,y);
    printf("the finale value x: %d \n  y: %d ",x,y);

}*/
/*exo03 : Calculer le carré d'un entier avec une fonction.
int carre(int x) {
    int y;
    y=(int)pow(x,2);
    return y;
}
int main(void) {
    int x,y;
    printf("x value is : \n");
    scanf("%d",&x);
    y=carre(x);
    printf("the sqr is : %d\n",y);
}*/
/*exo 04 :the link git :
 int functionln(int x) {

     return 3*x+2;;
 }
int main(void) {
     int x,f;
     printf("x =  : \n");
     scanf("%d",&x);
     f=functionln(x);
     printf("f(x)= %d \n",f );
 }*/
/*exo 05: proecdure swap :
void swap(int x, int y) {
     int temp;
     temp=x;
     x=y;
     y=temp;
     printf("x: %d \n y: %d \n",x,y);
 }
int main(void) {
     int X,Y;
     printf("the value of x is : \n");
     scanf("%d",&X);
     printf("the value of y is : \n");
     scanf("%d",&Y);
     swap(X,Y);
    return 0;

 }*/
/*exo 06 : predicat pair
 bool fcpair(int n) {
    return n%2==0;
    }
int main(void) {
    int n;
    printf("the value n is : \n");
    scanf("%d",&n);
    if (fcpair(n)){
        printf("its pair \n");
    } else {
        printf("isnt pair");
    }
    return 0;
}*/
/*exo 07 : Max using 3 number*/
int Max1(int a, int b, int c) {
    int max;
    max=a;
    if (max<b){
        max=b;
        return max;
    }
    if ( max<c){
        max=c;
        return max;
    }
    return max;
}
int main(void) {
    int A,B,C;
    int Max;
    printf("A: \n");
    scanf("%d",&A);
    printf("B: \n");
    scanf("%d",&B);
    printf("C: \n");
    scanf("%d",&C);
    Max=Max1(A,B,C);
    printf("the max value is : %d \n",Max);

}



