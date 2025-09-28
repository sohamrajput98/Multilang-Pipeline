#!/usr/bin/env bash

LANG_FOLDER="scripts/bash"
FILE_TO_EDIT="$LANG_FOLDER/main.sh"
BRANCH="main"
COUNTER_FILE="commit_counter.txt"

MESSAGES=(
    "Added error checking in scripts"
"Optimized loops and conditions"
"Refactored functions for clarity"
"Improved performance of file processing"
"Fixed typo in comments and echo statements"
"Enhanced logging messages"
"Updated README and inline documentation"
"Adjusted environment variables and paths"
"Removed unused temporary files"
)

[ ! -f "$COUNTER_FILE" ] && echo 0 > "$COUNTER_FILE"
NUM_COMMITS=5

for ((i=1;i<=NUM_COMMITS;i++)); do
    COUNTER=$(cat "$COUNTER_FILE")
    COUNTER=$((COUNTER + 1))
    MSG=${MESSAGES[$RANDOM % ${#MESSAGES[@]}]}
    echo "# Commit $COUNTER: $MSG" >> "$FILE_TO_EDIT"
    git checkout -B $BRANCH
    git add "$FILE_TO_EDIT" "$COUNTER_FILE"
    git commit -m "bash: commit $COUNTER - $MSG"
    echo $COUNTER > "$COUNTER_FILE"
done

git push -u origin $BRANCH
