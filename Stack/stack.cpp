//============================================================================
// Name        : stack.cpp
// Author      : Muhammed AbdElrhman
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Stack{
public:
	int last=-1;
	int arr[100];

	void push(int val){
		if (last != 99){
			last++;
			arr[last]=val;
		}
	}

	int top(){
		if (last !=-1) return arr[last];
		else return -1;
	}

	void pop(){
		if (last!=-1)last--;
	}

	bool isEmpty(){
		if(last==-1) return true;
		else return false;
	}
};

int main() {
	Stack stk;
	stk.push(5);
	stk.push(7);
	stk.push(9);
	while(!stk.isEmpty()){
		cout<<"-------"<<endl;
		cout<<stk.top()<<endl;
		stk.pop();
	}
	return 0;
}
