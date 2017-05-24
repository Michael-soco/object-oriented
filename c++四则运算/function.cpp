#include<iostream>
#include<ctime>
#include<cstdlib>
#include"class.h" 
#define N 11
using namespace std;
void Language::set(int ch)
{
	choose=ch;
}
void Language::Choose(int a)
{
	switch(choose)
	{
		case 1:
			{
				if(a==1) Chinese(1);break;
				if(a==2) Chinese(2);break;
				if(a==3) Chinese(3);break;
				if(a==4) Chinese(4);
			}
		case 2:
			{
				if(a==1) English(1);break;
				if(a==2) English(2);break;
				if(a==3) English(3);break;
				if(a==4) English(4);
			}
		case 3:
			{
				if(a==1) Japanese(1);break;
				if(a==2) Japanese(2);break;
				if(a==3) Japanese(3);break;
				if(a==4) Japanese(4);
			}
		case 4:
			{
				if(a==1) German(1);break;
				if(a==2) German(2);break;
				if(a==3) German(3);break;
				if(a==4) German(4);
			}
		case 5:
			{
				if(a==1) French(1);break;
				if(a==2) French(2);break;
				if(a==3) French(3);break;
				if(a==4) French(4);break;
			}
	}
}
void Language::hint()
{
	cout<<"Which language would you like to use?"<<endl;
	cout<<"您想使用什么语言？"<<endl;
	cout<<"あなたは何を使いたいですか。"<<endl;
	cout<<"Sie verwenden wollen, in welcher Sprache?"<<endl;
	cout<<"Tu veux utiliser ce langage?"<<endl; 
	cout<<"Input 1 to Chinese,2 to English,3 to Japanese,4 to German,5 to French"<<endl;
} 
void Language::Chinese(int pr)
{
	switch(pr)
	{
		case 1:
		cout<<"你做对的题目数量:" <<endl;break;
		case 2:
		cout<<"你做错的题目数量:"<<endl;break;
		case 3:
		cout<<"请输入你的答案:"<<endl;break;
		case 4: 
		cout<<"正确答案是:"<<endl;break;
	}
	
}
void Language::English(int pr)
{
	switch(pr)
	{
		case 1:
		cout<<"The number of questions you do right:"<<endl;break;
		case 2:
		cout<<"The number of questions you've done wrong: "<<endl;break;
		case 3:
		cout<<"Please input your answer: "<<endl;break;
		case 4:
		cout<<"The correct answer is..: "<<endl;
	}
	
}
void Language::Japanese(int pr)
{
	switch(pr)
	{
		case 1:
		cout<<"あなたが正しいタイトル数を作って："<<endl;break;
		case 2:
		cout<<"君の間違ったテーマ数は："<<endl;break;
		case 3:
		cout<<"あなたの答えを入力してください："<<endl;break;
		case 4:
		cout<<"正しい答えは："<<endl;
	}
	
}
void Language::German(int pr)
{
	switch(pr)
	{
		case 1:
		cout<<"Man die Thema der menge: "<<endl;break;
		case 2:
		cout<<"Sie falsch Thema der menge:"<<endl;break;
		case 3:
		cout<<"Bitte geben sie ihre antwort: "<<endl;break;
		case 4:
		cout<<"Die richtige antwort IST: "<<endl;
	}
	
}
void Language::French(int pr)
{
	switch(pr)
	{
		case 1:
		cout<<"Vous avez fait le nombre de paires de sujet:"<<endl;break;
		case 2:
		cout<<"Nombre de sujets vous fait mal: "<<endl;break;
		case 3:
		cout<<"Saisissez votre réponse:"<<endl; break;
		case 4:
		cout<<"La réponse correcte est:"<<endl;
	}
}
counter::counter()
		{
			UserAsw=0;
			right=0;
			wrong=0;
		}
void counter::RightOrWrong(int UserAnswer,int RightAnswer)
{
	if(UserAnswer==RightAnswer) right++; 
	else wrong++;
}
void counter::showRight()
{
	cout<<right<<endl;
} 
void counter::showWrong()
{
	cout<<wrong<<endl;
}
Operation::Operation()
{
	int Op;
	a=rand()%N;
	b=rand()%N;
	c=rand()%N;
	d=rand()%N;
	Op=rand()%3;
	x=oper(Op);
	Op=rand()%2;
	y=oper(Op);
	Op=rand()%3;
	z=oper(Op);
}
int Operation::Caulculate()
{
	int tempVal1,tempVal2;
	tempVal1=Process(a,b,x);
	tempVal2=Process(a,b,z);
	return Process(tempVal1,tempVal2,y);
}
int Operation::Process(int x,int y,char Q)
{
	if(Q=='+') return x+y;
	if(Q=='-') return x-y;
	if(Q=='*') return x*y;
	if(Q=='/') return x/y; //// 
}
char Operation::oper(int x)
{
	if(x==0) return '+';
	if(x==1) return '-';
	if(x==2) return '*';
	if(x==3) return '/';
}
void Operation::showOperation()
{
	cout<<"("<<a<<x<<b<<")"<<y<<"("<<c<<z<<d<<")"<<"=?"<<endl;
}
void Operation::showAnswer()
{
	cout<<Caulculate();
}
