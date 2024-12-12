# import re
# text = "Landlines are: 0120-42991834, 0132-39249423, (0120)4997834 Not Landlines: 9999-27612344"
# pattern = r"0120(?:-\d{8}|\(\d{8}\))"

# res = re.findall(pattern, text)
# print(res)

# import re

# text = "Landlines are: 0120-5991834, 0132-39249423, (0120)4971834 Not Landlines: 9999-27612344"

# pattern = r"(?: \(0120\) | 0120-)\d{7}"
# matches = re.findall(pattern, text)

# print(matches)  # Output: ['0120-42991834', '(0120)4991834']

import re

text = "Landlines are: 0120-5991834, 0132-39249423, (0120)4991834 Not Landlines: 9999-27612344"

# Regular expression to match numbers starting with 0120
pattern = r"[\(]?0120[\-\)]?\d{7}"

# Find all matches
matches = re.findall(pattern, text)
print(matches)
