CC = cc
LIBS = -lpthread -l bluetooth
CFLAGS = -O2 -w
SRCS = BLEConnecterImpl.c HCISocketProxyImpl.c BLEEncryptionImpl.c BLEInitialiserImpl.c ExitHandler.c Main.c BLE_PAIR_cfg.c runtime.c
OBJS = BLEConnecterImpl.o HCISocketProxyImpl.o BLEEncryptionImpl.o BLEInitialiserImpl.o ExitHandler.o Main.o BLE_PAIR_cfg.o runtime.o

all : BLE_PAIR

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

BLE_PAIR : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ BLE_PAIR
