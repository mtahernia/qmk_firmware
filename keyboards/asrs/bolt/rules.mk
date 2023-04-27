# Build Options
#   change yes to no to disable
#

# Bootloader selection
BOOTLOADER = atmel-dfu

BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite

# BOOTMAGIC_BOOT_MODE = 1   
# Boot modes: 
# 0: Normal boot
# 1: Boot into bootloader (default)
# 2: Boot into firmware update mode
# 3: Boot into bootloader with a forced reset
# 4: Boot into bootloader with a forced jump to the bootloader section of the firmware

MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = no        # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
RGBLIGHT_DRIVER = WS2812    # WS2812 driver for RGB underglow
AUDIO_ENABLE = no           # Audio output
