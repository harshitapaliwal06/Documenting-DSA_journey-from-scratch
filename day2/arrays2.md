# Day 02 — Functions & Vectors

## What I learned today:

### What is a Function?
- A block of code used to perform a specific action
- Promotes **reusability** through function calls
- A function has a **name**, and can take **inputs (parameters)**

### Function Without Parameters
```cpp
void greet() {
    cout << "Hello my world" << endl;
}

int main() {
    greet();   // used to execute/call it
}
```

### Function With Parameters
- **Parameter** — a placeholder value in the function definition
- **Argument** — the actual value passed while calling the function
```cpp
void name(string myname) {
    cout << name;
}

int main() {
    name("rahul");
    name("rahit");
}
```

### Function That Takes an Array
```cpp
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    printArray(arr, 4);   // 4 = length of array
}
```

### Function With Multiple Parameters
```cpp
void add(int x, int y) {
    cout << x + y;
}

int main() {
    add(4, 5);
}
```

---

### Return Type
- Used when we want to return a value from a function, instead of just printing inside it
```cpp
int add(int x, int y) {
    return x + y;
}

int main() {
    int ans = add(30, 40);
    if (ans > 40) {
        // true
    }
}
```
- We use a return type because the returned value (`ans`) can be reused further in the program — this isn't possible with `cout` alone inside the function

**Return types:**
- `int add()` — returns an integer value
- `void` — no return value

**[Function](function.cpp)**

---

### Vectors
- A **dynamic array** provided by C++
- Header needed: `#include <vector>`
```cpp
vector<int> v;

v.push_back(10);      // adds element at the end
v.push_back(20);
v.pop_back();          // removes the last element

// Declaring with size
int n;
cin >> n;
vector<int> nums(n);

// Taking input into a vector
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
}
```

---

### Problem: Largest Element in Vector
```cpp
int largest(vector<int>& nums) {
    int largest = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (largest < nums[i]) {
            largest = nums[i];
        }
    }
    return largest;
}

int main() {
    vector<int> nums = {3, 4, 5, 6};   // create
    int n;
    cin >> n;                           // or if user enters values
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int ans = largest(nums);
    cout << ans;
}

```
**[largest](largest.cpp)**

### Problem: Second Largest Element
- Approach: keep two variables — `largest` and `secondLargest`
```cpp
int largest = a[0];
int secondLargest = INT_MIN;

for (int i = 0; i < n; i++) {
    if (a[i] > largest) {
        secondLargest = largest;
        largest = a[i];
    }
    else if (a[i] < largest && a[i] > secondLargest) {
        secondLargest = a[i];
    }
}

// If no second largest exists, return -1
if (secondLargest == INT_MIN) {
    return -1;
}

```
**[second largest](slargest.cpp)**

**Optimal solution approach:**
```cpp
largest = a[0];
secondLargest = INT_MIN;

for (int i = 0; i < n; i++) {
    if (a[i] > largest) {
        secondLargest = largest;
        largest = a[i];
    }
    else if (a[i] < largest && a[i] > secondLargest) {
        secondLargest = a[i];
    }
}
[optimal slargest](slargest1.cpp)
```

### Problem: Check if Array is Sorted
- Approach: each element before the current one should be less than or equal to it (linear scan)
  
**[check sorted](checksorted.cpp)**

### Probelm: linear search 
**[linear search](linearsearch.cpp)**

---

### Problems covered today (patterns practiced):
- Largest element
- Second largest element
- Smallest element
- Check if array is sorted
- Linear search



---
**Takeaway:** Covered functions today — parameters, arguments, return types, and why return values matter over just printing. Also introduced vectors (dynamic arrays) and solved core array problems like largest/second largest element and checking if an array is sorted — laying the groundwork for more DSA patterns ahead.
