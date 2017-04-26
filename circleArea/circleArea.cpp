#include<iostream>
#include"circleArea.h"
using namespace std;
void circleArea::set_value()   //用于半径数值输入 
{
	cout<<"Please input the radius: ";
	cin>>r;
}
void circleArea::area_value()  //计算面积 
{
	s=p*r*r;
}
void circleArea::show_value()  //输出半径大小 
{
	cout<<"The area of circle is:"<<s<<endl;
}
