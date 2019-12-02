//============================================================================
// Name        : queue.cpp
// Author      : Muhammed AbdElrhman
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Queue{
public:
	int rear=-1,head=-1;
	int arr[100];

	void enqueue(int val){
		if (isFull())return;
		else if(isEmpty()){
			rear=head=0;
		}else{
			rear=(rear+1)%sizeof(arr);
		}
		arr[rear]=val;
	}

	void dequeue(){
		if (isEmpty())return;
		else if(head==rear){
			head=rear=-1;
		}else head=(head+1)%sizeof(arr);
	}

	bool isEmpty(){
		if(rear==-1 && head ==-1) return true;
		else return false;
	}

	bool isFull(){
		if((rear+1)%sizeof(arr)==head ) return true;
		else return false;
	}

	int front(){
		return arr[head];
	}
};

int main() {
	Queue q;
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(9);
	while(!q.isEmpty()){
		cout<<q.front()<<endl;
		q.dequeue();
		cout<<"-----------"<<endl;
	}
	return 0;
}
