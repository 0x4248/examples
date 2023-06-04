# Examples
# This is a repository of examples for different languages.
# Github: https://www.github.com/awesomelewis2007/examples
# License: GNU General Public License v3.0
# By: Lewis Evans

CC=gcc
CXX=g++
CFLAGS=-Wall
CXXFLAGS=-Wall

SRCS_C=$(wildcard c/*.c)
BINS_C=$(patsubst c/%.c,bin/c/%,$(SRCS_C))

SRCS_CPP=$(wildcard cpp/*.cpp)
BINS_CPP=$(patsubst cpp/%.cpp,bin/cpp/%,$(SRCS_CPP))

all: $(BINS_C) $(BINS_CPP)

bin/c/%: c/%.c | bin/c
	@echo "CC $<"
	@$(CC) $(CFLAGS) $< -o $@

bin/cpp/%: cpp/%.cpp | bin/cpp
	@echo "CXX $<"
	@$(CXX) $(CXXFLAGS) $< -o $@

bin/c bin/cpp:
	@mkdir -p $@

clean:
	@rm -rf bin

.QUIET: all

.PHONY: all clean
