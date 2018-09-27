#include<iostream>
using namespace std;
int a[3][3];
int b[10];
int c[9];
int d[9];
int z,x;
int top=0,top1=0,top2=0;
void player2();
void player1();
void loop1();
void loop2();
void gamewon1();
void gamewon2();
int main()
{

cout<<"                            Welcome To Tic Toe Game"<<endl;
cout<<"                              Yash Kumar Singhal"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"                             Rules And Regulations"<<endl;
cout<<"*Numbering of Matrix will be as Follows"<<endl;
cout<<"1  2  3 "<<endl<<"4  5  6"<<endl<<"7  8  9"<<endl;
cout<<"You can Choose which block To mark According to the numbered against the"<<endl<<"Corresponding Block"<<endl;
cout<<endl<<"*The matrix which Have not been still marked is shown as -1"<<endl;
cout<<"*Player 1 will take the turn First"<<endl;
cout<<"*The marking Of Player 1 Is shown as 1 while the same for Player 2"<<endl<<endl;
cout<<"*Following Program is Only the DOS Simulation of Org TicTacToe and thus"<<endl<<" Will follow all Original Rules of the game"<<endl<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;



for(z=0;z<=2;z++)
{
	for(x=0;x<=2;x++)
	{
		a[z][x]=-1;
	}
}
for(z=0;z<=5;z++)
{
	c[z]=-1;
    d[z]=-1;
    
}
for(z=0;z<=8;z++)
{
	b[z]=-1;
}
while(1)
{

player1();
if(top==9)
{
	cout<<"Match is Tied"<<endl;
	exit(0);
	
}
player2();
if(top==9)
{
	cout<<"Match is Tied"<<endl;
	exit(0);
	
}
}
}

void player1()
{
	int pusher,checker,roundabout,row,coloumn;
	A:
	roundabout=0;
	cout<<"enter the position to be marked (Player 1)"<<endl;
	cin>>pusher;
	for(checker=0;checker<=top;checker++)
	{
	
	  if(pusher==b[checker])
	  {
	  	cout<<"Invalid Move"<<endl;
	  	roundabout=1;
	  	
	  }
	  
	}
	
	if(roundabout==1)
	{
		goto A;
	}
	else
	{
		pusher=pusher-1;
		if(pusher==0||pusher==1||pusher==2)
		{
			row=0;
			coloumn=pusher-(3*row);
		}
		if (pusher==3||pusher==4||pusher==5)
		{
			row=1;
			coloumn=pusher-(3*row);
		}
		if(pusher==6||pusher==7||pusher==8)
		{
			row=2;
			coloumn=pusher-(3*row);
		}
		
		
		a[row][coloumn]=1;
		b[top]=pusher+1;
		c[top1]=pusher+1;
		top++;
		top1++;
		
	}
	for(z=0;z<=2;z++)
	{
		for(x=0;x<=2;x++)
		{
			cout<<a[z][x]<<" ";
		}
		cout<<endl;
	}
	
		 
	loop1();
	
}
void player2()
{
	int pusher,checker,roundabout,row,coloumn;
	A:
	   roundabout=0;
	cout<<"enter the position to be marked (Player 2)"<<endl;
	cin>>pusher;
	for(checker=0;checker<=top;checker++)
	{
	
	  if(pusher==b[checker])
	  {
	  	cout<<"Invalid Move"<<endl;
	  	roundabout=1;
	  	
	  }
	  
	}
	
	if(roundabout==1)
	{
		goto A;
	}
	else
	{
		pusher=pusher-1;
		if(pusher==0||pusher==1||pusher==2)
		{
			row=0;
			coloumn=pusher-(3*row);
		}
		if (pusher==3||pusher==4||pusher==5)
		{
			row=1;
			coloumn=pusher-(3*row);
		}
		if(pusher==6||pusher==7||pusher==8)
		{
			row=2;
			coloumn=pusher-(3*row);
		}
		
		
		a[row][coloumn]=2;
		b[top]=pusher+1;
		d[top2]=pusher+1;
		top++;
		top2++;
		
	}
	for(z=0;z<=2;z++)
	{
		for(x=0;x<=2;x++)
		{
			cout<<a[z][x]<<" ";
		}
		cout<<endl;
	}
	
	 
    loop2();
}

void gamewon1()
{
	cout<<"Congratulations Player1	has Won"<<endl;
	exit(0);
	
}
void gamewon2()
{
	cout<<"Congratulations Player 2 has Won"<<endl;
	exit(0);
	
}

void loop1()
{
	int i,m,n,j;
		m=0,n=0;
	
	
for(i=0;i<top1;i++)
	{
		if(c[i]==1)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==2)
				{
					m=1;
				}
				if(c[j]==3)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				
				gamewon1();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top1;i++)
	{
		if(c[i]==1)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==4)
				{
					m=1;
				}
				if(c[j]==7)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top1;i++)
	{
		if(c[i]==1)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==5)
				{
					m=1;
				}
				if(c[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top1;i++)
	{
		if(c[i]==2)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==5)
				{
					m=1;
				}
				if(c[j]==8)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top1;i++)
	{
		if(c[i]==3)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==5)
				{
					m=1;
				}
				if(c[j]==7)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
m=0,n=0;	
	
for(i=0;i<top1;i++)
	{
		if(c[i]==3)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==6)
				{
					m=1;
				}
				if(c[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
}

  m=0;n=0;
  
  	
for(i=0;i<top1;i++)
	{
		if(c[i]==4)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==5)
				{
					m=1;
				}
				if(c[j]==6)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top1;i++)
	{
		if(c[i]==7)
		{
			for(j=0;j<top1;j++)
			{
				if(c[j]==8)
				{
					m=1;
				}
				if(c[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon1();
			}
		}
	}
	
}



void loop2()
{
	int i,m,n,j;
	m=0,n=0;
	 

	  
	for(i=0;i<top2;i++)
	{
		if(d[i]==1)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==2)
				{
					m=1;
				}
				if(d[j]==3)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				
				gamewon2();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top2;i++)
	{
		if(d[i]==1)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==4)
				{
					m=1;
				}
				if(d[j]==7)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top2;i++)
	{
		if(d[i]==1)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==5)
				{
					m=1;
				}
				if(d[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top2;i++)
	{
		if(d[i]==2)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==5)
				{
					m=1;
				}
				if(d[j]==8)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top2;i++)
	{
		if(d[i]==3)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==5)
				{
					m=1;
				}
				if(d[j]==7)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
	
m=0,n=0;	
	
for(i=0;i<top2;i++)
	{
		if(d[i]==3)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==6)
				{
					m=1;
				}
				if(d[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
}

  m=0;n=0;
  
  	
for(i=0;i<top2;i++)
	{
		if(d[i]==4)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==5)
				{
					m=1;
				}
				if(d[j]==6)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
	
	m=0,n=0;
	
for(i=0;i<top2;i++)
	{
		if(d[i]==7)
		{
			for(j=0;j<top2;j++)
			{
				if(d[j]==8)
				{
					m=1;
				}
				if(d[j]==9)
				{
					n=1;
				}
			}
			if(m==1&&n==1)
			{
				gamewon2();
			}
		}
	}
}
