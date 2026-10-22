select
    e.name Employee
from
    Employee e
join
    Employee m
on
    m.id = e.managerId
and
    e.salary > m.salary;