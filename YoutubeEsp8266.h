#include <ArduinoJson.h> 
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
  

class youtube {

private: 
	 String host_youtube,statisticsf, channelsf, channels_id,key;
	 const int httpPort = 80;
	  
	 
public: 
	String line, username;
	int subscriberCount, viewCount, videoCount, view, like, dislike, comment;
	WiFiClient client_youtube;

	 void server(String host, String f1, String f2, String f3, String keyf) {
		 host_youtube = host;
		 statisticsf = f1;
		 channelsf = f2;
		 channels_id = f3;
		 key = keyf;
	 }

	 void account(String id) {
		 String url = channelsf;
		 url += "/?Username=";
		 url += id;
		 url += "&key=";
		 url += key;
		  
		 if (client_youtube.connect(host_youtube.c_str(), httpPort)) {
			 client_youtube.print(String("GET ") + url + " HTTP/1.1\r\n" +
				 "Host: " + host_youtube + "\r\n" +
				 "Connection: close\r\n\r\n");
			
		 }
		 delay(2000);
		 while (client_youtube.available()) {
			 
			 line = client_youtube.readStringUntil('\r');
			 DynamicJsonBuffer  jsonBuffer;
			 JsonObject& root = jsonBuffer.parseObject(line);
			 subscriberCount = root["subscriberCount"];//Подписчики 
			 viewCount = root["viewCount"];//Количество просмотров на канале 
			 videoCount = root["videoCount"];//Количество видео на канале
		 }
		  
	 }

	 void account_id(String id) {
		 String url = channels_id;
		 url += "/?Username=";
		 url += id;
		 url += "&key=";
		 url += key;

		 if (client_youtube.connect(host_youtube.c_str(), httpPort)) {
			 client_youtube.print(String("GET ") + url + " HTTP/1.1\r\n" +
				 "Host: " + host_youtube + "\r\n" +
				 "Connection: close\r\n\r\n");

		 }
		 delay(2000);
		 while (client_youtube.available()) {

			 line = client_youtube.readStringUntil('\r');
			 DynamicJsonBuffer  jsonBuffer;
			 JsonObject& root = jsonBuffer.parseObject(line);
			 subscriberCount = root["subscriberCount"];//Подписчики 
			 viewCount = root["viewCount"];//Количество просмотров на канале 
			 videoCount = root["videoCount"];//Количество видео на канале

		 }
	 }
	
	 void statistics(String id) {
		 String url = statisticsf;
		 url += "/?video_id=";
		 url += id;
		 url += "&key=";
		 url += key;

		 if (client_youtube.connect(host_youtube.c_str(), httpPort)) {
			 client_youtube.print(String("GET ") + url + " HTTP/1.1\r\n" +
				 "Host: " + host_youtube + "\r\n" +
				 "Connection: close\r\n\r\n");

		 }
		 delay(2000);
		 while (client_youtube.available()) {

			 line = client_youtube.readStringUntil('\r');
			 DynamicJsonBuffer  jsonBuffer;
			 JsonObject& root = jsonBuffer.parseObject(line);
			 view = root["viewCount"];//количество просмотров   
			 like = root["likeCount"];//количество лайков на видео  
			 dislike = root["dislikeCount"];//количество дизлайков на видео 
			 comment = root["commentCount"];//количество комментариев 

		 }
	 }

};

 
