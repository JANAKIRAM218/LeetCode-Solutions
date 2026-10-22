import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    x=views[views["author_id"]==views["viewer_id"]][["author_id"]]
    x=x.rename(columns={"author_id":"id"}).sort_values("id")
    return x.drop_duplicates()