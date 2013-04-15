template <class T> GFQueueNode<T>::GFQueueNode() {
    data = 0;
}


template <class T> GFQueueNode<T>::GFQueueNode(T ldata) {
    data = ldata;
}


template <class T> void GFQueueNode<T>::setData(T ldata) {
    data = ldata;
}


template <class T> T GFQueueNode<T>::getData() {
    return data;
}
