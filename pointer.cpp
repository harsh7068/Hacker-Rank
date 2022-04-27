#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function 
     int pa = *a + *b;
     int pb = (*a) - (*b);
     *a = pa;
    *b = abs(pb);
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
