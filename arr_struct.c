#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

struct point_A {
    int x;
    int y;
};

struct point_B {
    int x;
    int y;
};

struct point_C {
    int x;
    int y;
};

struct triangle {
    struct point_A pA;
    struct point_B pB;
    struct point_C pC;
};

struct point {
    int x;
    int y;
};

int main() {

    struct point p[3] = {
        {1, 2},
        {10, 20},
        {100, 200}
    };

    struct triangle t[3] = {
        {{3, 4}, {30, 40}, {300, 400}},
        {{5, 6}, {50, 60}, {500, 600}},
        {{7, 8}, {70, 80}, {700, 800}}
    };

    printf("p[0].x: %d\n", p[0].x);
    printf("p[0].y: %d\n\n", p[0].y);

    printf("p[1].x: %d\n", p[1].x);
    printf("p[1].y: %d\n\n", p[1].y);

    printf("p[2].x: %d\n", p[2].x);
    printf("p[2].y: %d\n", p[2].y);

    printf("\n\n");

    printf("t[0].pA.x: %d\n", t[0].pA.x);
    printf("t[0].pA.y: %d\n", t[0].pA.y);
    printf("t[0].pB.x: %d\n", t[0].pB.x);
    printf("t[0].pB.y: %d\n", t[0].pB.y);
    printf("t[0].pC.x: %d\n", t[0].pC.x);
    printf("t[0].pC.y: %d\n\n", t[0].pC.y);

    printf("t[1].pA.x: %d\n", t[1].pA.x);
    printf("t[1].pA.y: %d\n", t[1].pA.y);
    printf("t[1].pB.x: %d\n", t[1].pB.x);
    printf("t[1].pB.y: %d\n", t[1].pB.y);
    printf("t[1].pC.x: %d\n", t[1].pC.x);
    printf("t[1].pC.y: %d\n\n", t[1].pC.y);

    printf("t[2].pA.x: %d\n", t[2].pA.x);
    printf("t[2].pA.y: %d\n", t[2].pA.y);
    printf("t[2].pB.x: %d\n", t[2].pB.x);
    printf("t[2].pB.y: %d\n", t[2].pB.y);
    printf("t[2].pC.x: %d\n", t[2].pC.x);
    printf("t[2].pC.y: %d\n\n", t[2].pC.y);

    return 0;
}
