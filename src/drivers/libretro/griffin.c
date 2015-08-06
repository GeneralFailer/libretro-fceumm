#ifdef WANT_GRIFFIN

#include "drivers/libretro/libretro.c"
#include "drivers/libretro/memstream.c"
#include "drivers/libretro/crc32-zlib.c"

#include "cart.c"
#include "cheat.c"
#include "crc32.c"
#include "debug.c"
#include "drivers/libretro/fceu/fceu-endian.c"
#include "drivers/libretro/fceu/fceu-memory.c"
#include "drivers/libretro/fceu/misc.c"
#include "drivers/libretro/fceu/fceu.c"
#include "drivers/libretro/fceu/fds.c"
#include "drivers/libretro/fceu/file.c"
#include "filter.c"
#include "drivers/libretro/fceu/general.c"
#include "drivers/libretro/fceu/input.c"
#include "md5.c"
#include "drivers/libretro/fceu/nsf.c"
#include "palette.c"
#include "ppu.c"
#include "sound.c"
#include "drivers/libretro/fceu/state.c"
#include "drivers/libretro/fceu/video.c"
#include "vsuni.c"

#endif
