#ifndef GFQUEUE_HPP
#define GFQUEUE_HPP

#include "gfqueuenode.hpp"


template <class T>
class GFQueue
{
    public:
        GFQueue();
        void enqueue(T *);
        T *dequeue();
    private:
        GFQueueNode<T *> *head;
        GFQueueNode<T *> *tail;
};


#include "gfqueue.cpp"

#endif // GFQUEUE_HPP
