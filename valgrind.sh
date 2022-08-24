rm example || true
make example

valgrind --leak-check=full ./example

./example
