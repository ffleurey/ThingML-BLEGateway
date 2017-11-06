CC = cc
LIBS = -lpthread -l bluetooth
CFLAGS = -O2 -w
SRCS = HCISocketProxyImpl.c Scanner.c ExitHandler.c BLE_SCAN_cfg.c runtime.c
OBJS = HCISocketProxyImpl.o Scanner.o ExitHandler.o BLE_SCAN_cfg.o runtime.o

all : BLE_SCAN

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

BLE_SCAN : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ BLE_SCAN
