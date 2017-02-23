#include <iostream>
#include <queue>
// This program shows the STL queue container

using namespace std;

int main() {

    const int MAX = 8;
    int count;

    queue<int> iQueue; // Define a queue object

    // enqueue some values

    cout << "Now enqueue items..." << endl;
    for (count = 2; count < MAX; count += 2) {
        cout << "Pushing " << count << endl;
        iQueue.push(count);
    }

    // dequeue and display numbers
    cout << "Now dequeue items..." << endl;
    for (count = 2; count < MAX; count += 2) {
        cout << "Popping " << iQueue.front() << endl;
        iQueue.pop();
    }

    return 0;
}