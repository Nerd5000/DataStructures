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
		if (rear!=sizeof(arr)-1){
			rear++;
			arr[rear]=val;
		}
	}

	void dequeue(){
		if (head!=sizeof(arr)-1){
			head++;
		}
	}

	bool isEmpty(){
		if(rear==-1 && head ==-1) return true;
		else return false;
	}

	bool isFull(){
		if(rear==head && head !=-1) return true;
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
	while(!q.isFull()){
		q.dequeue();
		cout<<q.front()<<endl;
		cout<<"-----------"<<endl;
	}
	return 0;
}
