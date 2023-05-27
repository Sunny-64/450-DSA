class Node:
    def __init__(self, data):
        self.data = data
        self.left = None 
        self.right = None 


def buildTree (root) : 
    # Take the user input for the data 
    data = int(input("Enter the data : "))
    #check if the data is -1. -1 will mark as null
    if (data == -1):
        return None
    
    # Take input for the child elements 
    print(f"Enter the Left element of : {data}")
    buildTree(data)

    # Take the input for the right child elements
    print(f"Enter the Right element of : {data}")
    buildTree(data)

    return root



root = None 
root = buildTree(root); 

