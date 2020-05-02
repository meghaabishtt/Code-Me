#include<iostream>
using namespace std;
int main()
{
    int row=0,col=0,m=0,cr=0,cj=0,cb=0,block=0;
int arr[9][9];
cout<<"ENTER SUDOKU ENTRIES"<<endl;
for(int i=0;i<9;i++)
{
for(int j=0;j<9;j++)
{

    cin>>arr[i][j];
}
}
//FOR ROWS
for(int i =0;i<9;i++)
{ row = i;
    int temp[9]={0};

    for(int j =0;j<9;j++)
    {
      temp[arr[i][j]-1] = temp[arr[i][j]-1] -1;

    }

    for(m =0;m<9;m++)
    {

    if(temp[m]!=-1)
   { cr = cr +1;
        cout<<"Fault in row "<< row +1<<endl;
      break;
    }
}
}


//FOR COLS
for(int j=0;j<9;j++)
{ col = j;
    int temp[9]={0};

    for(int i =0;i<9;i++)
    {
      temp[arr[i][j]-1] = temp[arr[i][j]-1] -1;

    }

    for(m =0;m<9;m++)
    {

    if(temp[m]!=-1)
   {
       cj = cj +1;
        cout<<"Fault in column "<< col +1<<endl;
        break;
    }
}
}

//FOR BLOCKS
int s=0,e=3;
 while(e<=9)
 {
     int l =0,r=3;

      while(r<=9)
      {
          block = block+1;
  int temp[9]={0};

for(int i =s;i<e;i++)
{
    for(int j =l;j<r;j++)
    {

       temp[arr[i][j]-1] =  temp[arr[i][j]-1]-1;
       }

}
  for(m =0;m<9;m++)
    {
        if(temp[m]!=-1)
   {
       cb = cb +1;
        cout<<"Fault in block "<<block<<endl;
        break;
    }
}
l=l+3;
r=r+3;
      }

s=s+3;
e=e+3;
 }

 if((cr==0)&&(cj==0)&&(cb==0))
 {
     cout<<"YOUR SUDOKU IS CORRECT!";
 }



}

