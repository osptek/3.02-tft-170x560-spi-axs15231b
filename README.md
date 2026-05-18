# 3.02 寸 170×560 TFT SPI 模组（AXS15231B）资料与示例

**English：** [`README_EN.md`](README_EN.md)

---

> 本仓库提供该模组的 **示例工程**，以及数据手册、规格与接口说明等资料，便于选型参考与集成开发。

## 产品概要

| 项目 | 说明 |
|:--|:--|
| 模组规格 | 3.02 英寸 **TFT**，分辨率 **170×560** |
| 接口 | **SPI** |
| 驱动芯片 | **AXS15231B** |
| 规格标识 | 产品资料中常用 **`3.02-tft-170x560-spi-axs15231b`** 表示本规格 |

---

## 仓库结构

### 顶层目录

| 路径 | 说明 |
|:--|:--|
| `docs/` | 数据手册、规格说明、转接板原理图等 |
| `examples/` | 按功能分类的 **示例工程** |

### `examples/` 分类

| 分类 | 说明（对应内部资料目录） |
|:--|:--|
| `examples/` 根目录 | **ESP-IDF代码**（LVGL8 / LVGL9） |
| `with-te-sw-rotate-90/` | **防撕裂+软件旋转90度代码** |

### 示例工程路径

#### 基础（`examples/` 根目录）

| 说明 | 路径 |
|:--|:--|
| LVGL8 | `examples/esp32s3-idf5_axs15231b-spi_lvgl8/` |
| LVGL9 | `examples/esp32s3-idf5_axs15231b-spi_lvgl9/` |

#### 防撕裂+软件旋转90度代码（`with-te-sw-rotate-90/`）

| 说明 | 路径 |
|:--|:--|
| LVGL8 + LCD，含 TE + 软件旋转 90° | `examples/with-te-sw-rotate-90/esp32s3-idf5_axs15231b-spi_lvgl8_lcd-with-te/` |
