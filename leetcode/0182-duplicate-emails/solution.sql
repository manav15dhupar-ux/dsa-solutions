select
distinct
    d.email Email
from
    Person r
join
    Person d
on
    r.id <> d.id
and
    r.email = d.email;

-- SELECT email AS Email
-- FROM Person
-- GROUP BY email
-- HAVING COUNT(email) > 1;