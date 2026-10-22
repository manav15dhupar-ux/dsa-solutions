select 
    user_id,
    Concat
    (Upper(Substring(name,1,1)),
    lower(substring(name,2))
    ) 
as 
    name
from 
    Users
order by 
    user_id;