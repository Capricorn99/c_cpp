#include <stdio.h>
#include <string.h>

typedef enum {
    GIOI,
    KHA,
	TRUNGB,
	YEU
} hocluc_t;

typedef struct {
    char name[50];
	hocluc_t hocluc;
} sv_t;

float diem_min (float d1, float d2, float d3) {
	float a =d1;
	if (a > d2) {
		a = d2;
	}
	if (a > d3) {
		a = d3;
	}
	return a;
}

hocluc_t xeploai (float d1, float d2, float d3) {
	float trungb = (d1+d2+d3)/3;
	float min = diem_min(d1, d2, d3);
	if (trungb >= 8) {
		if (min < 6.5 && min >= 5) return  KHA;
		if (min < 5) return TRUNGB;
		return GIOI; 
	}
	if (trungb >= 6.5) {
		if (min < 5 ) return  TRUNGB;
		return KHA;
	}
	if (trungb >=5) return TRUNGB;
	return YEU;
}




int main()
{
	sv_t sinh_vien;
	char a[50];
	float  b, c, d;
	
	printf("name: \n");
	scanf("%s", a);
	printf("diem toan \n");
	scanf("%f", &b);
	printf("diem van \n");
	scanf("%f", &c);
	printf("diem anh \n");
	scanf("%f", &d);
	strcpy(sinh_vien.name, a);
	sinh_vien.hocluc = xeploai (b, c, d);
	printf(
		"%s , %d \n",
		sinh_vien.name,
		sinh_vien.hocluc
	);

	
	return 0;
}