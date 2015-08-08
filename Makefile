CPP=clang
BUILD_DIR = $(CURDIR)/bin

hello: builddir
	$(CPP) -o $(BUILD_DIR)/main src/main.cc \
	-std=c++11 \
	-D_FILE_OFFSET_BITS=64 \
	-DFUSE_USE_VERSION=26 \
	-lfuse
	@echo "Output in build/"

builddir:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
