#include "application.h"

void initialize_application(void)
{

}

void do_application(void)
{
  while(1)
  {
    on_led();
    delay(500);
    off_led();
    delay(500);
  }
}
