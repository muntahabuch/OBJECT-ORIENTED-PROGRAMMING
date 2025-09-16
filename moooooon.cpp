#include <stdio.h>

int main()
 {
    int array[10] = {23, 45, 12, 67, 34, 89, 2, 77, 56, 10};
    int i;
    int max = array[0];
    int min = array[0];
    int sum = 0;
    int searchValue, found = 0;

    printf("Array Elements:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Element %d: %d\n", i + 1, array[i]);
        if (array[i] > max)
		 {
            max = array[i];
        }
        if (array[i] < min)
		 {
            min = array[i];
        }
        sum += array[i];
    }

    printf("\nMaximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);
    printf("Sum of All Elements: %d\n", sum);

    printf("\nEnter a value to search: ");
    scanf("%d", &searchValue);

    for (i = 0; i < 10; i++)
	 {
        if (array[i] == searchValue)
		 {
            printf("Value %d found at position %d\n", searchValue, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in the array.\n", searchValue);
    }

    return 0;
}

