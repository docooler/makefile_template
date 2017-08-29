help:
	@echo $(OBJ)
all: $(OBJ)
	@$(LD) -o $(BIN_DIR)/tmf $(OBJ)

run: all
	@$(BIN_DIR)/tmf

clean:
	echo "$(RM)"
	$(RM) $(OBJ) $(BIN_DIR)/tmf
