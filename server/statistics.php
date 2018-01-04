<?php   
 $key = htmlspecialchars($_GET['key']);
 $video_id = htmlspecialchars($_GET['video_id']);
 $json_string = file_get_contents('https://www.googleapis.com/youtube/v3/videos?&part=statistics&id='. $video_id .'&key=' . $key);
 $json = json_decode($json_string, true); 
 $viewCount = $json['items']['0']['statistics']['viewCount'];//���������� ���������� 
 $likeCount = $json['items']['0']['statistics']['likeCount'];//���������� ������ �� ����� 
 $dislikeCount = $json['items']['0']['statistics']['dislikeCount'];//���������� ��������� �� �����
 $commentCount = $json['items']['0']['statistics']['commentCount'];//���������� ������������
 $json_data = array ( 'viewCount'=>$viewCount,'likeCount'=>$likeCount,'dislikeCount'=>$dislikeCount,'commentCount'=>$commentCount);
 echo json_encode($json_data); 
?>
 