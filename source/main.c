#include "main.h"

int main(void)
{
  initialize_hal();
  initialize_application();

  do_application();
}
