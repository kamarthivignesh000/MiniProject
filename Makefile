PROJ_NAME = main1
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/main1.c

TEST_SRC = test/test_main1.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${BUILD_DIR}
	gcc $(SRC) $(INC) -fprofile-arcs -ftest-coverage -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C doc clean
