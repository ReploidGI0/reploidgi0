teclado: teclado.o
	ld -o teclado teclado.o

teclado.o: teclado.s
	as -g -o teclado.o teclado.s

menreplica: menreplica.o
	ld -o menreplica menreplica.o

menreplica.o: menreplica.s
	as -g -o menreplica.o menreplica.s

stack: stack.o
	ld -o stack stack.o

stack.o: stack.s
	as -g -o stack.o stack.s

hanoi1: hanoi1.o
	gcc -o hanoi1 hanoi1.o

hanoi1.o: hanoi1.s
	as -g -o hanoi1.o hanoi1.s

hanoi2: hanoi2.o
	gcc -o hanoi2 hanoi2.o

hanoi2.o: hanoi2.s
	as -g -o hanoi2.o hanoi2.s

pausas: pausas.o
	gcc -o pausas pausas.o

pausas.o: pausas.s
	as -g -o pausas.o pausas.s

primos: primos.o
	ld -o primos primos.o

primos.o: primos.s
	as -g -o primos.o primos.s

clean:
	rm teclado teclado.o menreplica menreplica.o stack stack.o hanoi1 hanoi1.o hanoi2 hanoi2.o pausas pausas.o primos primos.o
