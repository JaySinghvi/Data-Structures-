#include <stdio.h>
struct campus
{
    char name[20];
    int id;
};
int main()
{
    struct campus c1;
    struct campus c2;
    strcpy(c1.name, "Manipal");//we use strcpy to copy manipal into the string of name
    printf("Enter the id: ");
    scanf("%s", &c2.name);
    scanf("%d", &c2.id);
    printf("Id = %d\t Name = %s", c2.name,c1.name);
}

