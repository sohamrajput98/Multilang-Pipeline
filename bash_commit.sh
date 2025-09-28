#!/usr/bin/env bash

LANG_FOLDER="scripts/bash"
FILE_TO_EDIT="$LANG_FOLDER/main.sh"
BRANCH="main"
COUNTER_FILE="commit_counter.txt"

DAY=$(date +%u)
case $DAY in
    1) NUM_COMMITS=19 ;;
    2) NUM_COMMITS=14 ;;
    3) NUM_COMMITS=21 ;;
    4) NUM_COMMITS=13 ;;
    5) NUM_COMMITS=11 ;;
    6) NUM_COMMITS=29 ;;
    7) NUM_COMMITS=33 ;;
esac

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

[ ! -f "$COUNTER_FILE" ] && echo "0 0" > "$COUNTER_FILE"
read MAJOR _ < "$COUNTER_FILE"
MAJOR=$((MAJOR + 1))

for ((i=1;i<=NUM_COMMITS;i++)); do
    MINOR=$i
    MSG=${MESSAGES[$RANDOM % ${#MESSAGES[@]}]}
    echo "# Commit $MAJOR.$MINOR: $MSG" >> "$FILE_TO_EDIT"
    git checkout -B $BRANCH
    git add "$FILE_TO_EDIT" "$COUNTER_FILE"
    git commit -m "bash: commit $MAJOR.$MINOR - $MSG"
done

echo "$MAJOR $NUM_COMMITS" > "$COUNTER_FILE"
git push -u origin $BRANCH
