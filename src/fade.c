#include "c64.h"
#include <ultra64.h>

// extern unknown_struct D_80383AB8;

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_setAllFlags.s")

// void fade_setAllFlags(s16 flags) {
//     D_80383AB8.fade_settings.flags = flags;
// }

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_setFlag.s")

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_removeFlag.s")

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_setColor.s")

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_setSettings.s")

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_isFading.s")

#pragma GLOBAL_ASM("../asm/nonmatchings/fade/fade_calc.s")
