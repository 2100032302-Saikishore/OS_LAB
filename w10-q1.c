#include<stdio.h>

int size = 8;

void FCFS(int arr[], int head)
{
    int seek_count = 0;
    int distance, cur_track;
    int i;
    for (i = 0; i < size; i++) {
        cur_track = arr[i];
        distance = abs(cur_track - head);
        seek_count += distance;
        head = cur_track;
    }

    printf("Total number of seek operations = %d",seek_count);

   printf("Seek Sequence is : ");

    for (i = 0; i < size; i++) {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[100] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;

    FCFS(arr, head);

    return 0;
}

