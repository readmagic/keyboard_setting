# List of all the board related files.
BOARDSRC = ${CHIBIOS_CONTRIB}/os/hal/boards/WVSHARE_BLE400/board.c

# Required include directories
BOARDINC = ${CHIBIOS_CONTRIB}/os/hal/boards/WVSHARE_BLE400

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
