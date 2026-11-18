#include <stdio.h>
    /*the somme doing for the matrix:
    int n,s,m;
    int t[100][100];
    printf("the value of the both n: \n m: \n");
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < m-1; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
        s=0;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 0; j < m-1; ++j) {
                s=s+t[i][j];
            }
        }
        printf("the somme is : %d \n",s);



    }*/
    /*exo02: la somme de chaque ligne et chaque colonne :
    int n,m,s;
    int t[100][100];

    printf("the value n : \n m: \n");
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }

    for (int j = 0; j < m; ++j) {
        s=0;
        for (int i = 0; i < n; ++i) {
            s=s+t[i][j];


        }
        printf("%d : %d \n",j,s);
    }

    for (int i = 0; i < n; ++i) {
        s=0;
        for (int j = 0; j < m; ++j) {
            s=s+t[i][j];



        }
        printf(" %d: %d \n",i,s);
    }*/
/*for th max and the min
    int n,m;
    int t[100][100];
    int min,max;

    printf("the value n : \n m: \n");
    scanf("%d%d",&n,&m);
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    min=t[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (t[i][j]<min) {
                min=t[i][j];

            }
        }
    }
    printf("we got the min is : %d \n ",min);
    max=t[0][0];
    for (int i = 0; i < n ; ++i) {

        for (int j = 0; j < m ; ++j) {
            if (t[i][j]>=max) {
                max=t[i][j];

            }

        }


    }
    printf("the max is : %d \n",max);
    */
/*exo 01:Calculer la somme de chaque ligne
int main(void) {
    int n,m;
    int t[100][100];
    int somme ;
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);

        }
    }


    for (int i = 0; i < n; ++i) {
        somme=0;
        for (int j = 0; j < m; ++j) {
            somme+=t[i][j];

        }
        printf("the somme is : %d \n",somme);
    }
}*/
/*exo 2: Calculer la somme de chaque colonne
int main(void) {
    int n,m;
    int t[100][100];
    int somme;
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);

        }
    }
    for (int j = 0; j< m; ++j) {
        somme=0;
        for (int i = 0; i < n; ++i) {
            somme+=t[i][j];


        }
        printf("la somme is : %d \n",somme);

    }

}*/
/*exo3 :Calculer la diagonale principale
int main(void){
int n,m;
int t[100][100];
int somme;
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
for (int i = 0; i < n; ++i) {

    for (int j = 0; j < m; ++j) {
        printf("t[%d][%d]=",i,j);
        scanf("%d",&t[i][j]);

    }
}
    somme=0;
for (int i = 0; i < n; ++i) {

    for (int j = 0; j < m; ++j) {
        if (t[i][j]==t[i][i]) {
            somme+=t[i][i];

        }



    }
    printf("the somme is: %d \n",somme);


    }

}*/
/*exo 4 : Calculer la diagonale secondaire
int main(void) {
    int n,m;
    int t[100][100];
    int somme;
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);

        }

    }
    somme=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (t[i][j]==t[i][m-i-1]){
            somme+=t[i][i];
            }

        }
        printf("the somme is : %d\n",somme);
    }
}*/
/* ex05 : Additionner deux matrices
int main(void) {
    int n,m;
    int t[100][100];
    int somme;
    int b[100][100];
    int a[100][100];
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);

        }

    }
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < m; ++j) {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);

        }

    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j]=b[i][j]+t[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=%d \n",i,j,a[i][j]);

        }

    }
}*/
/*exo6 : Transposer une matrice
int main(void) {
    int n,m;
    int t[100][100];
    int l[100][100];
    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            l[j][i]=t[i][j];


        }

    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("l[%d][%d]=%d \n",i,j,l[i][j]);


        }

    }
}*/
/*exo07:Vérifier si une matrice est symétrique
int main(void) {
    int n,m;
    int t[100][100];
    int l[100][100];
    int dff=0;

    printf("n: \n");
    scanf("%d",&n);
    printf("m : \n");
    scanf("%d",&m);
    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < m; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (t[i][j]!=t[j][i]) {
                dff++;

            }

            }

        }
    if (dff==0) {
        printf("the table is symentique");
    } else {
        printf("isnt symatique");
    }


    }*/

/*exo08: findinf the greater somme
int main(void) {
    int somme ;
    int max=0;
    int t[100][100];
    int maxroq=0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
        for (int i = 0; i < 3; ++i) {
            somme=0;
            for (int j = 0; j < 3; ++j) {
                somme+=t[i][j];


                }
            printf("the somme is : %d \n",somme);
            if (somme>max) {
                max=somme;
                maxrow=i
            }

        }
    printf("la grande somme : %d \n",somme);
    printf("the maxrow is : %d\n",maxrow);



}*/
/*exp09:Compter les nombres pairs dans une matrice


int main(void) {
    int somme ;
    int t[100][100];
    int cmp=0;


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (t[i][j]%2==0) {
                cmp++;

            }

        }


    }
    printf("the cmp is : %d \n",cmp);
}*/
/*exo10 :Vérifier si une matrice est diagonale
int main(void) {
    int somme ;
    int t[100][100];
    int digo=1 ;


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (t[i][j]!=t[i][i] && t[i][j]!=0) {
                digo=0;



            }

        }

    }
    if (digo==1) {
        printf("its a digo \n");

    }
    else{
        printf("is not digo \n");
    }

}
*/
/*exo 11: Vérifier si une matrice est identité
int main(void) {
    int somme ;
    int t[100][100];
    int digo=1 ;


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (t[i][j]!=t[i][i] && t[i][j]!=0 && t[i][j]!=1) {
                digo=0;

            }
        }

    }
    if (digo==1) {
        printf("we got the digo \n");


    } else {
        printf("we dont have the digo \n");
    }
}*/
/*exo 12:Somme des éléments au-dessus de la diagonale
int main(void) {
    int somme ;
    int t[100][100];



    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    somme=0;
    for (int i = 0; i < 4; ++i) {

        for (int j = 0; j < 4; ++j) {
            if (i<j) {
                somme+=t[i][j];
            }


        }
    }
    printf("the somme is : %d \n",somme);
}*/
/*exo 13: Check whether a matrix is a magic square
int main(void) {
    int somme ;
    int t[100][100];
    int somme2;



    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("t[%d][%d]=",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    somme=0;
    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {
            if (t[i][j]==t[i][i]) {
                somme+=t[i][i];

            }

        }

    }
    somme2=0;
    printf("the somme is : %d\n",somme);
    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {
            if (t[i][j]==t[i][2-i]) {
                somme2+=t[i][2-i];


            }

        }

    }
    printf("the somme 2 is : %d \n",somme2);
    if (somme==somme2) {
        printf("the matrix is carre \n");
    } else {
        printf("the matrix isnt carre \n ");
    }
}

*/
/*exo 14: for the new files for the doing well :*/
 