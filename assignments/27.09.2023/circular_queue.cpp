class MyCircularQueue {
public:
    
    int *arr;
    int size = 0;
    int front = 0;
    int rear = 0;
    int cnt = 0;
    
    MyCircularQueue(int k) {
        arr = new int[k];
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        
        arr[(rear%size)] = value;
        rear++;
        cnt++;
        return true;
    }
    
    bool deQueue() {
        if(front == rear)
        {
            return false;
        }
        
        arr[front%size] = -1;
        front++;
        cnt--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        
        return arr[front%size];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        
        return arr[(rear-1)%size];
    }
    
    bool isEmpty() {
        
        if(front == rear)
        {
            return true;
        }
        
        return false;
        
    }
    
    bool isFull() {
        if(cnt == size)
        {
            return true;
        }
        
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */