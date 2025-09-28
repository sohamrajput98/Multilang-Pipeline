#!/usr/bin/env bash

LANG_FOLDER="src/java"
FILE_TO_EDIT="$LANG_FOLDER/Main.java"
BRANCH="main"
COUNTER_FILE="commit_counter.txt"

MESSAGES=(
   "Added exception handling in main class"
"Optimized list processing methods"
"Refactored service layer for clarity"
"Improved thread handling in modules"
"Fixed null pointer issues"
"Enhanced logging and debug statements"
"Updated Javadoc and README"
"Adjusted configuration in application.properties"
"Removed unused imports"
)

[ ! -f "$COUNTER_FILE" ] && echo 0 > "$COUNTER_FILE"
NUM_COMMITS=5

for ((i=1;i<=NUM_COMMITS;i++)); do
    COUNTER=$(cat "$COUNTER_FILE")
    COUNTER=$((COUNTER + 1))
    MSG=${MESSAGES[$RANDOM % ${#MESSAGES[@]}]}
    echo "// Commit $COUNTER: $MSG" >> "$FILE_TO_EDIT"
    git checkout -B $BRANCH
    git add "$FILE_TO_EDIT" "$COUNTER_FILE"
    git commit -m "java: commit $COUNTER - $MSG"
    echo $COUNTER > "$COUNTER_FILE"
done

git push -u origin $BRANCH
