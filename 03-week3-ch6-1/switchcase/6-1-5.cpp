/*******************************************
 *  程式名稱 : 6-1-5.cpp ( 動手動腳 5 )
 *  程式說明 : switch指令的練習
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int num1,num2,op;
	bool loop;
	
	loop=true;
	while(loop){
		cout<<"請依序輸入2個數字(0 0 確認離開):";
		cin>>num1>>num2;
		if(num1==0 && num2==0)break;
		cout<<"請選擇運算方式(1)加法(2)減法(3)乘法(4)除法：";
		cin>>op;
		cout<<"運算結果:";
		switch (op)
	   {
			case 1:
				cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl<<endl;
				break;
			case 2:
				cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl<<endl;
				break;
			case 3:
				cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl<<endl;
				break;
			case 4:
				cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl<<endl;
				break;
			default:
				cout<<"輸入錯誤，無法運算。" <<endl<<endl;
		}		
	}

	system("Pause");
}
