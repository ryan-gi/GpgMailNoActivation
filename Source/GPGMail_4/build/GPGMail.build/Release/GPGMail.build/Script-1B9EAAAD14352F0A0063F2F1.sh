#!/bin/sh
install_name_tool -change \
"@executable_path/../Frameworks/RegexKit.framework/Versions/A/RegexKit" \
"@loader_path/../Frameworks/RegexKit.framework/Versions/A/RegexKit" \
"$TARGET_BUILD_DIR/$FULL_PRODUCT_NAME/Contents/MacOS/GPGMail"

