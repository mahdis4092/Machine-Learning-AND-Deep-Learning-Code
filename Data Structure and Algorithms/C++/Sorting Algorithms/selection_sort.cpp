#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i = 0; i <n-1 ; i++)
    {
        int smallindex = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[smallindex])
            smallindex = j;

        }

        swap(arr[i],arr[smallindex]);

    }
}

void Printsort(int arr[], int n)
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={20,1,4,71,3,8,0,6,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    Printsort(arr,n);
    return 0;
}

/*
**Selection Sort — step-by-step execution (focus on `i` and `j`)**

Initial array
`arr = {4, 1, 5, 2, 3}`, `n = 5`

---

## What the loops do (high level)

* **Outer loop (`i`)**: selects the position where the next smallest element should go.
* **Inner loop (`j`)**: searches the smallest element in the *unsorted* part of the array (`i+1` to `n-1`).
* **`smallindex`**: stores the index of the smallest value found so far.
* After the inner loop finishes, the smallest element is swapped into position `i`.

---

## Detailed execution

### Pass 1 — `i = 0`

* Assume the smallest element is at index `0`
  `smallindex = 0` → value `4`

Inner loop (`j` runs from `1` to `4`):

| j | Compare               | Result        | smallindex |
| - | --------------------- | ------------- | ---------- |
| 1 | `arr[1]=1 < arr[0]=4` | true → update | 1          |
| 2 | `arr[2]=5 < arr[1]=1` | false         | 1          |
| 3 | `arr[3]=2 < arr[1]=1` | false         | 1          |
| 4 | `arr[4]=3 < arr[1]=1` | false         | 1          |

Swap `arr[0]` and `arr[1]`
Array → `{1, 4, 5, 2, 3}`

---

### Pass 2 — `i = 1`

* `smallindex = 1` → value `4`

Inner loop (`j = 2..4`):

| j | Compare | Result        | smallindex |
| - | ------- | ------------- | ---------- |
| 2 | `5 < 4` | false         | 1          |
| 3 | `2 < 4` | true → update | 3          |
| 4 | `3 < 2` | false         | 3          |

Swap `arr[1]` and `arr[3]`
Array → `{1, 2, 5, 4, 3}`

---

### Pass 3 — `i = 2`

* `smallindex = 2` → value `5`

Inner loop (`j = 3..4`):

| j | Compare | Result        | smallindex |
| - | ------- | ------------- | ---------- |
| 3 | `4 < 5` | true → update | 3          |
| 4 | `3 < 4` | true → update | 4          |

Swap `arr[2]` and `arr[4]`
Array → `{1, 2, 3, 4, 5}`

---

### Pass 4 — `i = 3`

* `smallindex = 3` → value `4`

Inner loop (`j = 4`):

| j | Compare | Result | smallindex |
| - | ------- | ------ | ---------- |
| 4 | `5 < 4` | false  | 3          |

Swap `arr[3]` with itself (no change)
Array → `{1, 2, 3, 4, 5}`

---

## Final result

Array is sorted in ascending order:
`{1, 2, 3, 4, 5}`

---

## Key points about `i` and `j`

* `i` moves left → right and marks the boundary between **sorted** and **unsorted** parts.
* `j` scans the unsorted part to find the minimum.
* Exactly **one swap per outer loop**.
* Time complexity: **O(n²)**, Space complexity: **O(1)** (in-place).

*/
