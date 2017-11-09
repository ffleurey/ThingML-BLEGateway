# CC = /*CC*/
LIBS = -lpthread -l bluetooth
CFLAGS = -O2 -w
SRCS = HCISocketProxyImpl.c BLEConnecterImpl.c Main.c ExitHandler.c BLEEncryptionImpl.c BLEInitialiserImpl.c BLE_PAIR_cfg.c runtime.c
OBJS = HCISocketProxyImpl.o BLEConnecterImpl.o Main.o ExitHandler.o BLEEncryptionImpl.o BLEInitialiserImpl.o BLE_PAIR_cfg.o runtime.o

all : BLE_PAIR

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

BLE_PAIR : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ BLE_PAIR
