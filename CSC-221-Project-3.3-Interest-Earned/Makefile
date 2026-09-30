CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -g
BUILD_DIR := build
TARGET := $(BUILD_DIR)/Main
SOURCE := Main.cpp

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(SOURCE) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)