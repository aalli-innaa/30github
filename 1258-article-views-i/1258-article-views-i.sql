# Write your MySQL query statement below
select author_id as id from Views
where author_id = viewer_id
group by author_id
having count(*) >= 1 
order by author_id
