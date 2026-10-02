# Fix My Code Challenge

Each file below was handed over with a defect. The task is to repair the
behavior without rewriting the program from scratch.

| File | Language | Task |
| --- | --- | --- |
| `0-fizzbuzz.py` | Python 3 | Print 1..n, `Fizz` on multiples of 3, `Buzz` on multiples of 5, `FizzBuzz` on both |
| `1-print_square.js` | Node.js | Print a square of `#` of the given size |
| `2-sort.rb` | Ruby | Sort the integer arguments in ascending order |
| `3-user.py` | Python 3 | `User` model with a unique id and an MD5-hashed password |
| `4-delete_dnodeint/` | C | Delete the node at a given index of a doubly linked list |

The first four are run directly (`./0-fizzbuzz.py 89`), so each one needs
its executable bit set and LF line endings.

## Usage

```
./0-fizzbuzz.py 89
./1-print_square.js 8
./2-sort.rb 4 1 -3 12
./3-user.py
```

The C task is compiled with the flags the project requires:

```
cd 4-delete_dnodeint
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c free_dlistint.c print_dlistint.c add_dnodeint_end.c delete_dnodeint_at_index.c -o delete_dnodeint
./delete_dnodeint
```
