#ifndef T1M_GAME_INV_H
#define T1M_GAME_INV_H

#include "types.h"
#include <stdint.h>

// clang-format off
#define Inv_RingRotateLeft          ((void          (*)(RING_INFO* ring))0x00421910)
#define Inv_RingRotateRight         ((void          (*)(RING_INFO* ring))0x00421940)
#define Inv_RingMotionSetup         ((void          (*)(RING_INFO* ring, int16_t status, int16_t status_target, int16_t frames))0x00421970)
#define Inv_RingMotionRadius        ((void          (*)(RING_INFO* ring, int16_t target))0x004219A0)
#define Inv_RingMotionRotation      ((void          (*)(RING_INFO* ring, int16_t rotation, int16_t target))0x004219D0)
#define Inv_RingMotionCameraPos     ((void          (*)(RING_INFO* ring, int16_t target))0x00421A00)
#define Inv_RingMotionCameraPitch   ((void          (*)(RING_INFO* ring, int16_t target))0x00421A30)
#define Inv_RingMotionItemSelect    ((void          (*)(RING_INFO* ring, INVENTORY_ITEM* inv_item))0x00421A50)
#define Inv_RingMotionItemDeselect  ((void          (*)(RING_INFO* ring, INVENTORY_ITEM* inv_item))0x00421AB0)
// clang-format on

int32_t Display_Inventory(int inv_mode);
void Construct_Inventory();
void SelectMeshes(INVENTORY_ITEM* inv_item);
int32_t AnimateInventoryItem(INVENTORY_ITEM* inv_item);
void DrawInventoryItem(INVENTORY_ITEM* inv_item);
int32_t GetDebouncedInput(int32_t input);

void InitColours();
void RingIsOpen(RING_INFO* ring);
void RingIsNotOpen(RING_INFO* ring);
void RingNotActive(INVENTORY_ITEM* inv_item);
void RingActive();

int32_t Inv_AddItem(int32_t item_num);
void Inv_InsertItem(INVENTORY_ITEM* inv_item);
int32_t Inv_RequestItem(int item_num);
void Inv_RemoveAllItems();
int32_t Inv_RemoveItem(int32_t item_num);
int32_t Inv_GetItemOption(int32_t item_num);
void RemoveInventoryText();
void Inv_RingInit(
    RING_INFO* ring, int16_t type, INVENTORY_ITEM** list, int16_t qty,
    int16_t current, IMOTION_INFO* imo);
void Inv_RingGetView(RING_INFO* a1, PHD_3DPOS* viewer);
void Inv_RingLight(RING_INFO* ring);
void Inv_RingCalcAdders(RING_INFO* ring, int16_t rotation_duration);
void Inv_RingDoMotions(RING_INFO* ring);
void Inv_RingMotionInit(
    RING_INFO* ring, int16_t frames, int16_t status, int16_t status_target);

void T1MInjectGameInvEntry();
void T1MInjectGameInvFunc();

#endif
