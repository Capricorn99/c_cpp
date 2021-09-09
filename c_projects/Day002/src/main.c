#include <stdio.h>
#include <string.h>

typedef struct {
	int data1;
	int data2;
} data_t;

char* text = "abc";
char text2[] = "xyz";
char text3[5] = "12345";

float tong_s(int n, int x) {
	float a = 0, b = 0, c = x;
	for (int i = 1; i <= n; i++) {
		a += i;
		b += c/a;
		c *= x;
	}
	return b;
}

typedef enum {
    MEO,
    PHIMEO
} sex_t;

typedef struct {
    char name[50];
	int age;
	int year;
    sex_t sex;
} sv_t;


int main()
{
	sv_t sinh_vien[3];
	sinh_vien[0].age = 1;
	strcpy(sinh_vien[0].name, "Nguyen Van A");
	sinh_vien[0].sex = PHIMEO;
	sinh_vien[0].year = 2020;

	sinh_vien[1].age = 2;
	strcpy(sinh_vien[1].name, "Nguyen Van B");
	sinh_vien[1].sex = PHIMEO;
	sinh_vien[1].year = 2000;

	sinh_vien[2].age = 5;
	strcpy(sinh_vien[2].name, "Pham Phuong Thanh");
	sinh_vien[2].sex = MEO;
	sinh_vien[2].year = 2023;


	// printf("%f\n", tong_s(3,2));

	// printf("%s\n", text3);


	for(int i = 0; i <= 2; i++) {
		printf("sinh vien : %d, %s, %s, %d\n", sinh_vien[i].age, sinh_vien[i].name, (sinh_vien[i].sex) ? "PHIMEO": "MEO", sinh_vien[i].year);
	}
	// printf("%d, %d, %d \n", sizeof(sv_t), sizeof(int), sizeof(sex_t));
	return (0);
}