#!/bin/sh
[[ -d "$DEPLOY_RESOURCES_DIR" ]] || exit 0
 
 HOWTO_PATH="$DEPLOY_RESOURCES_DIR/resources/How to get the source code"
 cp "$HOWTO_PATH" "$BUILT_PRODUCTS_DIR/$UNLOCALIZED_RESOURCES_FOLDER_PATH/"
