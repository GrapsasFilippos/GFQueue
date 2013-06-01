template <class T> GFQueueNode<T>::GFQueueNode() : data( T() ), next( 0 ) {
}


template <class T> GFQueueNode<T>::GFQueueNode(const T ldata) : data( ldata ), next( 0 ) {
}


template <class T> void GFQueueNode<T>::setData(const T ldata) {
    data = ldata;
}


template <class T> T GFQueueNode<T>::getData() const {
    return data;
}
