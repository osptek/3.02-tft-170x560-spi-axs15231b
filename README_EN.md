# 3.02" 170×560 TFT SPI module (AXS15231B) — documentation & samples

**简体中文：** [`README.md`](README.md)

---

> This repository provides **sample projects** for this module, together with datasheets, specifications, and interface / bring-up documentation for selection reference and integration.

## Product overview

| Item | Description |
|:--|:--|
| Module | 3.02-inch **TFT** panel, **170×560** resolution |
| Interface | **SPI** |
| Driver IC | **AXS15231B** |
| Spec ID | **`3.02-tft-170x560-spi-axs15231b`** is the common product designation in documentation |

---

## Repository layout

### Top-level

| Path | Contents |
|:--|:--|
| `docs/` | Datasheets, specifications, adapter schematics |
| `examples/` | **Sample projects** grouped by feature |

### `examples/` layout

| Location | Description (internal package folder) |
|:--|:--|
| `examples/` root | **ESP-IDF代码** (LVGL8 / LVGL9) |
| `with-te-sw-rotate-90/` | Tear + software 90° rotation (**防撕裂+软件旋转90度代码**) |

### Sample project paths

#### Baseline (`examples/` root)

| Description | Path |
|:--|:--|
| LVGL8 | `examples/esp32s3-idf5_axs15231b-spi_lvgl8/` |
| LVGL9 | `examples/esp32s3-idf5_axs15231b-spi_lvgl9/` |

#### with-te-sw-rotate-90

| Description | Path |
|:--|:--|
| LVGL8 + LCD with TE + software 90° rotation | `examples/with-te-sw-rotate-90/esp32s3-idf5_axs15231b-spi_lvgl8_lcd-with-te/` |
