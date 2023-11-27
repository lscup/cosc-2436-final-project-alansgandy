# Initial Design Document:

**Title:** Guitar Collection Catalog System  
**Student:** Suzy Student  
**Course:** COSC 2436 Fall 23  

## Object:

Our object in this project will be a Guitar. Each guitar is defined with four attributes:

- **Model:** The model name or number of the guitar
- **Brand:** The brand or manufacturer of the guitar
- **Year:** The year the guitar was made or the model was released
- **Type:** The type of guitar (Electric, Acoustic, Bass, etc.)

## Data Structures:

For managing the collection, we plan to use two data structures:

1. **Array List:** An Array List will be used to store the entire collection. This allows for efficient addition and removal of guitars from the collection, as well as the ability to access any guitar in the collection directly by its index.
2. **Hash Map:** A Hash Map will be used for quick search functionality. The key for the hash map will be the guitar model, and the value will be the Guitar object itself. This will allow for constant-time complexity when searching for a guitar by its model.

## Algorithms:

Two different search algorithms will be implemented:

- **Linear Search:** Will be used in conjunction with the Array List for searching guitars by any attribute. Despite its O(n) time complexity, this is a simple and effective method when the Array List is not sorted.
- **Hashing:** In the Hash Map, the hash function will be used for searching guitars by model. It provides a constant time complexity which makes it very efficient.

For sorting the collection, the Quick Sort algorithm will be used. This is because of its average time complexity of O(n log n), and it's not difficult to implement.

## User Interface:

The user interface will be a simple command-line interface where the user will be prompted with various options to interact with the collection. These will include options to add a new guitar to the collection, remove a guitar from the collection, display all guitars in the collection, search for a specific guitar, and sort the collection.

## Persistent Storage:

We plan to use file input/output operations to read and write the guitar collection data to a file. This will ensure that the data is not lost when the program ends and can be retrieved when the program is started again.

## Exception Handling:

Our program will handle exceptions appropriately by catching them, displaying a meaningful error message to the user, and then continuing with the next operation. This will ensure that our program doesn't crash when an exception occurs.
