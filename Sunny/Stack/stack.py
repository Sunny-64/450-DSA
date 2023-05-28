class Stack: 
    __DefaultSize = 10
    stack = []
    top = -1
    def __init__(self, size = None):
        if(size == None):
            self.size = self.__DefaultSize
        else:
            self.size = size
    
    def push(self, element):
        self.top += 1
        if(len(self.stack) >= self.size):
            raise Exception("Stack is full")
        else:
            self.stack.append(element)
        
    def pop(self):
        if self.top != -1:
            self.top -= 1
        else:
            raise Exception("top is -1")
            
    def display(self):
        for i in range(0, self.top + 1): 
            print(self.stack[i])

# Custom Stack 

stack1 = Stack()

stack1.push(1)
stack1.push(2)
stack1.push(3)

stack1.display()

print("\n")

stack1.display()

print("\n")


# print(stack1.__DefaultSize)

