#!/bin/bash
[[ -d "$DEPLOY_RESOURCES_DIR" ]] || exit 0
"$DEPLOY_RESOURCES_DIR/scripts/updateStringsFiles.sh" || exit 1

