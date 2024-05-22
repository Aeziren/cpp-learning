#include "io.h"

int main() {
	// Get input
	int n1{ read_number() };
	int n2{ read_number() };

	// Show answer
	write_answer(n1 + n2);

	return 0;
}
