#include <fuse.h>


#include <fuse.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>


static const char *hello_str = "Hello World!\n";

static const char *hello_path = "/hello";

static int ReadDir(const char *, void *, fuse_fill_dir_t, off_t,
		   struct fuse_file_info *) {

  return 0;
}




int main(int argc, char *argv[]) {
  struct fuse_operations fuse_ops = {
    .readdir       = ReadDir
  };
  return fuse_main(argc, argv, &fuse_ops, nullptr);
}
