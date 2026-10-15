-- SELECT today.id FROM Weather yesterday CROSS JOIN Weather today WHERE DATEDIFF(today.recordDate,yesterday.recordDate) = 1AND today.temperature > yesterday.temperature; 

SELECT today.id
FROM Weather yesterday 
CROSS JOIN Weather today

WHERE DATEDIFF(today.recordDate,yesterday.recordDate) = 1
    AND today.temperature > yesterday.temperature
;