#include <stdio.h>
#include <conio.h>

int main()
{
    int score,project;
    printf("Enter score:");
    scanf("%d",&score);
    printf("\nDone project?\n1.Yes\n2.No\n");
    scanf("%d",&project);
    while (project > 2)
    {
        printf("\nEnter 1.Yes 2.No :");
        scanf("%d",&project);       
    }
    
    if (score > 70 && project == 1 )
    {
        printf("\nPass-P");
    }
    else if (score > 70 && project == 2)
    {
        printf("\nIncomplete-I");
    }
    else
    {
        printf("\nFail-F");
    }
    getch();
    return 0;
}