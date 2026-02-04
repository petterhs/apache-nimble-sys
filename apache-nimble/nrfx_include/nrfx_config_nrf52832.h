#ifndef NRFX_CONFIG_NRF52832_H__
#define NRFX_CONFIG_NRF52832_H__
/*
 * nRF52832 NRFX configuration
 *
 * For now we reuse the nRF52840 NRFX configuration, since both are nRF52
 * series Cortex-M4F parts and the NimBLE controller only relies on a small
 * subset of peripherals (RADIO, RTC, RNG, TIMER, etc.) that are compatible
 * across 52832/52840 for our purposes.
 *
 * If you need to fine‑tune for 52832 specifically, you can copy the contents
 * of `nrfx_config_nrf52840.h` here and adjust as needed.
 */

#ifndef NRFX_CONFIG_H__
#error "This file should not be included directly. Include nrfx_config.h instead."
#endif

#include "nrfx_config_nrf52840.h"

#endif // NRFX_CONFIG_NRF52832_H__

