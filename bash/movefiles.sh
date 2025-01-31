#!/bin/bash

# Move .cpp files from one directory to another
# Usage: ./movefiles.sh <source> <destination>

# Find all .cpp files in the source directory
movefiles() {
    # Check if the source directory exists
    if [ ! -d "$1" ]; then
        echo "Source directory does not exist"
        exit 1
    fi

    # Check of the destination directory exists
    if [ ! -d "$2" ]; then
        echo "Destination directory does not exist"
        exit 1
    fi

    # Get all the .cpp files in the source directory
    cpp_files=$(find $1 -type f -name "*.cpp")

    # Echo all the files found (single line)
    echo Found the following cpp files: $cpp_files

    # Check if any .cpp files were found
    if [ -z "$cpp_files" ]; then
        echo "No .cpp files found in the source directory"
        exit 1
    fi

    # Move all the .cpp files to the destination directory
    for file in $cpp_files; do
        mv $file $2
    done
}

# Call the function
movefiles $1 $2

