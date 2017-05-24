#include<iostream>
using namespace std;
class Operation
{
	int a,b,c,d;
	char x,y,z;
	public:
		Operation();
		int Caulculate();
		int Process(int x,int y,char Q);
		char oper(int x);
		void showOperation();
		void showAnswer();
};
class counter
{
	int right,wrong;
	int UserAsw;
	public:
		counter();
		void RightOrWrong(int UserAnswer,int RightAswer);
		void showRight();
		void showWrong();
}; 
class Language
{
	int choose;
	public:
		void set(int ch);
		void hint();
		void Choose(int a);
		void Chinese(int pr);
		void English(int pr);
		void Japanese(int pr);
		void German(int pr);
		void French(int pr);
};
