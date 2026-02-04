#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool isSwap = false;//set swap value false to check already swap or not

        for(int j = 0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                isSwap = true;//if swap happened the value become true and loop continue
        }

        if(isSwap == false)//if all swap done then isSwap remain false and loop break
            break;
    }
}
void printSort(int arr[],int n)
{
    for(int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";

    }


}

int main()
{
    int arr[] = {1,2,78,23,3,8,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    printSort(arr,n);
    return 0;
}


/*
**Bubble Sort with optimization — step-by-step execution**

Array
`arr = {1, 2, 78, 23, 3, 8, 4, 0}`, `n = 8`

---

## What each part does

* **Outer loop (`i`)**: counts passes. After each pass, the largest element of the unsorted part is placed at the end.
* **Inner loop (`j`)**: compares adjacent elements and swaps if they are out of order.
* **`n - i - 1`**: avoids re-checking elements already fixed at the end.
* **`isSwap`**: optimization flag. If no swap happens in a full pass, the array is already sorted → break early.

> Note: Logically, `isSwap = true` should be inside the `if` block (with braces). The explanation below assumes that intended logic.

---

## Detailed execution

### Pass 1 — `i = 0`

`isSwap = false`
`j` runs from `0` to `6`

| j | Compare  | Action | Array after       |
| - | -------- | ------ | ----------------- |
| 0 | 1 vs 2   | no     | 1 2 78 23 3 8 4 0 |
| 1 | 2 vs 78  | no     | same              |
| 2 | 78 vs 23 | swap   | 1 2 23 78 3 8 4 0 |
| 3 | 78 vs 3  | swap   | 1 2 23 3 78 8 4 0 |
| 4 | 78 vs 8  | swap   | 1 2 23 3 8 78 4 0 |
| 5 | 78 vs 4  | swap   | 1 2 23 3 8 4 78 0 |
| 6 | 78 vs 0  | swap   | 1 2 23 3 8 4 0 78 |

Largest element `78` fixed at the end.
`isSwap = true` → continue.

---

### Pass 2 — `i = 1`

`isSwap = false`
`j` runs `0..5`

Result after swaps:
`1 2 3 23 8 4 0 78`
Then
`1 2 3 8 23 4 0 78`
Then
`1 2 3 8 4 23 0 78`
Then
`1 2 3 8 4 0 23 78`

`23` fixed at index `6`.

---

### Pass 3 — `i = 2`

`j = 0..4`

After swaps:
`1 2 3 4 8 0 23 78`
Then
`1 2 3 4 0 8 23 78`

`8` fixed.

---

### Pass 4 — `i = 3`

`j = 0..3`

After swaps:
`1 2 3 0 4 8 23 78`

`4` fixed.

---

### Pass 5 — `i = 4`

`j = 0..2`

After swaps:
`1 2 0 3 4 8 23 78`

`3` fixed.

---

### Pass 6 — `i = 5`

`j = 0..1`

After swap:
`1 0 2 3 4 8 23 78`

`2` fixed.

---

### Pass 7 — `i = 6`

`j = 0`

After swap:
`0 1 2 3 4 8 23 78`

---

### Pass 8 — `i = 7`

No swaps occur → `isSwap == false` → **loop breaks early**

---

## Final result

Sorted array:
`{0, 1, 2, 3, 4, 8, 23, 78}`

---

## Key points about `i` and `j`

* `i` controls how many largest elements are already fixed.
* `j` compares adjacent elements and “bubbles” the largest one to the end.
* Best case (already sorted): **O(n)** due to early break.
* Average/Worst case: **O(n²)**.
* Space complexity: **O(1)** (in-place).

*/
