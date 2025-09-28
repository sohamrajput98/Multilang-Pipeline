#!/usr/bin/env bash

LANG_FOLDER="scripts/ruby"
FILE_TO_EDIT="$LANG_FOLDER/main.rb"
BRANCH="main"
COUNTER_FILE="commit_counter.txt"

MESSAGES=(
   "Added error handling in main script"
"Optimized array and hash processing"
"Refactored methods for readability"
"Improved performance of loops"
"Fixed bug in string formatting"
"Enhanced logger output"
"Updated documentation and README"
"Adjusted gem configurations"
"Removed unused variables"
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
    git commit -m "ruby: commit $COUNTER - $MSG"
    echo $COUNTER > "$COUNTER_FILE"
done

git push -u origin $BRANCH
