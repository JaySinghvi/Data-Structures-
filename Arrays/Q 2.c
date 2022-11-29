/*Define an enumerated datatype RETURN_STATUS { NOT_FOUND,FOUND}.
 Use this datatype in recursive binary search function.
 [ Hint: if the element fond, return FOUND and NOT_FOUND in case of element not found. Check these values in main to display the appropriate result.]*/
#include <stdio.h>

enum return_status{Not_found, Found };//0 is found and 1 is not found

int main()
{
    int n;
    enum return_status st;
    scanf("%d", &n);
    int a[n], e, l, h;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &e);
    l = 0;
    h = n - 1;
    st = BS(a, e, l, h);
    if(st == Not_found )
    {
        printf(" element not in the array");
    }
    else
    {
        printf("element found");
    }
}

int BS (int a[], int e, int l, int h)
{
    int m;
    if(l > h)
    {
        return Not_found ;
    }
    else
    {
        m = (l + h)/2;
    }
    if(e == a[m])
    {
        return m;
    }
    else
    {
        if(e < a[m])
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    BS(a, e, l, h);

}
