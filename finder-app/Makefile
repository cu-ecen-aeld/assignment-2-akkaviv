#CROSS_COMPILE="aarch64-none-linux-gnu"
CROSS_COMPILE=""
#CC=$(CROSS_COMPILE)-gcc
all: writer
writer: writer.c
	${CC} writer.c -o writer
clean:
	rm -rf writer
	rm -rf *.o
