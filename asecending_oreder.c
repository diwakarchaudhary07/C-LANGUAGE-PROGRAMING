#include <stdio.h>
int main()
{
    int arr[50], n, i, j, temp;

    printf("number of element in array");
    scanf("%d", &n);

    printf("enter your element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n; i++){
        (j = 0;j<n;j++){
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("after sorting/n");
    for (i = 0; i < n; i++)
    {
        printf("/n%d", arr[i]);

    }
    return 0;
}