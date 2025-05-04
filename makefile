CXX = g++
CXXFLAGS = -Iinclude -Wall -Wextra
SRC_DIR = src
BIN_DIR = bin
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/vector.cpp
TARGET = $(BIN_DIR)/program
TEST_DIR = .
TEST_LIB = $(TEST_DIR)/libVectorTest.a

all: $(TARGET)

$(TARGET): $(SOURCES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BIN_DIR)

.PHONY: all run clean
