subrut1: subrut1.o
	gcc -o subrut1 subrut1.c subrut1.o

subrut1.o: subrut1.s
	as -g -o subrut1.o subrut1.s

subrut2: subrut2.o
	gcc -o subrut2 subrut2.o

subrut2.o: subrut2.s
	as -g -o subrut2.o subrut2.s

subrut3: subrut3.o
	gcc -o subrut3 subrut3.o

subrut3.o: subrut3.s
	as -g -o subrut3.o subrut3.s

subrut4: subrut4.o
	gcc -o subrut4 subrut4.o

subrut4.o: subrut4.s
	as -g -o subrut4.o subrut4.s

subrut5: subrut5.o
	gcc -o subrut5 subrut5.o

subrut5.o: subrut5.s
	as -g -o subrut5.o subrut5.s

minvector:  minvector.o
	gcc minvector.c -o minvector

clean:
	rm subrut1 subrut1.o subrut2 subrut2.o subrut3 subrut3.o subrut4 subrut4.o subrut5 subrut5.o minvector minvector.o
