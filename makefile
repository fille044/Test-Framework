C_COMPILER=gcc

hellomake:
	$(C_COMPILER) TestDumbExample.c DumbExample.c unity/src/unity.c -o TestDumbExample
