# Makefile for File Organizer Project
# Author: Tisha Sharma, LPU
# Project: File Organizer using DSA & STL

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
SRCDIR = src
OBJDIR = build
TARGET = file_organizer

# Source files
SOURCES = $(SRCDIR)/main.cpp
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cpp=.o)))

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
	@echo "✓ Build successful! Run with: ./$(TARGET)"

# Compile objects
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I include -c $< -o $@

# Run program
run: $(TARGET)
	./$(TARGET)

# Clean build
clean:
	rm -rf $(OBJDIR) $(TARGET)
	@echo "✓ Clean complete!"

# Rebuild
rebuild: clean all

# Help
help:
	@echo "Available targets:"
	@echo "  make        - Compile the program"
	@echo "  make run    - Compile and run"
	@echo "  make clean  - Remove build files"
	@echo "  make rebuild - Clean and compile"
	@echo "  make help   - Show this message"

# Phony targets
.PHONY: all run clean rebuild help
