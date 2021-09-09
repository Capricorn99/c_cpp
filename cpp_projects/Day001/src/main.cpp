#include <stdio.h>
#include <meo.h>

// co the sd tat ca lib cua C
// char *argv[] = char **agrv

// nhac den ham dang extern
int main(int argc, char *argv[]) {
	// //thay cho printf
	// std::cout << "Hello world!" << 1 << std::endl;
	
	// // thay cho scanf
	// int a;
	// std::cin >> a;


	meo1 meomeo("Tho", 50, 5);
	printf("yesterday\n");
	meomeo.meo_info();
	//tang kg
	// meomeo.public_var = 10;
	// printf("%d\n", meomeo.public_var);
	printf("today\n");
	meomeo.change_weight(55);
	meomeo.meo_info();
	return 0;
}