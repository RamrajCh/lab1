#ifndef QUEUE_H
#define QUEUE_H

#define MAX 3

class Queue
{
    private:
        char elements[MAX];
        int front;
        int rear;

    public:
        Queue();
        ~Queue();

        void enqueue(char element);
        char dequeue();
        char front_val();
        char rear_val();
        bool isEmpty();
        bool isFull();

};

#endif // QUEUE_H
