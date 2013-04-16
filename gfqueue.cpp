template <class T> GFQueue<T>::GFQueue() {
    head = tail = 0;
}


template <class T> void GFQueue<T>::enqueue(const T ldata) {
    GFQueueNode<T> *node = new GFQueueNode<T>(ldata);

    if( head == 0 && tail == 0) {
        head = tail = node;
    }
    else {
        tail->next = node;
        tail = node;
    }
}


template <class T> T GFQueue<T>::dequeue() {
    if(head == 0) {
        return 0;
    }
    else {
        GFQueueNode<T> *node = head;

        head = head->next;
        T data = node->getData();

        delete(node);
        return data;
    }
}
