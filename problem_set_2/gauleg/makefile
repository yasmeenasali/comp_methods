.c.o:
	gcc -pg -Wall -c $<

# for profiling, don't forget -pg option also when link!!
integ : gauleg.o integ.o
	gcc -pg -o integ integ.o gauleg.o -lm
