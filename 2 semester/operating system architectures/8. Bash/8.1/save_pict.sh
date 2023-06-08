#!bin/bash
mkdir attachments
cd attachments

for ((i=1; i<21 ; i++))
do
curl https://loremflickr.com/800/400 -L > photo_$i
done