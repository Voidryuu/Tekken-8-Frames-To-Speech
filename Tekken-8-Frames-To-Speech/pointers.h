#ifndef TEKKEN8_POINTERS_H
#define TEKKEN8_POINTERS_H

#define TEKKEN_EXE_NAME "Polaris-Win64-Shipping.exe"

#define TEKKEN_MODULE_NAME L"Polaris-Win64-Shipping.exe"

#define P1_RECOVERY_FRAMES_STATIC_POINTER 0x9528170
#define P1_RECOVERY_FRAMES_POINTER_OFFSETS {0x30, 0xc68}

#define P1_STATE_STATIC_POINTER 0x9528170
#define P1_STATE_POINTER_OFFSETS {0x30, 0x518}

#define P2_STATE_STATIC_POINTER 0x9528170
#define P2_STATE_POINTER_OFFSETS {0x38, 0x518}

/*
#define P1_STARTUP_FRAMES_STATIC_POINTER P1_RECOVERY_FRAMES_STATIC_POINTER
#define P1_STARTUP_FRAMES_POINTER_OFFSETS {8, 0, 0x7680}

#define P2_STARTUP_FRAMES_STATIC_POINTER P1_RECOVERY_FRAMES_STATIC_POINTER
#define P2_STARTUP_FRAMES_POINTER_OFFSETS {8, 0, 0xEDC0}
*/

#endif
