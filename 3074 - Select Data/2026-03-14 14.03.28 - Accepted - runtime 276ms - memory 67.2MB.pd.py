import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      students=students[students["student_id"] == 101]
      students = students.drop("student_id", axis=1)
      return students
   