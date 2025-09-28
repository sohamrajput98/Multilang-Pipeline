#!/usr/bin/env bash

LANG_FOLDER="src/cpp"
FILE_TO_EDIT="$LANG_FOLDER/main.cpp"
BRANCH="main"
COUNTER_FILE="commit_counter.txt"  # global counter

# Random commit messages
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

# Initialize global counter if missing
[ ! -f "$COUNTER_FILE" ] && echo 0 > "$COUNTER_FILE"

# Number of commits to make in this run
NUM_COMMITS=5  # adjust as needed

for ((i=1;i<=NUM_COMMITS;i++)); do
    COUNTER=$(cat "$COUNTER_FILE")
    COUNTER=$((COUNTER + 1))
    # Pick a random message
    MSG=${MESSAGES[$RANDOM % ${#MESSAGES[@]}]}
    
    # Append dummy change
    echo "// Commit $COUNTER: $MSG" >> "$FILE_TO_EDIT"

    git checkout -B $BRANCH
    git add "$FILE_TO_EDIT" "$COUNTER_FILE"
    git commit -m "cpp: commit $COUNTER - $MSG"

    # Update global counter
    echo $COUNTER > "$COUNTER_FILE"
done

git push -u origin $BRANCH
