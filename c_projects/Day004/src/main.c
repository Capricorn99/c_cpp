#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// a[0] la gia tri phan tu dau tien
// a[1] = *(a+1)
// *a = a[0]
// a la dia chi cua mang, la2 dia chi phan tu dau tien 

// char **argv : pointer cua pointer - 1 mang chua cac pointer - argv[0] la pointer 
int main(int argc, char **argv) {
	bool ver = false;
	bool a = false;
	bool b = false;
	//agrv[0] luon la ten chtrinh

	for (int i = 1; i < argc; i++) {
		if ((!strcmp( argv[i], "-v" ) || !strcmp( argv[i], "--version")))  {
			if (!ver) {
				printf("1.0.0\n");
				ver = true;
			}

		}
		else if (!strcmp( argv[i], "-a") ) {
			if (!a) {
				printf("a\n");
				a = true;
			}

		}
		else if (!strcmp( argv[i], "-b") ) {
			if (!b) {
				printf("b\n");
				b = true;
			}
		}
		else printf("unknown command %s\n", argv[i]);
	}

	// main -v
	// main --version
	// 1.0.0

	// for (int i = 0; i < argc; i++) {
	// 	switch (i)
	// 	{
	// 	case 0:
	// 		break;
	// 	case 1:
	// 		if (!strcmp( argv[i], "-v" ) || !strcmp( argv[i], "--version" )) printf("1.0.0\n");
	// 		break;
	// 	case 2:
	// 	case 3:
	// 		printf("3 \n");
	// 	default:
	// 		printf("def \n");
	// 		break;
	// 	}
	// }
	return (0);
}