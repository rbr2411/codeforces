# include <bits/stdc++.h>
using namespace std;

struct Pizza
{
    int num_ingred;
    string ingred[num_ingred];
};

int main()
{
    //extracting data from file
    FILE* fp = fopen("D:/Downloads/a_example", r);
    int M,T2, T3, T4;
    struct Pizza* p;
    while(!feof(fp))
    {
        fscanf("%d %d %d %d",&M, &T2, &T3, &T4);
        p = (struct Pizza*)malloc(sizeof(struct Pizza) * D);
        for(int i =0; i< M; i++)
        {
            fscanf("%d", &p[i]-> num_ingred);
            for(int i=0; i< p[i] -> num_ingred; i++)
            {
                fscanf("%s",&p[i] ->ingred[i]);
            }
        }
    }
    fclose(fp);
/*● each pizza must be part of at most one order,
  ● for all N-person teams, either nobody or everybody receives a pizza,
  ● there are TN or less deliveries to teams of N people.
*/
int D = 0;




}