# PSoC 6 Hardware Abstraction Layer (HAL) Release Notes
The PSoC 6 Hardware Abstraction Layer (HAL) provides an implementation of the Hardware Abstraction Layer for the PSoC 6 family of chips. This API provides convenience methods for initializing and manipulating different hardware peripherals. Depending on the specific chip being used, not all features may be supported.

### What's Included?
This release of the PSoC 6 HAL includes support for the following drivers:
* ADC
* Clock
* Comparator
* CRC
* DAC
* DMA
* EZ-I2C
* Flash
* GPIO
* Hardware Manager
* I2C
* I2S
* LowPower Timer (LPTimer)
* OpAmp
* PDM/PCM
* Power Management (SysPM)
* PWM
* QSPI
* RTC
* SDHC
* SDIO
* SPI
* System
* Timer
* True Random Number Generator (TRNG)
* UART
* USB Device
* WDT

### What Changed?
#### v1.4.0
* Renamed library from psoc6hal to mtb-hal-cat1
* Added support for new PSoC 6 S4 devices
* Extended clock support for QSPI and SDHC drivers
* Fixed a few bugs in various drivers
* Minor documentation updates
#### v1.3.0
* Added new Analog Comparator driver
* Added new OpAmp driver
* Extended ADC driver
* Extended DAC driver
* Extended SPI/QSPI drivers to support multiple slave select signals
* Fixed SDHC based SDIO cyhal_sdio_is_busy() function to return status immediately instead of waiting until the transfer completes
* Fixed a few bugs in various drivers
* Minor update for documentation & branding
#### v1.2.1
* Added new option for SysPM driver to support tickless sleep in addition to deepsleep
* Fixed an issue with deep-sleep wake-up in the SDIO and SDHC drivers that could cause intermittent communication failures
* Minor bug fixes and documentation improvements
#### v1.2.0
* Added new Clock driver
* Added new SysPM Power Management driver
* Added new I2S driver
* Added new PDM/PCM driver
* Reduced flash memory usage for a number of drivers
* Improved documentation for a number of drivers
* Fixed a few bugs in various drivers
NOTE: The new SysPM driver needs to be initialized by calling cyhal_syspm_init(). This is done automatically by Board Support Packages version 1.2.0 and later.
#### v1.1.1
* Improved documentation for a number of drivers
* Fixed duplicate symbol definition with PDL 1.4.1 release
* Minor bug fixes
#### v1.1.0
* Added new DMA driver
* Added new EZ-I2C driver
* Extended System driver to allow getting information about reset
* Extended System driver to provide delay functions
* Updated PWM driver to provide additional configuration options
* Updated Timer driver to allow reading the current count
* Updated RTC driver to support Day Light Savings time
* Updated LP Timer driver to improve performance
* Minor updates up avoid potential warnings on some toolchains
* Multiple bug fixes across drivers
#### v1.0.0
* Initial release (ADC, CRC, DAC, Flash, GPIO, Hardware Manager, I2C, LP Timer, PWM, QSPI, RTC, SDHC, SDIO, SPI, System, Timer, TRNG, UART, USB Device, WDT)

### Supported Software and Tools
This version of the PSoC 6 Hardware Abstraction Layer was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| ModusToolbox Software Environment         | 2.1     |
| GCC Compiler                              | 9.2     |
| IAR Compiler                              | 8.4     |
| ARM Compiler                              | 6.11    |

Minimum required ModusToolbox Software Environment: v2.0

### More information
Use the following links for more information, as needed:
* [API Reference Guide](https://cypresssemiconductorco.github.io/mtb-hal-cat1/html/modules.html)
* [Cypress Semiconductor, an Infineon Technologies Company](http://www.cypress.com)
* [Cypress Semiconductor GitHub](https://github.com/cypresssemiconductorco)
* [ModusToolbox](https://www.cypress.com/products/modustoolbox-software-environment)

---
© Cypress Semiconductor Corporation, 2019-2020.