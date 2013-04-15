#include <iostream>

#include "gfqueue.hpp"

using namespace std;


int main() {
    GFQueue<int> queue;

    int *pData = 0;
    int data = 0;
    do {
        cout << "Give an integer or 0 to stop: ";
        cin >> data;
        if(data == 0) {
            break;
        }
        else {
            pData = new int(data);
            queue.enqueue(pData);
        }
    } while(1);

    while( (pData = queue.dequeue()) != 0) {
        cout << *pData << endl;
        delete(pData);
    }

    return 0;
}
