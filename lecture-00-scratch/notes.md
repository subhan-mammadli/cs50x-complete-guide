## 🧠 First Program: From Input to Output

Before learning Scratch blocks or any specific language,
it's important to understand the **core idea of programming**:

> Input → Processing → Output

This simple Python example demonstrates that idea using an AI model.

```python
from openai import OpenAI

client = OpenAI()

user_prompt = input("Prompt:")
system_prompt = "Limit your answer to one sentence."

response = client.responses.create(
	input=user_prompt,
	instructions=system_prompt,
	model="gpt-5"
)

print(response.output_text)
```
### What this program shows
- The user provides an input (a prompt)
- The program sends it to a model
- The model processes it
- The program outputs a result

Even though this example uses AI, the core logic applies to
Scratch, C, Python, and every other programming language.

## ✨ Unary

**Unary** means working with or representing **one unit at a time**. 🟢

- In programming, a **unary operation** acts on **a single value**, not two or more. 💻
- A simple real-world example is **counting with fingers**, where each count adds **one more unit** 👆🖐️

> 💡 Tip: Unary operations are like “one step at a time” — simple but powerful.