# C++ vs Python Array Allocation

This repository compares different array memory allocation strategies in **C++** and **Python**.

## Allocation Strategies

| Type                | Description                                                                 |
|---------------------|-----------------------------------------------------------------------------|
| Fixed Dynamic       | Arrays with fixed sizes                                                     |
| Stack Dynamic       | Arrays with sizes determined at runtime (stack-allocated in C++)            |
| Fixed Heap Dynamic  | Heap-allocated arrays with fixed sizes                                      |
| Heap Dynamic        | Heap-allocated arrays with sizes determined at runtime                      |

## Comparison Table

| Type                | C++ Code               | Python Code               | Memory Area (C++) | Memory Area (Python) | Size Known At | Manual Memory Mgmt |
|---------------------|------------------------|---------------------------|-------------------|----------------------|---------------|--------------------|
| **Fixed Dynamic**   | `int arr[5];`          | `arr = [1, 2, 3, 4, 5]`   | Stack             | Heap                 | Compile-time  | No                 |
| **Stack Dynamic**   | `int arr[n];` (GCC)    | `arr = [i+1 for i in range(n)]` | Stack          | Heap                 | Run-time      | No                 |
| **Fixed Heap Dynamic** | `int* arr = new int[5];` | `arr = [0]*5` (then modified) | Heap          | Heap                 | Compile-time  | Yes (C++)/No (Py)  |
| **Heap Dynamic**    | `int* arr = new int[n];` | `arr = [i*2 for i in range(n)]` | Heap         | Heap                 | Run-time      | Yes (C++)/No (Py)  |

## Detailed Explanations

### 1. Fixed Dynamic Arrays
- **C++**: Arrays with fixed sizes at compile-time, stored on the stack
- **Python**: Lists with fixed values, but dynamically allocated on the heap

### 2. Stack Dynamic Arrays
- **C++**: Variable Length Arrays (VLAs) allow runtime size determination (stack-allocated)
- **Python**: Lists are always heap-allocated with runtime size determination

### 3. Fixed Heap Dynamic Arrays
- **C++**: Heap-allocated arrays with fixed sizes using `new`
- **Python**: Lists are heap-allocated and can change size

### 4. Heap Dynamic Arrays
- **C++**: Heap-allocated arrays with runtime size determination
- **Python**: Lists are always heap-allocated with dynamic sizing

## Key Differences

- **Memory Area**:
  - C++: Stack (faster but limited) vs Heap (larger but manual management)
  - Python: Always heap with automatic management

- **Size Determination**:
  - C++: Compile-time or runtime
  - Python: Always at runtime

- **Memory Management**:
  - C++: Manual (`delete[]` required)
  - Python: Automatic garbage collection

## Example Files

This repository contains these example files:
- `fixed_array.cpp` / `fixed_array.py`
- `stack_dynamic.cpp` / `stack_dynamic.py`
- `fixed_heap.cpp` / `fixed_heap.py`
- `heap_dynamic.cpp` / `heap_dynamic.py`