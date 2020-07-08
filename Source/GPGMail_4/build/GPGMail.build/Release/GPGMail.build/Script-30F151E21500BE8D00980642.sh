#!/bin/sh
################################################
# Install the bundle in ~/Library/Mail/bundles #
################################################

exit 0 # DO NO INSTALL GPGMAIL
[[ "0$INSTALL_GPGMAIL" -eq 1 ]] || exit 0


rm -fr "$HOME/Library/Mail/Bundles/$FULL_PRODUCT_NAME"

# Copy the Bundle
mkdir -p ~/Library/Mail/Bundles/
cp -RH "$TARGET_BUILD_DIR/$FULL_PRODUCT_NAME" "$HOME/Library/Mail/Bundles/"

