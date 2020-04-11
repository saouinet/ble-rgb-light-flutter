#ifndef __GATT_NUS_SERVICE_H__
#define __GATT_NUS_SERVICE_H__

#include <data/json.h>

#define BT_NUS_SERVICE_UUID BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x6E400001, 0xB5A3, 0xF393, 0xE0A9, 0xE50E24DCCA9E))
#define BT_RX_CHARACTERISTIC_UUID BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x6E400002, 0xB5A3, 0xF393, 0xE0A9, 0xE50E24DCCA9E))
#define BT_TX_CHARACTERISTIC_UUID BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x6E400003, 0xB5A3, 0xF393, 0xE0A9, 0xE50E24DCCA9E))

void gatt_nus_service_init(void);
void gatt_nus_service_data_notify();

#endif