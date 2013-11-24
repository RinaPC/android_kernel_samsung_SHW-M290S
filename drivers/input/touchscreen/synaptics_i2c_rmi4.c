#if defined(CONFIG_MACH_GIO_SKT) || defined(CONFIG_MACH_GIO_KT) || defined(CONFIG_MACH_JUNO_SKT) || defined(CONFIG_MACH_JUNO_KT)
#include "synaptics_i2c_rmi4_gio.c"
#elif defined(CONFIG_MACH_COOPER)
#include "synaptics_i2c_rmi4_cooper.c"
#elif defined(CONFIG_MACH_BENI)
#include "synaptics_i2c_rmi4_beni.c"
#elif defined(CONFIG_MACH_TASS)
#include "synaptics_i2c_rmi4_tass.c"
#elif defined(CONFIG_MACH_LUCAS)
#include "synaptics_i2c_rmi4_lucas.c"
#else
#endif
