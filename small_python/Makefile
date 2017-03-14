CC=g++
LINK=g++
INC_PREFIX=-I
LIB_PREFIX=-L
BUILD_PATH=build
CFLAGS=-c
TARGET=small_python

SRC_PATH=src
SRCS=$(wildcard $(SRC_PATH)/*.cpp)
OBJS=$(patsubst $(SRC_PATH)/%.cpp,$(BUILD_PATH)/%.o,$(SRCS))

INC_DIR=include
INCS=$(addprefix $(INC_PREFIX),$(INC_DIR))

vpath %.cpp $(SRC_PATH)
vpath %.o $(BUILD_PATH)
vpath %.cpp $(TEST_PATH)

all : init $(TARGET)

$(TARGET) : $(OBJS)
	@echo "generate excutable file : $@"
	$(LINK) -o $@ $(OBJS)

$(OBJS) : $(BUILD_PATH)/%.o : $(SRC_PATH)/%.cpp
	$(CC) $(CFLAGS) $(INCS) -o $@ $<

init:
	@echo "create $(BUILD_PATH) dir"
	mkdir -p $(BUILD_PATH)

clean:
	rm -rf $(BUILD_PATH)
	rm -f $(TARGET) 
