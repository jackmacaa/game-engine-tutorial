#include <core/asserts.h>
#include <core/logger.h>
// TODO: Test
#include <platform/platform.h>

int main(void) {
  KFATAL("FATAL MESSAGE: %f", 3.14f);
  KERROR("ERROR MESSAGE: %f", 3.14f);
  KWARN("WARNING MESSAGE: %f", 3.14f);
  KINFO("INFO MESSAGE: %f", 3.14f);
  KDEBUG("DEBUG MESSAGE: %f", 3.14f);
  KTRACE("TRACE MESSAGE: %f", 3.14f);

  platform_state state;

  if (platform_startup(&state, "Kohi Engine Testbed", 100, 100, 1280, 720)) {
    while (TRUE) {
      platform_pump_messages(&state);
    }
  }
  platform_shutdown(&state);

  return 0;
}