CC:=g++
CFLAGS:=-g -Wall -Werror -Wextra -Wsign-conversion -pedantic -O2 --std=c++20
BIN_NAME:=engine
SRC_DIR:=src
INCLUDE_DIR:=include
BIN_DIR:=bin

default:
	mkdir -p $(BIN_DIR)
	$(CC) -I $(INCLUDE_DIR) $(CFLAGS) $(SRC_DIR)/* -o $(BIN_DIR)/$(BIN_NAME)

clean:
	rm -rf $(BIN_DIR)

.PHONY: clean
