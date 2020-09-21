#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;
    printf("How many dollars do you want to convert?\n");
    scanf("%d", &money);
    printf("That's %d Egyptian pounds\n", money * 15);
    main();
    return 0;
}
