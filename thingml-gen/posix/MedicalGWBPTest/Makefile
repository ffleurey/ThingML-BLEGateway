# CC = /*CC*/
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = Main.c ExitHandler.c HCISocketProxyImpl.c BLEInitialiserImpl.c BLEConnecterImpl.c BLEScannerImpl.c MedicalGWBPTest_cfg.c MQTT.c runtime.c
OBJS = Main.o ExitHandler.o HCISocketProxyImpl.o BLEInitialiserImpl.o BLEConnecterImpl.o BLEScannerImpl.o MedicalGWBPTest_cfg.o MQTT.o runtime.o

all : MedicalGWBPTest

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGWBPTest : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGWBPTest
