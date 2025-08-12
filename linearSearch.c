//Linear search using static memory allocation(array)

#include<stdio.h>
int linearSearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(arr[i]==key)
               return i; // Return the index of the found element
        }
        return -1; // Return -1 if the element is not found
}
int main()
{
    int arr[100],n,key,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d",&key);
    
    int result = linearSearch(arr, n, key);
    
    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");
    
    return 0;
}
//end of SMA
/*Linear search using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index of the found element
    }
    return -1; // Return -1 if the element is not found
}
int main() {
    int n, key;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Dynamic memory allocation for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = linearSearch(arr, n, key);
    
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");
    
    // Free the allocated memory
    free(arr);
    
    return 0;
}*/
