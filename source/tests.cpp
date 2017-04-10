#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd( int a, int b)
{
	int c;
	if (b > a) {
		c = a;
		a = b;
		b = c; 
	}
	if (a%b == 0) {return b;}
	else {
		c = a%b;
		gcd(b,c);
	}
}

TEST_CASE ("describe_gcd", "[gcd]")
{
REQUIRE (gcd (2 ,4) == 2);
REQUIRE (gcd (9 ,6) == 3);
REQUIRE (gcd (3 ,7) == 1);
REQUIRE (gcd (11 ,1) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
