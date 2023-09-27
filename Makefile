ALL = main

all: $(ALL)

main: main.o soma2.o subtrai2.o multiplica2.o 
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean:
	rm -f *.o $(ALL)
	
distclean: clean

