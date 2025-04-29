import ctypes

size = 5
ArrayType = ctypes.c_int * size  # Create array type
heap_arr = ArrayType()  # Instantiate the array

for i in range(size):
    heap_arr[i] = i + 1  # Initialize values

for i in heap_arr:
    print(i, end=' ')  # Print with space separator

# No manual cleanup needed - Python handles memory