<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 3.02″ TFT 170×560（AXS15231B · SPI）</h1>

<p align="center"><b>条状 TFT 模组 · SPI · AXS15231B</b></p>

<p align="center"><a href="./README_EN.md">English</a> | 简体中文 · <a href="../../README.md">规格族索引</a></p>

<p align="center">
  <img alt="Size: 3.02 inch" src="https://img.shields.io/badge/Size-3.02%22-3498DB?style=flat-square" />
  <img alt="Resolution: 170x560" src="https://img.shields.io/badge/Resolution-170%C3%97560-8E44AD?style=flat-square" />
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: AXS15231B" src="https://img.shields.io/badge/Driver-AXS15231B-E7352C?style=flat-square" />
</p>

## 目录

- [产品简介](#产品简介)
- [规格参数](#规格参数)
- [示例工程](#示例工程)
- [预编译固件](#预编译固件)
- [仓库结构](#仓库结构)
- [相关资料](#相关资料)
- [购买链接](#购买链接)
- [技术支持](#技术支持)

---

## 产品简介

OSPTEK **3.02 寸 170×560 TFT** 是一款 **SPI** 接口彩色显示模组，显示驱动与触摸均为 **AXS15231B**（电容触摸经 I2C）。适合条状 HMI、侧边信息条与窄条交互面板等场景。

规格标识（仓库名）：`3.02-tft-170x560-spi-axs15231b`

当前模组版本：**YDP302B003-V1**。外形与机械尺寸以 [`docs/YDP302B003-V1.dwg`](./docs/YDP302B003-V1.dwg) 为准。

## 规格参数

| 项目 | 规格 |
| ---- | ---- |
| 尺寸 | 3.02 英寸 |
| 类型 | TFT / IPS（彩色） |
| 分辨率 | 170×560 |
| 接口 | SPI（4-wire） |
| 驱动 IC | AXS15231B |
| 触摸驱动 | AXS15231B |

> 完整外形尺寸、FPC 定义、供电与时序以 CAD / 驱动手册为准。

## 示例工程

| 说明 | 路径 |
| ---- | ---- |
| ESP32-S3 · AXS15231B SPI + LVGL8（bringup） | [`examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/`](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/) |

## 预编译固件

| 文件 | 说明 |
| ---- | ---- |
| [`firmware/esp32s3-idf5_axs15231b-spi_lvgl8.bin`](./firmware/esp32s3-idf5_axs15231b-spi_lvgl8.bin) | 与上表 bringup 示例对应的合并固件 |

## 仓库结构

```text
3.02-tft-170x560-spi-axs15231b/                                # 仓库根（导航见 ../../README.md）
└── versions/
    └── YDP302B003-V1/                                # 本料号完整资料
        ├── README.md
        ├── README_EN.md
        ├── images/
        ├── docs/
        ├── firmware/
        └── examples/
```

## 相关资料

### 本产品资料

| 资料 | 链接 |
| ---- | ---- |
| 外形 CAD（YDP302B003-V1） | [`docs/YDP302B003-V1.dwg`](./docs/YDP302B003-V1.dwg) |
| 驱动 IC 数据手册（AXS15231B） | [`docs/AXS15231B_Datasheet_V0.9_20240221-客户版.pdf`](./docs/AXS15231B_Datasheet_V0.9_20240221-客户版.pdf) |
| 本料号初始化序列 | 见示例 [`main/main.c`](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/main/main.c) 中 `lcd_init_cmds`（与 YDP302B001-V6 不同，请勿混用） |

### 示例工程

- [ESP32-S3 AXS15231B SPI + LVGL8（bringup）](./examples/esp32s3-3.02-tft-170x560-spi-axs15231b-bringup/)

## 购买链接

<p align="center">
  <a href="https://shop110742373.taobao.com/"><img alt="淘宝官方店铺" src="https://img.shields.io/badge/淘宝-官方店铺-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="速卖通官方店铺" src="https://img.shields.io/badge/速卖通-官方店铺-FF6A00?style=for-the-badge" /></a>
</p>

**国内（淘宝）**

- 店铺：[鱼鹰光电工厂店](https://shop110742373.taobao.com/)

**海外（AliExpress）**

- 店铺：[OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

## 技术支持

- 技术支持 / 产品咨询：<luyu@osptek.com>
- QQ 技术交流群：**985881096**
- 公司官网：<https://osptek.com/>
- 有任何问题，都可以在本仓库 Issues 中提问

---

<p align="center"><sub>© 2026 OSPTEK 鱼鹰光电 · 本仓库资料采用 CC BY 4.0 许可</sub></p>
