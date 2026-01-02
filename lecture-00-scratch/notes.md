### First Program!

```python
from openai import OpenAI

client = OpenAI()

user_prompt = input("Prompt: ")
system_prompt = "Limit your answer to one sentence."

response = client.responses.create(
	input=user_prompt,
	instructions=system_prompt,
	model="gpt-5"
)

print(response.output_text)
```

This Python code allows us to use the GPT-5 model in our program via the OpenAI API.