#include <iostream>
#include <math.h>
#define SIZE 1001

using namespace std;

void insertSorted(int *v, int last, int vl) 
{
    int i;
    if (last==0) {
		v[last]=vl;
		return;	}
	i=last-1;
	while (i>=0)
	{
		if (vl<=v[i])
		{
			v[i+1]=v[i];
			i--;
		}
		else {
			v[i+1]=vl;
			return;
		}
	}
	v[i+1]=vl;
}
int binarySearch (int *v, int vl)
{
   int first = 0;
   int last = SIZE - 1;
   int middle = (first+last)/2;
   int countmiddle = middle
   while (first <= last) {
       if( vl >= v[middle])
       {
           if(vl>= vetor[countmiddle] && vl<= vetor[countmiddle+1])
           {
               return countmiddle;
           }
           else
           {
            countmiddle++;
           }
        else
        {
            
           if(vl<= vetor[countmiddle] && vl>= vetor[countmiddle-1])
           {
               return countmiddle;
           }
           else
           {
            countmiddle--;
           }
        
        }

   }
   return 0; // not found
}

int main(void)
{
    int vetor[SIZE],C,T;
    long long int i,n,x,y;
    double raiz;
    
    cin>>C>>T;
    
    for(i = 0; i<C; i++)
    {
        cin>>n;
        insertSorted(vetor,i, n*n);
    }
    for(i = 0; i<C; i++)
    {
        cout<<vetor[i]<<endl;
    }
    for(i = 0; i<T; i++)
    {
        cin>>x>>y;
        raiz = sqrt((x*x)+(y*y));
    }

    

    


    return 0;
}
