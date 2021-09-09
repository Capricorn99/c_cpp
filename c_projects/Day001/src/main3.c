#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int age = 1;

typedef enum {
    MON,
    TUE,
    WED,
    THUS,
    FRI,
    SAT,
    SUN
} date_t;

typedef enum {
    MEO,
    THO
} meotho_t;

typedef struct {
    int age;
    meotho_t meo_tho;
} info_t;

typedef struct {
    uint8_t data1;
    uint8_t data2;
    uint16_t data3;
    uint8_t data4;
} test_data_t;

int main() {
    date_t date = MON;
    // info_t info1 = {
    //     .age = 5,
    //     .meo_tho = MEO
    // };

    // printf("%d %d\n", age, info1.age);
    printf("%d\n", sizeof(test_data_t));
    test_data_t test;
    printf("d1 %lld d2 %lld d3 %lld d4 %lld\n", &test.data1, &test.data2, &test.data3, &test.data4);
    return 0;
}