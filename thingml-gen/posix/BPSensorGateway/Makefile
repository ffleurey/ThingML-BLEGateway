# CC = /*CC*/
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = BLEScannerImpl.c BLEConnecterImpl.c ExitHandler.c Main.c HCISocketProxyImpl.c BLEInitialiserImpl.c BPSensorGateway_cfg.c MQTT.c runtime.c
OBJS = BLEScannerImpl.o BLEConnecterImpl.o ExitHandler.o Main.o HCISocketProxyImpl.o BLEInitialiserImpl.o BPSensorGateway_cfg.o MQTT.o runtime.o

all : BPSensorGateway

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

BPSensorGateway : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ BPSensorGateway
