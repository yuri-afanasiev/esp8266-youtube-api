<?php   
 $key = htmlspecialchars($_GET['key']);
 $video_id = htmlspecialchars($_GET['video_id']);
 $json_string = file_get_contents('https://www.googleapis.com/youtube/v3/videos?&part=statistics&id='. $video_id .'&key=' . $key);
 $json = json_decode($json_string, true); 
 $viewCount = $json['items']['0']['statistics']['viewCount'];//количество просмотров 
 $likeCount = $json['items']['0']['statistics']['likeCount'];//количество лайков на видео 
 $dislikeCount = $json['items']['0']['statistics']['dislikeCount'];//количество дизлайков на видео
 $commentCount = $json['items']['0']['statistics']['commentCount'];//количество комментариев
 $json_data = array ( 'viewCount'=>$viewCount,'likeCount'=>$likeCount,'dislikeCount'=>$dislikeCount,'commentCount'=>$commentCount);
 echo json_encode($json_data); 
?>
 