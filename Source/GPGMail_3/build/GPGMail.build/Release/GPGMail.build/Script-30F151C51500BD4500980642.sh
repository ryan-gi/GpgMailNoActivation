#!/bin/sh
if [[ -d "$DEPLOY_RESOURCES_DIR" ]] ;then
    source "$DEPLOY_RESOURCES_DIR/config/versioning.sh"
else
    source "$SRCROOT/Version.config"
fi
[[ -n "$VERSION" ]] || { echo "Missing Version!"; exit 1; }


/usr/libexec/PlistBuddy \
  -c "Set CommitHash '${COMMIT_HASH:--}'" \
  -c "Set BuildNumber '${BUILD_NUMBER:-0}'" \
  -c "Set CFBundleVersion '${BUILD_VERSION:-0n}'" \
  -c "Set CFBundleShortVersionString '$VERSION'" \
  "$BUILT_PRODUCTS_DIR/$INFOPLIST_PATH" || exit 2

