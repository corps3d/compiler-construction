import re

# Regular Expressions
regexes = {
    "first_name": re.compile(r"^[A-Za-z]+$"),
    "last_name": re.compile(r"^[A-Za-z]+$"),
    "username": re.compile(r"^[A-Za-z0-9_]{3,16}$"),
    "password": re.compile(r"^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$"),
    "email": re.compile(r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"),
    "mobile_no": re.compile(r"^\d{10}$")
}

# DFA Simulation Function
def validate_input(field, value):
    if field in regexes:
        return bool(regexes[field].match(value))
    return False

# Test Cases
test_data = {
    "first_name": "John",
    "last_name": "Doe",
    "username": "john_doe_123",
    "password": "Passw0rd!",
    "email": "john.doe@example.com",
    "mobile_no": "1234567890"
}

# Validation
validation_results = {field: validate_input(field, value) for field, value in test_data.items()}
print(validation_results)
