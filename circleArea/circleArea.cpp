#include<iostream>
#include"circleArea.h"
using namespace std;
void circleArea::set_value()   //���ڰ뾶��ֵ���� 
{
	cout<<"Please input the radius: ";
	cin>>r;
}
void circleArea::area_value()  //������� 
{
	s=p*r*r;
}
void circleArea::show_value()  //����뾶��С 
{
	cout<<"The area of circle is:"<<s<<endl;
}
