#include <iostream>

using namespace std;

int size = 10;
int front = 0;
int rear = -1;
int queue[10];

bool isEmpty() {
    return (front < 0 || front > rear) ? true : false;
}

bool isFull() {
    return rear == size - 1 ? true : false;
}

void enqueue(int item) {
    if (isFull()) {
        cout << "Hàng đợi đầy rùi má ơi, không enqueue được nữa đâu!" << endl;
        return;
    }
    rear++;
    queue[rear] = item;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Uầy, hàng đợi rỗng má ơi, có gì đâu mà dequeue!" << endl;
        return;
    }
    queue[front] = 0;
    front++;
}

int peek() {
    return queue[front];
}

int main() {
    // gọi các thao tác với queue ở đây
    enqueue(4);

    
    cout<<isEmpty();


    return 0;
}