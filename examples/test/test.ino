#include <ArduinoJson.h> 
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <YoutubeEsp8266.h>

const char* ssid = "";   
const char* password = "";     

youtube youtube_api; 
void setup() {
    Serial.begin(115200);  
    WiFi.mode(WIFI_STA);  
    WiFi.begin(ssid, password);  
    while (WiFi.status() != WL_CONNECTED) {
           delay(500);
           Serial.print(".");
          }  
          
      youtube_api.server("192.168.1.170","/youtube/statistics.php","/youtube/channels.php","/youtube/channels_id.php","fffawgerhwbwrg");
 
      youtube_api.account("Keddrcom");  
      
      Serial.println("Subscribers"); 
      Serial.println(youtube_api.subscriberCount);//Подписчики

      Serial.println("view channel"); 
      Serial.println(youtube_api.viewCount);//Количество просмотров на канале 

      Serial.println("video on the channel"); 
      Serial.println(youtube_api.videoCount);//Количество видео на канале   
 

 

      youtube_api.account_id("UCSpU8Y1aoqBSAwh8DBpiM9A");  
      
      Serial.println("Subscribers"); 
      Serial.println(youtube_api.subscriberCount);//Подписчики

      Serial.println("view channel"); 
      Serial.println(youtube_api.viewCount);//Количество просмотров на канале 

      Serial.println("video on the channel"); 
      Serial.println(youtube_api.videoCount);//Количество видео на канале   
      
      youtube_api.statistics("Re1ZT5nNjiA");
   
     
      Serial.println("view"); 
      Serial.println(youtube_api.view);//Kоличество просмотров на видео

      Serial.println("like"); 
      Serial.println(youtube_api.like);//Kоличество лайков на видео

      Serial.println("dislike"); 
      Serial.println(youtube_api.dislike);//Kоличество дизлайков на видео 

      Serial.println("comment"); 
      Serial.println(youtube_api.comment);//Kоличество комментариев 
  
}
void loop() {
   
}


 

