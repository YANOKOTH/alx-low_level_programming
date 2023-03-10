#!/bin/bash
#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Compile the .c files into object files
for file in $c_files
do
    gcc -c $file
done

# Create the static library from the object files
ar rcs liball.a *.o

# Remove the object files
rm *.o

echo "Static library liball.a created successfully."
