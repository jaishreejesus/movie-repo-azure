import re

text = "The PINCODES are 201306, 201310, 201308"

pattern = r"\d{6}"

res = re.findall(pattern, text)
print(res)
