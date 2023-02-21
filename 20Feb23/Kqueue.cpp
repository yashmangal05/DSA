//https://www.geeksforgeeks.org/efficiently-implement-k-queues-single-array/

#include <bits/stdc++.h>
using namespace std;

class kQueue{
    private:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freeSpot;

    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            arr = new int[n];
            next = new int[n];
            freeSpot = 0;

            for(int i = 0; i < n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            for(int i = 0; i < k; i++){
                front[i] = -1;
                rear[i] = -1;
            }
        }

        void enqueue(int data, int qn){
            if(freeSpot == -1){
                cout << "Queue is full" << endl;
                return;
            }

            int index = freeSpot;

            freeSpot = next[freeSpot];


            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                next[rear[qn-1]] = index;
            }

            next[index] = -1;
            rear[qn-1] = index;

            arr[index] = data;

        }
        int dequeue(int qn){
            if(front[qn-1] == -1){
                cout << "Queue is empty" << endl;
                return -1;
            }

            int index = front[qn-1];

            front[qn-1] = next[index];

            next[index] = freeSpot;

            freeSpot = index;

            return arr[index];
        }
};

int main(){
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;

    return 0;

}