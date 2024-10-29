CC=gcc
CCFLAGS = -O3
LDFLAGS = -lm
mmc : main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<
main.o: main.c
	$(CC) -c $(CCFLAGS) $<
clean:
	rm *.o