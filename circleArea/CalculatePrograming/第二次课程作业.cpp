#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>
#include<stdio.h> 
#define N 11
#define M 1000
#include"language.h"
using namespace std;
void readFile(int num)
{
	ofstream outFile;
	outFile.open("in.txt");
	outFile<<"The amount of the question:"<<endl<<num<<endl;
	outFile.close();
}
void writeFile(char *p,int choose,int answer)
{
	ofstream inFile;
	if(choose==0)
	{
		inFile.open("out.txt");
		inFile<<"The account of the questions:"<<endl;
		inFile<<p<<endl;
	}
	else
	inFile.open("out.txt",ios::app);
	if(choose==1) 
	{
		inFile<<"The operation is:"<<endl;
		inFile<<p;
	}
	else if(choose==2)
	{
		inFile<<p;
	}
	else if(choose==3)
	{
		inFile<<p<<"=?"<<endl;
	}
	else if(choose==4)
	{
		inFile<<"The correct answer is:"<<endl<<answer<<endl;
	}
	else if(choose==5)
	{
		inFile<<"Your answer is:"<<endl<<answer<<endl;
	}
	inFile.close();
}
int main(int argc,char *argv[])
{
	char Num[10];
	void language(int c,int xuan);
	int randomNumber(int x);
	int scan();
	int randomOperation(int x,int choose);
	int generateExpression(int a,int b,int choose);
	int caulculateResult(int x,int y,int z);
	void print(int x,int y,int z);
	int langu;
	int x,y,count=0,num,i;
	int oper=randomNumber(4);
	cout<<"请选择语言类型:"<<endl<<"1.中文"<<endl<<"2.英语"<<endl<<"3.德语"<<endl<<"4.法语"<<endl<<"5.日语"<<endl;
	langu=scan();
	language(langu,0);
	num=scan();
	sprintf(Num,"%d",num); 
	readFile(num);
	writeFile(Num,0,0);
	int val_a,val_b=0,yourAnswer=0;
	for(i=0;i<num;i++)
	{
		val_a=rand()%N;
		while(val_b==0)
		val_b=rand()%N;
		x=generateExpression(val_a,val_b,1);
		randomOperation(oper,2);
		val_a=rand()%N;
		while(val_b==0)
	    val_b=rand()%N;
		y=generateExpression(val_a,val_b,3);
		cout<<"=?"<<endl;
		writeFile(NULL,4,caulculateResult(x,y,oper));
		int yourAnswer;
		yourAnswer=scan();
		if(yourAnswer==caulculateResult(x,y,oper)) count++;
		else
		{
			language(langu,1);
			cout<<caulculateResult(x,y,oper)<<endl;
		} 
		writeFile(NULL,5,yourAnswer);
	}
	print(langu,count,num);
	return 0;
}
void language(int c,int xuan)  //语言选择 
{
	if(c==1) Chinese(xuan);
	if(c==2) English(xuan);
	if(c==3) German(xuan);
	if(c==4) French(xuan);
	if(c==5) Japanese(xuan);
}
int randomNumber(int x)  //generate randomnumber 
{
	int a;
	srand((unsigned int)time(NULL));
	a=rand()%x;
	return a;
}
int scan()  //input 
{
	int x;
	cin>>x;
	return x;
}
void randomOperation(int x,int choose)  //generate the middle operation 
{
	int randomNumber(int x);
	char operation[2];
	switch(x)
	{
		case 0:
			{
				cout<<"+";
				operation[0]='+';
				operation[1]='\0';
				break;
			}
		case 1:
			{
				cout<<"-";
				operation[0]='-';
				operation[1]='\0';
				break;
			}
		case 2:
			{
				cout<<"*";
				operation[0]='*';
				operation[1]='\0';
				break;
			}
		case 3:
			{
				cout<<"/";
				operation[0]='/';
				operation[1]='\0';
				break;
			}
	}
	writeFile(operation,choose,0);
}
int generateExpression(int a,int b,int choose)  //generate the fundamental expression and its value
{
	int result,operate;
	char expression[4]={'0'};
	operate=randomNumber(4);
	switch(operate)
	{
		case 0:
			{
				cout<<"("<<a<<"+"<<b<<")";
				expression[0]='(';
				sprintf(expression+1,"%d",a);
				expression[2]='+';
				sprintf(expression+3,"%d",b);
				expression[4]=')'; 
				result=a+b;
				break;
			}
		case 1:
			{
				cout<<"("<<a<<"-"<<b<<")";
				expression[0]='(';
				sprintf(expression+1,"%d",a);
				expression[2]='-';
				sprintf(expression+3,"%d",b);
				expression[4]=')'; 
				
				result=a-b;
				break;
			}
		case 2:
			{
				cout<<"("<<a<<"*"<<b<<")";
				expression[0]='(';
				sprintf(expression+1,"%d",a);
				expression[2]='*';
				sprintf(expression+3,"%d",b);
				expression[4]=')'; 
				result=a*b;
				break;
			}
		case 3:
			{
				cout<<"("<<a<<"/"<<b<<")";
				expression[0]='(';
				sprintf(expression+1,"%d",a);
				expression[2]='/';
				sprintf(expression+3,"%d",b);
				expression[4]=')'; 
				result=a/b;
				break;
			}	
	}
	writeFile(expression,choose,0); 
	return result;
}
int caulculateResult(int x,int y,int z)  //caulculate the final result
{
	int randomNumber(int x);
	int Finalresult;
	switch(z)
	{
		case 0:
			{
				Finalresult=x+y;
				break;
			}
		case 1:
			{
				Finalresult=x-y;
				break;
			}
		case 2:
			{
				Finalresult=x*y;
				break;
			}
		case 3:
			{
				Finalresult=x/y;
				break;
			}
	}
	return Finalresult;
}
void print(int x,int y,int z)  //Final output
{
	language(x,2);
	cout<<y;
	language(x,3);
	cout<<z-y;
}
