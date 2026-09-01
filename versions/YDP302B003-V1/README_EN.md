<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 3.02″ TFT 170×560 (AXS15231B · SPI)</h1>

<p align="center"><b>Bar TFT module · SPI · AXS15231B</b></p>

<p align="center"><a href="./README.md">简体中文</a> | English · <a href="../../README_EN.md">Family index</a></p>

<p align="center">
  <img alt="Size: 3.02 inch" src="https://img.shields.io/badge/Size-3.02%22-3498DB?style=flat-square" />
  <img alt="Resolution: 170x560" src="https://img.shields.io/badge/Resolution-170%C3%97560-8E44AD?style=flat-square" />
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: AXS15231B" src="https://img.shields.io/badge/Driver-AXS15231B-E7352C?style=flat-square" />
</p>

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Sample projects](#sample-projects)
- [Repository layout](#repository-layout)
- [Resources](#resources)
- [Buy](#buy)
- [Support](#support)

---

## Overview

OSPTEK **3.02″ 170×560 TFT** is a **SPI** color display module. Display and capacitive touch are both driven by **AXS15231B** (touch over I2C). Suited to bar-style HMI and narrow side panels.

Spec ID (repository name): `3.02-tft-170x560-spi-axs15231b`

Current module version: **YDP302B003-V1**. Mechanical outline follows [`docs/YDP302B003-V1.dwg`](./docs/YDP302B003-V1.dwg).

## Specifications

| Item | Spec |
| ---- | ---- |
| Size | 3.02 inch |
| Type | TFT / IPS (color) |
| Resolution | 170×560 |
| Interface | SPI (4-wire) |
| Driver IC | AXS15231B |
| Touch IC | AXS15231B |

> Full outline, FPC definition, power, and timing follow the CAD / driver IC datasheet.

## Sample projects

| Description | Path |
| ---- | ---- |
| ESP32-S3 · AXS15231B SPI + LVGL8 (bringup) | [`examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/`](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/) |

## Repository layout

```text
3.02-tft-170x560-spi-axs15231b/                                # repo root (nav: ../../README_EN.md)
└── versions/
    └── YDP302B003-V1/                                # full materials for this part number
        ├── README.md
        ├── README_EN.md
        ├── images/
        ├── docs/
        └── examples/
```

## Resources

### Product files

| Resource | Link |
| ---- | ---- |
| Outline CAD (YDP302B003-V1) | [`docs/YDP302B003-V1.dwg`](./docs/YDP302B003-V1.dwg) |
| Driver IC datasheet (AXS15231B) | [`docs/AXS15231B_Datasheet_V0.9_20240221-客户版.pdf`](./docs/AXS15231B_Datasheet_V0.9_20240221-客户版.pdf) |
| Init sequence for this SKU | See `lcd_init_cmds` in [`main/main.c`](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/main/main.c) (differs from YDP302B001-V6; do not mix) |

### Samples

- [ESP32-S3 AXS15231B SPI + LVGL8 (bringup)](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/)

## Buy

<p align="center">
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="AliExpress store" src="https://img.shields.io/badge/AliExpress-Official_Store-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://shop110742373.taobao.com/"><img alt="Taobao store" src="https://img.shields.io/badge/Taobao-Official_Store-FF6A00?style=for-the-badge" /></a>
</p>

**Overseas (AliExpress)**

- Store: [OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

**China (Taobao)**

- Store: [鱼鹰光电工厂店](https://shop110742373.taobao.com/)

## Support

- Technical support / product inquiry: <luyu@osptek.com>
- QQ group (China): **985881096**
- Website: <https://osptek.com/>
- Feel free to open an Issue in this repository if you have any questions

---

<p align="center"><sub>© 2026 OSPTEK · Materials in this repository are licensed under CC BY 4.0</sub></p>
