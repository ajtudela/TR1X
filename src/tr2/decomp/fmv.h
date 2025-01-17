#pragma once

#include <stdbool.h>

bool __cdecl PlayFMV(const char *file_name);
bool __cdecl IntroFMV(const char *file_name_1, const char *file_name_2);
void __cdecl WinPlayFMV(const char *file_name, bool is_playback);
void __cdecl WinStopFMV(bool is_playback);
bool __cdecl S_PlayFMV(const char *file_name);
bool __cdecl S_IntroFMV(const char *file_name_1, const char *file_name_2);
bool FMV_IsPlaying(void);
