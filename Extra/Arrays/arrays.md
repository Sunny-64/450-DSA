## Rotation of an Array

### method 1 
Suppose the give array is arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2.

First Step:
    => Store the elements from 2nd index to the last.
    => temp[] = [3, 4, 5, 6, 7]

Second Step: 
    => Now store the first 2 elements into the temp[] array.
    => temp[] = [3, 4, 5, 6, 7, 1, 2]

Third Steps:
    => Copy the elements of the temp[] array into the original array.
    => arr[] = temp[] So arr[] = [3, 4, 5, 6, 7, 1, 2]

### method 2

Let us take arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2.

First Step:
        => Rotate to left by one position.
        => arr[] = {2, 3, 4, 5, 6, 7, 1}

Second Step:
        => Rotate again to left by one position
        => arr[] = {3, 4, 5, 6, 7, 1, 2}

Rotation is done by 2 times.
So the array becomes arr[] = {3, 4, 5, 6, 7, 1, 2}


### method 3
- A Juggling Algorithm

Let arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} and d = 3

First step:
        => First set is {1, 4, 7, 10}.
        => Rotate this set by one position to the left.
        => This set becomes {4, 7, 10, 1}
        => Array arr[] = {4, 2, 3, 7, 5, 6, 10, 8, 9, 1, 11, 12}

Second step:
        => Second set is {2, 5, 8, 11}.
        => Rotate this set by one position to the left.
        => This set becomes {5, 8, 11, 2}
        => Array arr[] = {4, 5, 3, 7, 8, 6, 10, 11, 9, 1, 2, 12}

Third step:
        => Third set is {3, 6, 9, 12}.
        => Rotate this set by one position to the left.
        => This set becomes {6, 9, 12, 3}
        => Array arr[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2, 3}