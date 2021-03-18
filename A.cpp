#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

// struct Pizza
// {
//     int num_ingred;
    
// };

int main()
{
    //extracting data from file
    FILE* fp = fopen("D:/Downloads/e_many_teams.txt", "r");
    int M,T2, T3, T4;
    fscanf(fp,"%d %d %d %d",&M, &T2, &T3, &T4);
    // struct Pizza* p;
    // while(!feof(fp))
    // {
    //     fscanf(fp,"%d %d %d %d",&M, &T2, &T3, &T4);
    //     p = (struct Pizza*)malloc(sizeof(struct Pizza) * M);
    //     for(int i=0; i < M-1; i++)
    //     {
    //         p[i].next = &p[i+1];
    //     }
    //     p[M-1].next = NULL;
    //     for(int i =0; i< M; i++)
    //     {
    //         fscanf(fp,"%d", &p[i].num_ingred);
    //         for(int i=0; i< p[i].num_ingred; i++)
    //         {
    //             string s = NULL;
    //             fscanf(fp,"%s",s);
    //             p[i].ingred.push_back(s);
    //         }
    //     }
    // }
    fclose(fp);
/*● each pizza must be part of at most one order,
  ● for all N-person teams, either nobody or everybody receives a pizza,
  ● there are TN or less deliveries to teams of N people.
*/
int D = 0;
int D_2 = 0;
int D_3 = 0;
int D_4 = 0;
// p[0] -- p[M-1] are pizzas
D_2 += (M / 2 > T2) ? T2: M/2;
M -= D_2 * 2;
D_3 += (M/3 > T3) ? T3 : M/3;
M -= D_3 * 3;
D_4 += (M/4 > T4) ? T4 : M/4;
D = D_2 + D_3 + D_4;
FILE* fptr = fopen("D:/Downloads/e.txt", "w");
    fprintf(fptr,"%d\n", D);
    int j =0;
    for(int i=0; i < D_2; i++)
    {
        fprintf(fptr,"%d %d %d\n", 2,j, j+1);
        j+= 2;
    }
    for(int i= 0; i < D_3; i++)
    {
        fprintf(fptr,"%d %d %d %d\n", 3,j, j+1, j+2);
        j+= 3;
    }
    for(int i =0; i< D_4; i++)
    {
        fprintf(fptr,"%d %d %d %d %d\n", 4,j, j+1, j+2,j+3);
        j+= 4;
    }
    fclose(fptr);
    return 0;
}