.c.o:
	gcc -c $<
integ : qromb.o polint.o trapzd.o test.o nrutil.o
	gcc -o integ test.o polint.o trapzd.o qromb.o nrutil.o -lm
clean:
	rm *.o ; rm integ
