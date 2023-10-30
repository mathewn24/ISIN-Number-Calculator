# ISIN-Number-Calculator
Calculate the check digit of an International Securities Identification Number.
An ISIN consists of 12 alphanumericals (A–Z and 0–9) and is used to uniquely identify a security globally to facilitate trading. 

This is specifically for ISINs issued in hong Kong, which are in the format HKd1d2d3d4d5d6d7d8d9d10, which each digit from d1-d10 are from 0-9. The rightmost digit is the check digit, d10. Which is useful for preventing errors, and validating the number.

The Luhn algorithm is used to computed the check digit.
More details about it can be found in this link:
https://en.wikipedia.org/wiki/Luhn_algorithm
