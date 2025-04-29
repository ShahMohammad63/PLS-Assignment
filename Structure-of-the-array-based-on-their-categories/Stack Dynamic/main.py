stack = []  # Using list as a stack

# Push elements onto stack
stack.append(10)
stack.append(20)
stack.append(30)

print("Stack elements (LIFO order):", end=' ')

# Pop and print elements (LIFO order)
while stack:
    print(stack.pop(), end=' ')  # Pop and print top element

print()  # For newline after output