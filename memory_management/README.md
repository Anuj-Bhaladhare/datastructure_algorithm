https://en.wikipedia.org/wiki/Memory_management
https://www.geeksforgeeks.org/requirements-of-memory-management-system/



==> Referance Veriable:
1. Pass By Value:
    void f(int x)  
    { 
        x--; 
    } 
    
    // Driver code 
    int main()  
    { 
        int a = 5; 
        cout << a << endl; 
        f(a); 
        cout << a << endl; 
    }

2. Pass By Referce:
   -void f(int & x)  
    { 
        x--; 
    } 
    
    // Driver code 
    int main()  
    { 
        int a = 5; 
        cout << a << endl; 
        f(a); 
        cout << a << endl; 
    }


===================== Static Memory Allocation ======================
1. Static memory is also known as compile-time memory allocation.
2. Static memory is allocated on the stack.
3. Static memory is faster and has less overhead.
4. However, static memory can lead to memory wastage if it's not fully used.


===================== Dynamic Memory Allocation =====================
1. Dynamic memory is allocated in the heap.
2. Dynamic memory is more flexible and efficient.
3. Dynamic memory can lead to fragmentation if not managed properly.
4. Dynamic memory can be allocated at any point in an application.
5. Dynamic memory can be deallocated when it's no longer needed.

===================== Heap Memory =====================
>>>>> Heap memory is a region of a computer's memory that is used to dynamically allocate memory blocks. It's also known as dynamic memory. 
=> How does heap memory work?
1. Heap memory is allocated and deallocated during the execution of a program. 
2. Programmers can request blocks of memory of any size. 
3. Objects are constructed in heap memory, and referencing information for these objects is saved in stack memory. 
4. The garbage collector recovers blocks of memory that are no longer pointed to. 

=> When is heap memory used?
1. Heap memory is used in programs that need to manage large amounts of data. 
2. It's used in embedded applications that require dynamically allocated memory space. 
3. It's used to build data structures in memory, such as linked lists and binary trees. 

=> Heap memory issues
1. Heap memory can suffer from memory fragmentation. 
2. Memory leaks can occur if the programmer does not handle memory well. 
3. A larger heap size can lead to longer startup times and longer garbage collection pauses. 


========================================================================
#Topic Name
    Efficiency
    Implementations
    Fixed-size blocks allocation
    Buddy blocks
    Slab allocation
    Stack allocation


