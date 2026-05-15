#include <iostream>
using namespace std;

int main(){

    // ------------------------------------------------------------
    // WRONG WAY OF STORING STRING
    // ------------------------------------------------------------

    // char str = "Tanishk Prasad";

    // ❌ WRONG
    // A variable of type 'char' can store ONLY ONE CHARACTER.
    // Example:
    // char ch = 'A';
    // A complete word or sentence cannot be stored in a single char.


    // ------------------------------------------------------------
    // CORRECT WAY : USING CHARACTER ARRAY
    // ------------------------------------------------------------

    char str[20] = "Tanishk Prasad";

    // ✅ CORRECT
    // Here:
    // 'str' is a character array.
    // It can store multiple characters.

    // The compiler automatically adds '\0' at the end.

    // Memory Representation:
    // --------------------------------------------------
    // T a n i s h k   P r a s a d \0
    // --------------------------------------------------

    // '\0' is called NULL CHARACTER or NULL TERMINATOR.
    // It tells the compiler where the string ends.


    // ------------------------------------------------------------
    // METHOD 1 : SIZE AUTOMATICALLY DECIDED
    // ------------------------------------------------------------

    char str1[] = "Tanishk Prasad";

    // Compiler automatically calculates array size.

    // Example:
    // Length of "Tanishk Prasad" = 14 characters
    // + 1 null character '\0'
    // Total size = 15


    // ------------------------------------------------------------
    // METHOD 2 : INITIALIZING CHARACTER BY CHARACTER
    // ------------------------------------------------------------

    char str2[20] = {
        'T','a','n','i','s','h','k',' ',
        'P','r','a','s','a','d','\0'
    };

    // ✅ CORRECT

    // Here we manually inserted every character.

    // IMPORTANT:
    // We MUST add '\0' manually.

    // Without '\0', the compiler does not know
    // where the string ends.


    // ------------------------------------------------------------
    // METHOD 3 : STRING LITERAL
    // ------------------------------------------------------------

    char str3[20] = "jhon";

    // Compiler automatically adds '\0'.

    // Internal Memory:
    // --------------------------------------------------
    // ['j','h','o','n','\0',0,0,0,0,0....]
    // --------------------------------------------------


    // ------------------------------------------------------------
    // PRINTING USING cout
    // ------------------------------------------------------------

    cout << str << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    // cout prints characters one by one
    // until it finds '\0'.


    // ------------------------------------------------------------
    // PRINTING USING printf
    // ------------------------------------------------------------

    printf("%s\n", str);
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    // %s means STRING.

    // printf also prints characters
    // until it finds '\0'.


    // ------------------------------------------------------------
    // ACCESSING INDIVIDUAL CHARACTERS
    // ------------------------------------------------------------

    cout << str[0] << endl;

    // Output:
    // T

    // Indexing starts from 0.

    // Example:
    // --------------------------------------------------
    // T a n i s h k
    // 0 1 2 3 4 5 6
    // --------------------------------------------------


    // ------------------------------------------------------------
    // MODIFYING CHARACTERS
    // ------------------------------------------------------------

    str3[0] = 'J';

    cout << str3 << endl;

    // Output:
    // Jhon


    // ------------------------------------------------------------
    // IMPORTANT DIFFERENCE
    // ------------------------------------------------------------

    // 'A'  -> Character
    // "A"  -> String

    // Example:

    char ch = 'A';

    char word[] = "A";


    // ------------------------------------------------------------
    // WHAT HAPPENS WITHOUT '\0' ?
    // ------------------------------------------------------------

    // char name[] = {'A','B','C'};

    // ❌ Dangerous

    // cout << name;

    // It may print garbage values because
    // there is no '\0' to stop printing.


    // ------------------------------------------------------------
    // POINTER CONCEPT IN STRING
    // ------------------------------------------------------------

    cout << *(str + 2) << endl;

    // Output:
    // n

    // Explanation:
    // *(str + 2)
    // means value at index 2.


    // ------------------------------------------------------------
    // strlen() FUNCTION
    // ------------------------------------------------------------

    // To use strlen(), include:
    // #include<cstring>

    // Example:

    // cout << strlen(str);

    // Output:
    // 14

    // strlen() counts characters BEFORE '\0'.


    // ------------------------------------------------------------
    // BEST MODERN METHOD : string CLASS
    // ------------------------------------------------------------

    // Instead of char arrays,
    // modern C++ mostly uses:

    // string s = "Tanishk";

    // Advantages:
    // 1. Easier to use
    // 2. Dynamic size
    // 3. Built-in functions
    // 4. Safer


    return 0;
}
// ------------------------------------------------------------
/*

---

# Key Points to Remember

## 1. `char` stores one character

```cpp
char ch = 'A';
```

---

## 2. `char array` stores strings

```cpp
char name[] = "Tanishk";
```

---

## 3. Every C-style string ends with `\0`

Example:

```cpp
'A','B','C','\0'
```

---

## 4. `cout` and `printf("%s")` stop at `\0`

---

## 5. Indexing starts from 0

```cpp
name[0]
```

is first character.

---

# Practice Questions

## Easy

1. Print each character of a string using loop.
2. Count length without using `strlen()`.
3. Convert lowercase to uppercase.
4. Reverse a string.
5. Check palindrome string.

---

## Medium

1. Count vowels and consonants.
2. Compare two strings without `strcmp()`.
3. Remove spaces from string.
4. Find frequency of characters.
5. Check anagram strings.

---

## Tough

1. Implement your own `strlen()`.
2. Implement your own `strcpy()`.
3. Implement your own `strcmp()`.
4. Remove duplicate characters.
5. Find longest word in a sentence.

*/