#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int i,j,k;
  for(i=1;i<4;++i)
  {    cout<<"\n"<<"\t";
       for(j=1;j<=i;++j)
	  cout<<"*";
  }
  cout<<"\n"<<"\t";
  for(k=1;k<3;++k)
  {   cout<<"|";
  }
  cout<<"Merry Christmas";
  getch();
}
