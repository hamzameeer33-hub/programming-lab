/*
lab 1   :Task 3
Name    :Hamza Khalid
Roll no :05-SET-01
Date    :11-26-2026
Purpose :"Fix Bug"
*/
#include<iostream>
using namespace std;//BUG no 1 : Missing ;(semiconoln) after std
int main(){
	cout<<"Welcome to the lab!"<<endl;//BUG no 2 : Missing ;(semicolon)after endl
	cout<<"Today we learn\"C++\"."<<endl;//BUG no 3: Cout-C is case sensitive(correct is cout) and inside the comma 
	cout<<"Files are in C:\\Lab01"<<endl;//BUG no 4: to print blackslash in output double blackslash(\\)and.is inside the comma
	cout<<"Bye!"<<endl;//BUG no 5: (") is missing after bye!
	return 0;
}
