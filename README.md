for i in {1..10}; do gcc pw01-$i.c -o pw01-$i; done
for i in {1..10}; do echo "=== pw01-$i ==="; ./pw01-$i; done
