#include <stdio.h>
#include <string.h>
// trong class co 
// hai tp chinh : oject (varible) & method (function)
// moi tp co hai loai: private & public


class class_room
{
	private:
		char name[20];
	public:
		class_room();
		~class_room();
		void set_class_name(char *classname);
		char* get_class_name();
};

class_room::class_room()
{

}

class_room::~class_room()
{

}

char* class_room::get_class_name() {
	return name;
}

void class_room::set_class_name(char *classname) {
	strcpy(name, classname);
}

// int main(int argc, char *argv[]) {
// 	class_room a;
// 	a.set_class_name("123");
// 	printf("%s\n",a.get_class_name());
// 	return 0;
// }