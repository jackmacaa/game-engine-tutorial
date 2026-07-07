#include <core/asserts.h>
#include <core/logger.h>

int main(void) {
  KFATAL("FATAL MESSAGE: %f", 3.14f);
  KERROR("ERROR MESSAGE: %f", 3.14f);
  KWARN("WARNING MESSAGE: %f", 3.14f);
  KINFO("INFO MESSAGE: %f", 3.14f);
  KDEBUG("DEBUG MESSAGE: %f", 3.14f);
  KTRACE("TRACE MESSAGE: %f", 3.14f);

  KASSERT(1 == 0);

  return 0;
}