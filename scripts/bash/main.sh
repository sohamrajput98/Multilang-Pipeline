#!/usr/bin/env bash

data=(12 7 3 21 9 5)

echo "Original data: ${data[@]}"

IFS=$'\n' sorted=($(sort -n <<<"${data[*]}"))
unset IFS
echo "Sorted data: ${sorted[@]}"

for i in "${!sorted[@]}"; do
    sorted[$i]=$((sorted[$i] * 3 + 2))
done
echo "Transformed data: ${sorted[@]}"

sum=0
for n in "${sorted[@]}"; do
    sum=$((sum + n))
done
echo "Sum of data: $sum"
