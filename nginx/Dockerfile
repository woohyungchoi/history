FROM ubuntu:latest
LABEL matainger woohyungchoi
LABEL contect flrst24@naver.com
ENV DEBIAN_FRONTED=noninteractive
ENV TZ=Asia/Seoul
RUN apt-get update
ARG DISABLE_CACHE
RUN apt-get install -y curl nginx
COPY index.html /var/www/html/index.html
CMD [ "nginx", "-g", "daemon off;"]
EXPOSE 80
