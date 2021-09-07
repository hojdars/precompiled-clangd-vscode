#include <array>
#include <iostream>	 // remove me since I am also in "hello.hpp" to get even more clang errors

class A {
   public:
	int GetInt() { return _int; }

   private:
	int _int = 15;
};

int main(int, char**) {
	std::array<int, 3> arr = {1, 2, 3};
	for (int i = 0; i < arr.size(); ++i) {
		std::cout << arr[i] << " ";
	}

	say("\nHello, world!\n");
}
