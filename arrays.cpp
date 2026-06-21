# Arrays

## Definition

Array is a collection of elements of the same data type stored under one name.

## Syntax

```cpp
int arr[5];
```

## Example

```cpp
int arr[5] = {10,20,30,40,50};
```

## Indexing

```cpp
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
```

## Basic Traversal

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i];
}
```

## Important Questions Practiced

1. Print Array
2. Sum of Array
3. Largest Element
4. Count Even Numbers
5. Check Sorted Array

## Key Patterns

Sum:

```cpp
sum += arr[i];
```

Largest:

```cpp
if(arr[i] > largest)
{
    largest = arr[i];
}
```

Even Count:

```cpp
if(arr[i] % 2 == 0)
{
    count++;
}
```

Sorted Check:

```cpp
if(arr[i] > arr[i+1])
{
    sorted = false;
}
```
