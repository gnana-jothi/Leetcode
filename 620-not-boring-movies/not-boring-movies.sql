select * from Cinema
where description <> 'boring' 
group by id 
having (id%2 != 0)
order by rating desc
