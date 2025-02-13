# Write your MySQL query statement below
SELECT Email 
FROM Person
GROUP BY Person.email
HAVING COUNT(*) > 1