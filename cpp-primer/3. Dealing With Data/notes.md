# 3. Dealing With Data

## Primitives

### `climits` Library

datatype limits. max/min for (un)signed char, short, int, long, & long long.

- short >= 16 bits
- short <= int
- long >= int & long >= 32 bits
- long long >= long & long long >= 64 bits

Symbolic constants:

a: b, c, d --> A_B, A_C, A_D
- char: bit, min, max
- - schar: min, max
- - uchar: max
- shrt: min, max
- - ushrt: max
- int: min, max
- - uint: max
- long: min, max
- - ulong: max
- llong: min, max
- - ullong: max

`sizeof` function returns size of variable/datatype in bytes --> multiply by 8 to get number of bits

### Integer Literals:
- `int hex_num = 0x23;` stores hex_num as 35
- `int oct_num = 022;` stores oct_num as 18

inserting `hex` or `oct` to cout results in cout displaying integers in `hex`/`oct` base

for floats, `(+/-)3.52e6` is valid. Can also put f at the end like `4f` to get float --> (only for constant literals).
decimal constants without 'f' are by default doubles

- float >= 32 bits
- double >= 48 bits (prob 64 tho)
- long double >= double

float has 7 decimals precision, whereas double has 15.