#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int b[4],a[4],k,i=0;
bool notfound=true;
int numberofcows(int a[4],int b[4])
{int cows=0;
for (int i=0;i<4;i++)
{for (int j=0;j<4;j++)
if (a[i]==b[j]&&i!=j)
       cows++;
}
return cows;
}
int numberofbulls(int a[4],int b[4])
{int bulls=0;
for (int i=0;i<4;i++)
{if (a[i]==b[i])
bulls++;}
return bulls;
}
int number ()
{srand(time(NULL));
int x=(rand()%10);
return x;
}
int main()
{while(true)
{notfound=true;
k=number();
for (int j=0;j<4;j++)
if (b[j]==k)
notfound=false;
if (notfound==true)
b[i]=k,i++;
if (i==4)
break;
}
for (int i=0;i<4;i++)
cout<<b[i];
cout<<"welcome to you please enter the number "<<endl;
do{
{for (int i=0;i<4;i++)
cin>>a[i];
if (numberofbulls(b,a)==4)
{cout<<"you win :) ";
cout<<"the number of cows = "<<numberofcows(b,a)<<endl;
cout<<"the number of bulls = "<<numberofbulls(b,a)<<endl;}
else {cout<<"try again"<<endl;
cout<<"the number of cows = "<<numberofcows(b,a)<<endl;
cout<<"the number of bulls = "<<numberofbulls(b,a)<<endl;}
}
}while(numberofbulls(b,a)!=4);
return 0;
}
