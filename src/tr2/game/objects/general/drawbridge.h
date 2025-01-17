#pragma once

#include "global/types.h"

void Drawbridge_Setup(void);

int32_t __cdecl Drawbridge_IsItemOnTop(const ITEM *item, int32_t z, int32_t x);

void __cdecl Drawbridge_Floor(
    const ITEM *item, int32_t x, int32_t y, int32_t z, int32_t *out_height);

void __cdecl Drawbridge_Ceiling(
    const ITEM *item, int32_t x, int32_t y, int32_t z, int32_t *out_height);

void __cdecl Drawbridge_Collision(
    int16_t item_num, ITEM *lara_item, COLL_INFO *coll);
