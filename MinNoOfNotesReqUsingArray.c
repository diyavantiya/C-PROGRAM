// Print minimum no. of notes required
#include <stdio.h>

int main() {
 int a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
 int left, n, count=0;
 int countNotes[]={0, 0, 0, 0, 0, 0, 0, 0, 0};
printf("Enter the amount:");
scanf("%d", &n);
left=n;
for(int i=0; i<9; i++){
    while(left>=a[i])
    {
        left=left-a[i];
        count++;
        countNotes[i]++;
    }
    }

    printf("Minimum number of notes required = %d\n", count);
    for(int i=0; i<9;i++) {
        if(countNotes[i]>0)
    printf("%d notes of %d\n", countNotes[i], a[i]);
    }
    return 0;
}
