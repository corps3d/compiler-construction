import re
class SymbolTable:
    def __init__(self):
        self.table = {}
    
    def add(self, name, type, value=None):
        self.table[name] = {"type": type, "value": value}
    
    def get(self, name):
        return self.table.get(name, None)
    
    def __str__(self):
        result = "Symbol Table:\n"
        result += "Name\t\tType\t\tValue\n"
        result += "-"*40 + "\n"
        for name, info in self.table.items():
            result += f"{name}\t\t{info['type']}\t\t{info['value']}\n"
        return result

# Creating the symbol table
symbol_table = SymbolTable()

# Adding variables to the symbol table
symbol_table.add("regexes", "dictionary", {
    "first_name": r"^[A-Za-z]+$",
    "last_name": r"^[A-Za-z]+$",
    "username": r"^[A-Za-z0-9_]{3,16}$",
    "password": r"^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$",
    "email": r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$",
    "mobile_no": r"^\d{10}$"
})
symbol_table.add("validate_input", "function", "validates input based on regexes")
symbol_table.add("test_data", "dictionary", {
    "first_name": "John",
    "last_name": "Doe",
    "username": "john_doe_123",
    "password": "Passw0rd!",
    "email": "john.doe@example.com",
    "mobile_no": "1234567890"
})
symbol_table.add("validation_results", "dictionary", None)

regexes = {
    "first_name": re.compile(r"^[A-Za-z]+$"),
    "last_name": re.compile(r"^[A-Za-z]+$"),
    "username": re.compile(r"^[A-Za-z0-9_]{3,16}$"),
    "password": re.compile(r"^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$"),
    "email": re.compile(r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"),
    "mobile_no": re.compile(r"^\d{10}$")
}

# Adding regexes to the symbol table
for key in regexes:
    symbol_table.add(f"regex_{key}", "regex", regexes[key].pattern)

# Printing the symbol table
print(symbol_table)
