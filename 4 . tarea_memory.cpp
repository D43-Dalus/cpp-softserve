// ============================================================================
// EXERCISE 1: Identify Stack vs Heap
// ============================================================================
// For each variable below, identify if it's stored on the stack or heap

void exercise1() {
    int local_var;                    // Stack or Heap?
    int* ptr = new int;               // ptr: Stack or Heap? *ptr: Stack or Heap?
    static int static_var;            // Stack or Heap?
    int arr[10];                      // Stack or Heap?
    int* dynamic_arr = new int[10];   // dynamic_arr: Stack or Heap? *dynamic_arr: Stack or Heap?
}

// ============================================================================
// EXERCISE 2: Fix Memory Leaks
// ============================================================================
// Find and fix all memory leaks in the following code

void exercise2_leaky() {
    int* ptr1 = new int(10);
    int* ptr2 = new int(20);
    
    ptr1 = ptr2;  // Memory leak! Original ptr1 memory is lost
    
    delete ptr1;
    // What's wrong here?
}

// Fixed version:
void exercise2_fixed() {
    // TODO: Fix the memory leak
}