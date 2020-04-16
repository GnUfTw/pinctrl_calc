# pinctrl_calculator

## Overview 
A utility to determine how a IMX6 GPIO pin is configured in the linux kernel so you don't have to determine pins attributes manually. The table below describes what attributes the program looks for in the PINCTRL value and where.

| value | CONFIG bits definition |
|:-----:|:-----------------------|
| 1 << 16 | PAD_CTL_HYS |
| 0 << 14 | PAD_CTL_PUS_100K_DOWN |
| 1 << 14 | PAD_CTL_PUS_47K_UP |
| 2 << 14 | PAD_CTL_PUS_100K_UP |
| 3 << 14 | PAD_CTL_PUS_22K_UP |
| 1 << 13 | PAD_CTL_PUE |
| 1 << 12 | PAD_CTL_PKE |
| 1 << 11 | PAD_CTL_ODE |
| 0 << 6 | PAD_CTL_SPEED_LOW |
| 1 << 6 | PAD_CTL_SPEED_MED |
| 2 << 6 | PAD_CTL_SPEED_MED |
| 3 << 6 | PAD_CTL_SPEED_HIGH |
| 0 << 3 | PAD_CTL_DSE_DISABLE |
| 1 << 3 | PAD_CTL_DSE_240ohm |
| 2 << 3 | PAD_CTL_DSE_120ohm |
| 3 << 3 | PAD_CTL_DSE_80ohm |
| 4 << 3 | PAD_CTL_DSE_60ohm |
| 5 << 3 | PAD_CTL_DSE_48ohm |
| 6 << 3 | PAD_CTL_DSE_40ohm |
| 7 << 3 | PAD_CTL_DSE_34ohm |
| 1 << 0 | PAD_CTL_SRE_FAST |
| 0 << 0 | PAD_CTL_SRE_SLOW |

## Building
`g++ main.cpp -o pinctrlcalc`

## Motivation
I found myself frequently calculating this stuff manually when determining how certain GPIO pins were configured in the linux kernel while developing a yocto distribution for the Variscite DART6UL platform. This utility eliminates the need to do these calculations manually.