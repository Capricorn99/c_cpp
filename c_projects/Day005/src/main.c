#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// -m --mode -mode -> add sub mul div
// -x -y
// eg. -m add -x 1 -y 2 => 3.000
// eg. -mode div -x 1 -y 3 => 0.333
// eg. -mode div -d 5 -x 1 -y 3 => 0.33333
// default -d 3
typedef enum {
	ERROR,
	OK
} err_t;

err_t str_2_int(char *str, int *val) {
	int a = 0;

	for (int i = 0; i < strlen(str); i++) {
		if ( str[i] >= '0' && str[i] <= '9' ) {
			a = a * 10 + (str[i] -48);	
		}
		else return ERROR;
	}
	*val = a;
	return OK;
}

int main(int argc, char **argv) {

	bool mode = false;
	bool d = false;
	bool a = false;
	bool b = false;

	int cal = 0;
	int point = 3;
	int x = 0;
	int y = 0;
	float ans = 0;

	for (int i = 1; i < argc; i+=2) {
		if (!strcmp( argv[i], "-m" ) || !strcmp( argv[i], "--mode") || !strcmp( argv[i], "-mode"))  {
		//cal
			if (!mode) {
				if (!strcmp( argv[i+1], "add" )) {
					cal = 0;
				}
				else if (!strcmp( argv[i+1], "sub" )) {
					cal = 1;
				}
				else if (!strcmp( argv[i+1], "mul" )) {
					cal = 2;
				}
				else if (!strcmp( argv[i+1], "div" )) {
					cal =3;
				}
				else goto error;
			}
		}
		//point
		else if (!strcmp( argv[i], "-d") ) {
			if (!d) {
				if (str_2_int(argv[i+1], &point) == ERROR) goto error;
				d = true;
			}
		}
		//x
		else if (!strcmp( argv[i], "-x") ) {
			if (!a) {
				if (str_2_int(argv[i+1], &x) == ERROR) goto error;
				a = true;	
			}
		}
		//y
		else if (!strcmp( argv[i], "-y") ) {
			if (!b) {
				if (str_2_int(argv[i+1], &y) == ERROR) goto error;
				b = true;	
			}
		}
		else goto error;
	}
	//ans
	switch (cal)
	{
	case 0:
		ans = (float)x + y;
		break;
	case 1:
		ans = (float)x - y;
		break;
	case 2:
		ans = (float)x * y;
		break;
	case 3:
		ans = (float)x / y;
		break;
	}

	printf("Dap so : %.*f\n", ans, point);
	goto end;
error: 
	printf("error\n");
end:
	return (0);
}


// char a : 1 ky tu
// char *a: 1 mang ky tu

// int main(int argc, char **argv) {

// int a = 5;
// test:
// 	for (int i = 0; i < 1000; i++) {
// 		if(i > 900) goto print_err;
// 		printf("%*f\n", i, a);
// 	}
	
// 	goto test;

// print_err:
// 	printf("error\n");
// 	return 0;
// }