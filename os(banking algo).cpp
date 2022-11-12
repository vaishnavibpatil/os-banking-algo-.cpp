#include <iostream>
using namespace std;
int main()
{
    int i,j,k,a[5][3],max[5][3],avai[3];
    int n=5,m=3;
    cout<<"allocated memory\n";
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<",";
        }
        cout<<"\n";
    }
    cout<<"max memory\n";
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>max[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<max[i][j]<<",";
        }
        cout<<"\n";
    }
    cout<<"available memory\n";
    for(i=0;i<3;i++)
    {
    cin>>avai[i];
    }
    for(i=0;i<3;i++)
    {
    cout<<avai[i]<<",";
    }
   int f[n], ans[n], ind = 0;
   for (k = 0; k < 5; k++)
  {
    f[k] = 0;
  }
  int need[m][n];
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 3; j++)
    {
      need[i][j] = max[i][j] - a[i][j];
    }
  }
  for(i=0;i<5;i++)
  {
      for(j=0;j<5;j++)
      {
          cout<<need[i][j];
      }
      cout<<"\n";
  }
  int y = 0;
  for (k = 0; k < 5; k++)
  {
    for (i = 0; i < 5; i++) 
    {
      if (f[i] == 0) 
      {
 
        int flag = 0;
        for (j = 0; j < 3; j++)
        {
          if (need[i][j] > avai[j]){
            flag = 1;
            break;
          }
        }
 
        if (flag == 0) {
          ans[ind++] = i;
          for (y = 0; y < 3; y++)
            avai[y] += a[i][y];
          f[i] = 1;
        }
      }
    }
  }
   
  int flag = 1;
   
  
  for(int i = 0;i<5;i++)
  {
        if(f[i]==0)
      {
        flag = 0;
        cout << "The given sequence is not safe";
        break;
      }
  }
 
  if(flag==1)
  {
    cout << "Following is the SAFE Sequence" << endl;
      for (i = 0; i < n - 1; i++)
        cout << " P" << ans[i] << " ->";
      cout << " P" << ans[n - 1] <<endl;
  }
 
    return (0);
  
    
}