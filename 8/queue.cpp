//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#include <queue>

using namespace std;

void showQueue(queue<int> queue1)
{
    queue<int> g = queue1;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> specialQueue;
    specialQueue.push(10);
    specialQueue.push(20);
    specialQueue.push(30);

    cout << "The queue specialQueue is : ";
    showQueue(specialQueue);

    std::cout << "size : " << specialQueue.size() << std::endl;
    std::cout << "front : " << specialQueue.front() << std::endl;
    std::cout << "back : " << specialQueue.back( ) << std::endl;

    std::cout << "push: " << std::endl;
    specialQueue.push(99) ;
    showQueue(specialQueue);

    std::cout << "pop : " << std::endl;
    specialQueue.pop();
    showQueue(specialQueue);



    return 0;
}