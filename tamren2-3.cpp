#include <iostream>
using namespace std;
int mian(){
	int n1,n2,n3,n4;
	cout<<"Enter4 integers:";
	cin>>n1>>n2>>n3>>n4;
	int min=n1;
	if(n2<min)min=n2;
	if(n3<min)min=n3;
	if(n4<min)min=n4;
	cout<<"Thier minimum is:"<<min<<endl;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
