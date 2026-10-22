import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees=employees.assign(salary=employees["salary"]*2)
    return employees