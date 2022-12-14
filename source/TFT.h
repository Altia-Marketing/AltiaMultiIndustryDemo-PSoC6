/********************************************************************************
* Copyright 2018-2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef TFT_H_
#define TFT_H_

#define BLACK 0x0000
#define RED   0xF800
#define GREEN 0x07E0
#define BLUE  0x001F
#define WHITE 0xFFFF
#define PINK  0xF81F

void TFT_HwReset(void);
void TFT_SwReset(void);
void TFT_ReadDisplayID(uint8 *id);
void TFT_InvertMode(bool mode);
int  TFT_SetWindow(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom);
void TFT_ReadDisplayStatus(uint8 *status);
void TFT_DisplayOn(void);
void TFT_DisplayOff(void);
void TFT_FillScreen(uint16_t color);
void TFT_ConfigureRotation(uint16_t rotation);
void TFT_SetPixel(uint16_t x, uint16_t y, uint16_t color);
void TFT_DrawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t color);
void TFT_UpdateArea(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, int16_t *buffer);

#endif /* TFT_H_ */
