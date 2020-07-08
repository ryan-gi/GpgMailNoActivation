#!/bin/sh
[[ "$CONFIGURATION" == "Debug" ]] || exit 0

 # Check if a framework is available under ~/Library/Framework
 USER_FRAMEWORKS="$HOME/Library/Frameworks"
 CONTAINER_FRAMEWORKS="$HOME/Library/Containers/com.apple.mail/Data/Library/Frameworks"
 LIBMACGPG="Libmacgpg.framework"
 [[ -d "$USER_FRAMEWORKS/$LIBMACGPG" ]] || exit 0

 # Create the Container Frameworks dir if it doesn't exist.
 if [ ! -d "$CONTAINER_FRAMEWORKS" ]; then
     mkdir -p "$CONTAINER_FRAMEWORKS"
 fi
 if [ -d "$CONTAINER_FRAMEWORKS/$LIBMACGPG" ]; then
    rm -rf "$CONTAINER_FRAMEWORKS/$LIBMACGPG"
 fi
 
 # Copy the framework into the container.
 rsync -rltD "$USER_FRAMEWORKS/$LIBMACGPG/" "$CONTAINER_FRAMEWORKS/$LIBMACGPG/"
