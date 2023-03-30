// Success
#include<stdio.h>

int binary_search(int start, int end, int arr[], int target_element);

int main(){

    int size, target_element;
    printf("Give the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Give the array elements: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Please give the element to find: ");
    scanf("%d", &target_element);
    binary_search(0,(size-1), arr, target_element);
    return 0;
}

int binary_search(int start, int end, int arr[], int target_element){
    if (start>end)
    {
        printf("Element not found");
        return 0;
    }
    int middle_element=(start+((end-start)/2));
    if (arr[middle_element]==target_element)
    {
        printf("The element %d exists at index %d in the array (here indexes start from 1(one))",target_element, (middle_element+1));
        return 0;
    }
    if (arr[middle_element]>target_element)
    {
        end=(middle_element-1);
        binary_search(start,end,arr,target_element);
    }
    if (arr[middle_element]<target_element)
    {
        start=(middle_element+1);
        binary_search(start,end,arr,target_element);
    }
    return 0;
}