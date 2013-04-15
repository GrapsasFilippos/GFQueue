#ifndef GFQUEUENODE_HPP
#define GFQUEUENODE_HPP


template <class T>
class GFQueueNode
{
    public:
        GFQueueNode();
        GFQueueNode(T ldata);
        void setData(T ldata);
        T getData();
        GFQueueNode<T> *next;
    private:
        T data;
};




#include "gfqueuenode.cpp"

#endif // GFQUEUENODE_HPP
