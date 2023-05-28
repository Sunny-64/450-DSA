class Queue:
    __Default_size = 5
    end = -1
    size = 0
    queue = []
    def __init__(self, size=None):
        if(size == None):
            self.size = self.__Default_size
        else:
            self.size = size
            
        self.queue = [None] * self.size
            
    # Insertion in Queue  
    def enqueue(self, item):
        if(self.end + 1 < self.size):
            self.end += 1
            self.queue[self.end] = item
        else:
            raise Exception("Queue in full")   
    
    # Deletion in Queue
    def dequeue(self):
        print("\n Deletion in queue")
        if(self.end < 0):
            raise Exception("Queue is empty")
        else:
            deleted_element = self.queue[0]
            self.end -= 1
            for i in range(1, self.size):
                self.queue[i-1] = self.queue[i]
            
            # print(deleted_element)
            print(self.queue)
    
    def display(self):
        print("\n Printing the Queue")
        for i in range(0, self.end + 1):
            print(self.queue[i], end = " <-")
            
        print("End \n ")
        

queue = Queue()

queue.enqueue(1)
queue.enqueue(2)
queue.enqueue(3)
queue.enqueue(4)

queue.display()

queue.dequeue()
queue.dequeue()

queue.display()

queue.enqueue(10)

queue.display()
