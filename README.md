# test8266

这是一个基于 PlatformIO 的 ESP8266 示例工程（Arduino 风格）。包含最小的 `setup()` / `loop()` 示例 (见 `src/main.cpp`)：内置 LED 闪烁并在串口打印。

快速上手

先安装 PlatformIO（VS Code PlatformIO 插件或 PlatformIO CLI）。在项目根目录运行：

```bash
# 构建固件
platformio run

# 选择 environment 并上传到设备（在 platformio.ini 中查看 env 名称）
platformio run -e <env> -t upload

# 打开串口监视（与源码中相同的波特率，默认 115200）
platformio device monitor -b 115200

# 运行单元测试（如果有）
platformio test
```

项目结构

- `platformio.ini` - 构建环境与依赖配置，修改前请先查看 env 名称。
- `src/` - 源代码（入口：`src/main.cpp`）
- `include/` - 公共头文件，供多个源码文件引用
- `lib/` - 项目私有库目录，每个库放在独立子目录（遵循 PlatformIO LDF）
- `test/` - PlatformIO 单元测试
- `.github/` - 项目 CI / agent 指南（包含 `copilot-instructions.md`）

示例说明

`src/main.cpp` 演示了典型的 Arduino `setup()` / `loop()` 模式：
- 使用 `Serial.begin(115200)` 打开串口
- 使用 `LED_BUILTIN` 控制板载 LED（高电平亮）

开发与维护约定

- 把可复用的头文件放到 `include/`，把库源放到 `lib/<Name>/src/`，以便 LDF 自动发现。
- 在修改上传命令时，总是先查看 `platformio.ini` 的 env 名称并在上传命令中使用正确的 `-e`。
- 避免在固件中使用桌面/服务器专有库；这是 MCU 固件工程。

调试与测试提示

- 若串口无输出，检查波特率是否与 `Serial.begin()` 中一致（此工程为 115200）。
- 若上传失败，确认串口被其它程序占用（如 VS Code 串口监视器），或选择正确的 environment。
- 单元测试使用 PlatformIO Test Runner，测试文件放入 `test/` 下，运行 `platformio test`。

参考文件

- 入口示例：`src/main.cpp`
- 配置：`platformio.ini`
- 库示例说明：`lib/README`

如果需要，我可以：
- 把 `platformio.ini` 中的 env 名称列出来并把上传示例填入 README。
- 用中文或英文扩展 README 的使用示例和故障排查步骤。
