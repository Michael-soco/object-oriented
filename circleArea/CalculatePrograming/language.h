#include<stdio.h>
void Chinese(int a)
{   if(a==0) printf("请输入题目数量:");
	if(a==1) printf("正确答案是：");
	if(a==2) printf("正确:"); 
	if(a==3) printf("错误:");
} 
void English(int a)
{   if(a==0) printf("Please enter the number of questions:") ;
	if(a==1) printf("The correct answer is:");
	if(a==2) printf("right:");
	if(a==3) printf("wrong:");
}
void German(int a)
{   if(a==0) printf("Bitte geben Sie die Anzahl der Elemente:"); 
	if(a==1) printf("Die richtige Antwort ist:");
	if(a==2)printf("richtig:");
	if(a==3) printf("Fehler:");
}
void French(int a)
{
	if(a==0) printf("S'il vous pla?t entrez le nombre de sujets:") ;
	if(a==1) printf("La bonne réponse est");
	if(a==2) printf("correct:");
	if(a==3) printf("erreur:");
}
void Japanese(int a)
{ 
	if(a==0) printf("項目の番号を入力してください:");
	if(a==1) printf("正しい答えは次のとおりです");
	if(a==2) printf("正しいです:");
	if(a==3) printf("エラー:");
}

