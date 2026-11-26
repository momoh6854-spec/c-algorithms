#include <math.h>
#include <stdio.h>
/*
int main(void) {

    int n,x;
    int t[100];
    int cmp;

    printf("the value of n is :  \n");
    scanf("%d",&n);
    for (int i = 0; i < n-1; ++i) {
        printf("th tabe value is : t[%d]",i);
        scanf("%d",&t[i]);

    }
    cmp=0;
    x=4;
    for (int i = 0; i < n-1; ++i) {
        if (t[i]==x) {
            ++cmp;
        }

    }
    printf("the finalle value of x we found is cmp=%d",cmp);
    */
    /*
    int n;
    int t[100];
    int cmp,cmpu;
    printf("the value of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n-1; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    cmp=0;
    cmpu=0;
    for (int i = 0; i < n-1; ++i) {
        if (t[i]%2==0) {
            cmp++;
        }
        else {
            cmpu++;
        }

    }
    printf("the number with pair is: %d \n the numbers with the umpair is : %d",cmp,cmpu);
    */
    /*inverse the table
    int n;
    int t[100];
    int temp;

    printf("the value of n is :  \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("th tabe value is : t[%d]",i);
        scanf("%d",&t[i]);
      }
    for (int i = 0; i < n/2; ++i) {
       int j=(n-1-i);
        temp=t[i];
        t[i]=t[j];
        t[j]=temp;

    }
    for (int i = 0; i < n; ++i) {

        printf("%d",t[i]);

    }
    printf("\n");
    */
    /*exo for finding the x if is it in the table
    int x,i;
    int t[100];
    int n,cmp;
    printf("the value of n is :  \n");
    scanf("%d",&n);
    for (int i = 0; i < n-1; ++i) {
        printf("th tabe value is : t[%d]=",i);
        scanf("%d",&t[i]);
    }
    printf("the value of x : \n");
    scanf("%d",&x);
    cmp=0;
    for (int i = 0; i < n-1; ++i) {
        if (t[i]==x) {
            ++cmp;

        }
    }
    if (cmp>0) {
        printf("the element x exist \n ");


    }
    else {
        printf("her eis not any value of ");
    }







    */
    /*the list for 100 exo for  :
     *1-remplir un tableau
    int main(void) {
        int i,n;
        int t[100];
         printf("n : \n");
        scanf("%d",&n);
        for (int i = 0; i < n; ++i) {
            printf("t[%d]=",i);
            scanf("%d",&t[i]);


        }
        for (int i = 0; i < n; ++i) {
            printf("t[%d]=%d \n",i,t[i]);

        }
}*/
/*exo 02 : Calculer la somme des éléments
int main(void) {
    int i,n;
    int s=0;
    int t[100];

    printf("the vlue of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n; ++i) {
        s=s+t[i];

    }
    printf("the final value of s is : %d \n",s);
}*/
/*exo03:Calculer la moyenne
int main(void) {
    int i,n;
    int s=0;
    int t[100];
    float moy;

    printf("the vlue of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n; ++i) {
        s=s+t[i];
    }
    moy= (float)s/n;
    printf("the finale value of moy : %0.2f \n",moy);

}*/
/* ex04:Afficher les éléments à l'envers (Reverse Array)
 int main(void) {
    int i,n;
     int t[100];

     printf("n: \n");
     scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf(" t[%d]=",i);
        scanf("%d",&t[i]);

    }
     for (int i = n-1; i >=0; --i) {
         printf("t[%d] %d \n",i,t[i]);
     }



}*/
/*exo05 : Somme des positifs, négatifs et zéros
int main(void) {
    int n,i;
    int t[100];
    int sn=0;
    int sp=0;
    int se=0;
    printf("n:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (t[i]>0) {
            sp=sp+t[i];

        }
        else if (t[i]==0) {
            se=se+t[i];
        }
        else {
            sn=sn+t[i];
        }


    }
    printf("somme positive  : %d \n",sp);
    printf("somme negative : %d \n",se);
    printf("somme NULL: %d \n",sn);
}*/
/*exo06: 	Rechercher un élément dans un tableau
int main(void) {
    int t[100];
    int x,n;
    int cmp=0;
    printf("the value n: \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    printf("the value x: \n");
    scanf("%d",&x);
    for (int i = 0; i < n; ++i) {
        if (t[i]==x) {
            printf("x exist : %d",x);
        }


    }

}*/
/*exo07:find the position of the numbe we found
int main(void) {
    int t[100];
    int x,n;
    int place;
    printf("the value n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    printf("the value x is : \n");
    scanf("%d",&x);

    for (int i = 0; i < n; ++i) {
        if (t[i]==x) {
            place=i;
            printf("the place is : %d \n",place);
        }

    }
    printf("the x is : %d \n",x);

}*/
/*exo08:Trouver le deuxième minimum
int main (void) {
    int n,x;
    int t[100];
    int max1,max2;
    printf("n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    max1=t[0];
    for (int i = 1; i < n; ++i) {
        if (t[i]>max1) {
            max1=t[i];

        }
    }
    max2=t[0];
    printf("the max1 is : %d \n",max1);
    for (int i = 1; i < n; ++i) {
        if (t[i]>max2 && t[i]<max1) {
            max2=t[i];
        }

    }
    printf("the second max is : %d \n",max2);
}*/
/*exo09: Remplacer les nombres négatifs par 0
int main (void) {
    int n,x;
    int t[100];
    printf("n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    for (int i = 0; i < n; ++i) {
        if (t[i]<0) {
            t[i]=0;
        }
        printf("t[%d]=%d \n",i,t[i]);
    }

}*/
/*exo10: Trouver les éléments supérieurs à la moyenne
int main (void) {
    int n,x;
    int t[100];
    float moy;
    int somme=0;
    int elm;
    int cmp=0;
    printf("n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    for (int i = 0; i < n; ++i) {
        somme+=t[i];
    }
    moy=(float)somme/n;
    printf("the moy : %0.2f \n",moy);
    for (int i = 0; i < n; ++i) {
        if (t[i]>moy) {
            elm=t[i];
            printf("this elemtn is sup  : %d \n",elm);
             cmp++;

        }

    }

}*/
/*exo11:Vérifier si un nombre existe plusieurs fois
int main(void) {
    int x,n;
    int t[100];
    int cmp=0;
    printf("the value n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    printf("the value of x is : \n");
    scanf("%d",&x);

    for (int i = 0; i < n; ++i) {
        if (t[i]==x) {
            cmp++;

        }

    }
    if (cmp==0) {
        printf("this number doesnt exist : \n");

    }
    if (cmp>=1) {
        printf("this number exist and cmp = %d \n",cmp);

    }
}*/
/*exo12:
int main(void) {
    int n;
    int t[100];
    printf("the value n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);

    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (t[i]==t[j]) {
                printf("Doublon : %d\n", t[i]);
            }

        }
    }
    return 0;
}*/
/*	Afficher les éléments uniques
int main(void) {
    int t[100];
    int n = 7;
    int unique;
    printf("the value of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[i]=",i);
        scanf("%d",&t[i]);

    }
    for (int i = 0; i < n; i++) {
        unique = 1;

        for (int j = 0; j < n; j++) {
            if (i != j && t[i] == t[j]) {
                unique = 0;
                break;
            }
        }

        if (unique == 1) {
            printf("%d ", t[i]);
        }
    }

    return 0;
}*/
/*ex14: Supprimer les doublons
int main(void) {
    int t[100];
    int n;
    printf("the value of n is : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[i]=",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (t[i]==t[j]) {
                for (int k = j; k < n - 1; k++) {
                    t[k] = t[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array without duplicates: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
}*/
/*exo13:Fusionner deux tableaux
int main (void) {
    int n=3;
    int m=3;
    int t[100];
    int g[100];
    int s[100];
    int v=0;
    for (int i = 0; i < n; ++i) {
        printf("t[%d]= \n",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < m; ++i) {
        printf("g[%d]= \n",i);
        scanf("%d",&g[i]);
    }
    for (int i = 0; i < n; ++i) {
        s[v]=t[i];
        v++;
    }
    for (int i = 0; i < m; ++i) {
        s[v]=g[i];
        v++;
    }
    for (int i = 0; i < v; ++i) {
        printf("s[%d]=%d \n",i,s[i]);


    }

}*/
/*exo 14 : Trouver les éléments communs
int main(void){
int n=3;
int m=3;
int t[100];
int g[100];

for (int i = 0; i < n; ++i) {
    printf("t[%d]= \n",i);
    scanf("%d",&t[i]);
}
for (int j = 0; j < m; ++j) {
    printf("g[%d]= \n",j);
    scanf("%d",&g[j]);
}
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
        if (t[i]==g[j]) {
            printf("g[%d]=%d \n",j,g[j]);
            break;

        }

    }

}
}

*/
/*exo 15 : Inverser un tableau sans tableau supplémentaire
int main(void) {
    int n=5;
    int t[100];
    int r;
    for (int i = 0; i < n; ++i) {
        printf("t[%d]= \n",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n/2; ++i) {
        r=t[i];
        t[i]=t[n-i-1];
        t[n-i-1]=r;
            }

    for (int i = 0; i < n; ++i) {

        printf("t[%d]=%d \n",i,t[i]);
    }



        }*/
/*exo 16 :Trier par ordre croissant (Ascending)
int main(void) {
    int n;
    int t[100];
    int temp;
    printf("n : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (t[i]>t[j]) {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;

            }

        }


        }
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=%d \n",i,t[i]);

    }*/
/*exo 17: trier par ordre deccroisaant
int main(void) {
    int n;
    int t[100];
    int temp;
    printf("n : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (t[i]<t[j]) {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;

            }

        }


    }
    for (int i = 0; i < n; ++i) {
        printf("t[%d]=%d \n",i,t[i]);

    }




} */


/*exp18: declaration d un tbl

int main(void) {
    float t[100];
    for (int i = 0; i < 4; ++i) {
        printf("t[%d]=",i);
        scanf("%f",&t[i]);

    }
    for (int i = 0; i < 4; ++i) {
        printf("t[%d]=%0.2f \n",i,t[i]);

    }
}*/
/*exo 18 : scanf for the array

int main(void) {
    int t[100];
    for (int i =0; i < 20; ++i) {
        printf("t[%d]=%d \n",i,i*8);


    }
}*/
    /*exo 19 : for scan
int main(void) {
    int t[100];
    for (int i =0; i < 5; ++i) {
        printf("t[%d]= \n",i);
        scanf("%d",&t[i]);


    }
    for (int i = 0; i < 5; ++i) {
        printf("t[%d]= %d \n ",i,t[i]);

    }
}*/
/*exo 19 :  create a list using matr*/
