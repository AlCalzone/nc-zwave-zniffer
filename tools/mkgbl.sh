#!/bin/bash
# Required env variables:
# COMMANDER: Path to Simplicity Commander binary

BUILD_OUTPUT=build/release/nc_controller_zniffer.hex
OUTFILE=artifact/zwa2_zniffer.gbl
SIGN_KEY=keys/vendor_sign.key
ENC_KEY=keys/vendor_encrypt.key

mkdir -p artifact

$COMMANDER gbl create $OUTFILE --app $BUILD_OUTPUT --sign $SIGN_KEY --encrypt $ENC_KEY --compress lzma