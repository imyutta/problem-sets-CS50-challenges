# TODO

from cs50 import get_string
import sys

#  Coleman-Liau index is computed as 0.0588 * L - 0.296 * S - 15.8

# prompt user for a text
    text = get_string("Text: ")

# find L (lettera_average) an average amount of letters per 100 words
# a letter is any lowercase character from a to z or any uppercase character from A to Z
    letters = 0
    for i in text:
        if i.isalpha():
            letters += 1
    letters_average = letters / 100
    print(letters_average)

# find S - the average number of sentences per 100 words in the text.

