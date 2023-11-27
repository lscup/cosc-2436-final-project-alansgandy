# Final Design Document

**Title:** Guitar Collection Catalog System  
**Student:** Suzy Student  
**Course:** COSC 2436 Fall 23  

## Object:

Our object in this project is a Guitar. Each guitar is defined with four attributes:

- **Model:** The model name or number of the guitar
- **Brand:** The brand or manufacturer of the guitar
- **Year:** The year the guitar was made or the model was released
- **Type:** The type of guitar (Electric, Acoustic, Bass, etc.)

## Data Structures:

For managing the collection, we use two data structures:

1. **Array List:** An Array List is used to store the entire collection, allowing for efficient addition and removal of guitars from the collection, as well as the ability to access any guitar in the collection directly by its index.
2. **Hash Map:** A Hash Map is used for quick search functionality. The key for the hash map is the guitar model, and the value is the Guitar object itself, allowing for constant-time complexity when searching for a guitar by its model.

## Algorithms:

We implemented two different search algorithms:

- **Linear Search:** Used in conjunction with the Array List for searching guitars by any attribute.
- **Hashing:** Used in the Hash Map for searching guitars by model, providing a constant time complexity.

For sorting the collection, the Quick Sort algorithm is used due to its average time complexity of O(n log n), and it's not difficult to implement.

## User Interface:

The user interface is a simple command-line interface, with prompts for various options to interact with the collection, including options to add a new guitar to the collection, remove a guitar from the collection, display all guitars in the collection, search for a specific guitar, and sort the collection.

## Persistent Storage:

File input/output operations are used to read and write the guitar collection data to a file, ensuring that the data is not lost when the program ends and can be retrieved when the program is started again.

## Exception Handling:

The program handles exceptions appropriately by catching them, displaying a meaningful error message to the user, and then continuing with the next operation.
