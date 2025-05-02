    #include <stdio.h>

    int large(int[], int, int);
    int smallest(int[], int, int);
    int main()
    {
        int size;
        int largest,small;
        int list[20];
        int i;
        printf("Enter size of the list:");
        scanf("%d", &size);

        for (i = 0; i < size ; i++)
        {
            scanf("%d",&list[i]);
        }
        printf("Printing the list:\n");
        for (i = 0; i < size ; i++)
        {
            printf("%d \t", list[i]);
        }
        if (size == 0)
        {
            printf("Empty list\n");
        }
        else
        {
            largest = list[0];
            small = list [0];
            largest = large(list, size - 1, largest);
            printf("\nThe largest number in the list is: %d\n", largest);
            small = smallest(list, size - 1, small);
            printf("\nThe smallest number in The list is: %d\n", small);
        }
    }



    int large(int list[], int position, int largest)
    {
    if (position == 0)
    return largest;
    if (position > 0)
    {
        if (list[position] > largest)
        {
            largest = list[position];
        }
        return large(list, position - 1, largest);
    }

    }




    int smallest(int list[], int position, int small)
    {
    if(position < 1)
        return small;
    else
    {
        if(list[position] < small)
        {
            small = list[position];
        }

        return smallest(list, position - 1, small);
    }
}
