#include<iostream>
using namespace std;


void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
 
}

int main() 
{ 
    int i,j,row,col;
    cout<<"EnterRowNumber"<<endl;
    cin>>row;
    cout<<"EnterColumnNumber"<<endl;
    cin>>col;
    for(i=1;i<=row;i++){
      for(j=1;j<=col;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
    
    cout << "\n\n";
    print_rectangle(row, col);

    return 0;
}


