# Esp8266 Youtube Api  

##  ���������
                                          
              youtube_api.server(����� �������,���� � ����� statistics,"���� � �����","���� � �����","key");
    ��������  youtube_api.server("192.168.1.170","/youtube/statistics.php","/youtube/channels.php","/youtube/channels_id.php","kIys7WFP6ISc64lr4mmBuutDw8jig");
              ��� �������� key ���������� � ����� https://www.youtube.com/watch?v=qoDVvKV8PDc


## ���������� ���������� ���  �����

               youtube_api.statistics("video_id");

    ��������   https://www.youtube.com/watch?v=Re1ZT5nNjiA
	           youtube_api.statistics("Re1ZT5nNjiA");
             

        ������������ ����������
  
       youtube_api.view        K��������� ���������� �� ����� (int)
       youtube_api.like        K��������� ������ �� ����� (int)
       youtube_api.dislike     K��������� ��������� �� ����� (int)
       youtube_api.comment     K��������� ������������ (int)

       )
  
 ## ���������� ���������� �  �������� ���� ������ ��� ������      
   
             youtube_api.account("channel name");

   ��������  https://www.youtube.com/user/Keddrcom
             youtube_api.account("Keddrcom");  
  
        ������������ ����������
  
       youtube_api.subscriberCount     ���������� (int)
       youtube_api.viewCount           ���������� ���������� �� ������ (int)
       youtube_api.videoCount          ���������� ����� �� ������ (int) 
    
 ## ���������� ���������� �  �������� ���� �� ������ ��� ������      
   
             youtube_api.account_id("channel name");

   ��������  https://www.youtube.com/channel/UCSpU8Y1aoqBSAwh8DBpiM9A
             youtube_api.account_id("UCSpU8Y1aoqBSAwh8DBpiM9A"); 
  
        ������������ ����������
  
       youtube_api.subscriberCount     ���������� (int)
       youtube_api.viewCount           ���������� ���������� �� ������ (int)
       youtube_api.videoCount          ���������� ����� �� ������ (int) 

 
