# Esp8266 Youtube Api  

##  Настройка
                                          
              youtube_api.server(адрес сервера,путь к файлу statistics,"путь к файлу","путь к файлу","key");
    Например  youtube_api.server("192.168.1.170","/youtube/statistics.php","/youtube/channels.php","/youtube/channels_id.php","kIys7WFP6ISc64lr4mmBuutDw8jig");
              Как получить key рассказано в видео https://www.youtube.com/watch?v=qoDVvKV8PDc


## Возвращает информацию про  видео

               youtube_api.statistics("video_id");

    Например   https://www.youtube.com/watch?v=Re1ZT5nNjiA
	           youtube_api.statistics("Re1ZT5nNjiA");
             

        Возвращаемая информация
  
       youtube_api.view        Kоличество просмотров на видео (int)
       youtube_api.like        Kоличество лайков на видео (int)
       youtube_api.dislike     Kоличество дизлайков на видео (int)
       youtube_api.comment     Kоличество комментариев (int)

       )
  
 ## Возвращает информацию о  аккаунте если задано имя канала      
   
             youtube_api.account("channel name");

   Например  https://www.youtube.com/user/Keddrcom
             youtube_api.account("Keddrcom");  
  
        Возвращаемая информация
  
       youtube_api.subscriberCount     Подписчики (int)
       youtube_api.viewCount           Количество просмотров на канале (int)
       youtube_api.videoCount          Количество видео на канале (int) 
    
 ## Возвращает информацию о  аккаунте если не задано имя канала      
   
             youtube_api.account_id("channel name");

   Например  https://www.youtube.com/channel/UCSpU8Y1aoqBSAwh8DBpiM9A
             youtube_api.account_id("UCSpU8Y1aoqBSAwh8DBpiM9A"); 
  
        Возвращаемая информация
  
       youtube_api.subscriberCount     Подписчики (int)
       youtube_api.viewCount           Количество просмотров на канале (int)
       youtube_api.videoCount          Количество видео на канале (int) 

 
