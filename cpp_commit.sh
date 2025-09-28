#!/usr/bin/env bash

LANG_FOLDER="src/cpp"
FILE_TO_EDIT="$LANG_FOLDER/main.cpp"
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
"Implemented error handling in main module"
"Optimized vector operations for speed"
"Refactored class constructors for readability"
"Improved algorithm performance in sorting"
"Fixed memory leak in helper functions"
"Enhanced logging for debugging"
"Updated comments and documentation"
"Adjusted compiler settings and flags"
"Removed unused header files"
)

[ ! -f "$COUNTER_FILE" ] && echo "0 0" > "$COUNTER_FILE"
read MAJOR _ < "$COUNTER_FILE"
MAJOR=$((MAJOR + 1))

for ((i=1;i<=NUM_COMMITS;i++)); do
    MINOR=$i
    MSG=${MESSAGES[$RANDOM % ${#MESSAGES[@]}]}
    echo "// Commit $MAJOR.$MINOR: $MSG" >> "$FILE_TO_EDIT"
    git checkout -B $BRANCH
    git add "$FILE_TO_EDIT" "$COUNTER_FILE"
    git commit -m "cpp: commit $MAJOR.$MINOR - $MSG"
done

echo "$MAJOR $NUM_COMMITS" > "$COUNTER_FILE"
git push -u origin $BRANCH
