template <class T> GFQueueNode<T>::GFQueueNode() {
    data = T();
}


template <class T> GFQueueNode<T>::GFQueueNode(const T ldata) {
    data = ldata;
}


template <class T> void GFQueueNode<T>::setData(const T ldata) {
    data = ldata;
}


template <class T> T GFQueueNode<T>::getData() const {
    return data;
}
