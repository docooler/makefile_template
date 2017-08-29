INCLUDE = -I$(PROJ_DIR)/inc
TOTAL_FILE = main.cc \
             common.cc

OBJ = $(TOTAL_FILE:%.cc=$(OBJ_DIR)/%.o) 

swobj:$(OBJ)
	@echo "make obj"

$(OBJ_DIR)/%.o: $(PROJ_DIR)/sw/%.cc
	@mkdir -p $(@D)
	@$(CXX) -c $(INCLUDE) -o $@ $<
