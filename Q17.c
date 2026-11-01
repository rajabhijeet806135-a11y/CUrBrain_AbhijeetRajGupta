#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int count;
    int used;
} Slot;

int mostPopularItem(const int *sales, int n) {
    int cap = 1;
    while (cap < n * 2) {
        cap <<= 1;
    }
    unsigned int mask = (unsigned int)cap - 1;
    Slot *table = (Slot *)calloc(cap, sizeof(Slot));


    

    int bestId = 0;
    int bestCount = 0;

    for (int i = 0; i < n; i++) {
        unsigned int h = ((unsigned int)sales[i] * 2654435761u) & mask;
        while (table[h].used && table[h].key != sales[i]) {
            h = (h + 1) & mask;
        }
        if (!table[h].used) {
            table[h].used = 1;
            table[h].key = sales[i];
        }
        table[h].count++;

        int c = table[h].count;
        int id = table[h].key;
        if (c > bestCount || (c == bestCount && id < bestId)) {
            bestCount = c;
            bestId = id;
        }
    }

    free(table);
    return bestId;
}

int main(void) {
    int t1[] = {101, 103, 101, 102, 103, 105, 101, 103};

    int t2[] = {5, 5, 5, 2, 2, 2, 2};
    int t3[] = {99};

    int t4[] = {-2, -2, 3, 3, 0};

    int t5[] = {4, 1, 4, 1, 7};

    printf("%d\n", mostPopularItem(t1, sizeof(t1) / sizeof(t1[0])));


    printf("%d\n", mostPopularItem(t2, sizeof(t2) / sizeof(t2[0])));


    printf("%d\n", mostPopularItem(t3, sizeof(t3) / sizeof(t3[0])));

    printf("%d\n", mostPopularItem(t4, sizeof(t4) / sizeof(t4[0])));
    printf("%d\n", mostPopularItem(t5, sizeof(t5) / sizeof(t5[0])));


    return 0;


}