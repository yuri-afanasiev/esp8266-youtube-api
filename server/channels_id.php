<?php   
 $key = htmlspecialchars($_GET['key']);
 $Username = htmlspecialchars($_GET['Username']);
 $json_string = file_get_contents('https://www.googleapis.com/youtube/v3/channels?part=statistics&id=' . $Username . '&key=' . $key);
 $json = json_decode($json_string, true); 
 $subscriberCount = $json['items']['0']['statistics']['subscriberCount'];//подписчики
 $viewCount = $json['items']['0']['statistics']['viewCount'];//количество просмотров
 $videoCount = $json['items']['0']['statistics']['videoCount'];//количество видео на канале  
 $json_data = array ( 'subscriberCount'=>$subscriberCount,'viewCount'=>$viewCount,'videoCount'=>$videoCount);
echo json_encode($json_data); 
?>