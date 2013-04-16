#ifndef GFQUEUENODE_HPP
#define GFQUEUENODE_HPP


template <class T>
class GFQueueNode
{
    public:
        GFQueueNode();
        GFQueueNode(const T ldata);
        void setData(const T ldata);
        T getData() const;
        GFQueueNode<T> *next;
    private:
        T data;
};




#include "gfqueuenode.cpp"

#endif // GFQUEUENODE_HPP
