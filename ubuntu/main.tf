terraform {
  required_version = ">= 1.0.0, < 2.0.0"

  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "!= 4.6"
    }
  }
}

provider "aws" {
   profile = "tf-user"
  region = "ap-northeast-2"
}

resource "aws_instance" "web" {
  ami                    = "ami-084e92d3e117f7692"
  instance_type          = "t2.micro"
  vpc_security_group_ids = [aws_security_group.web.id]

  user_data = <<-EOF
    #!/bin/bash
  yum -y install httpd      # Apache 웹 서버 설치(httpd)
  systemctl enable httpd    # 부팅 시 자동으로 시작하도록 웹 서버 구성
  systemctl restart httpd   # 웹 서버 활성화

# 간단한 웹 페이지 생성
echo '<html><h1>Hello From Your Linux Web Server!</h1></html>' > /var/www/html/index.html  

    
    EOF

  tags = {
    Name = "tf-web"
  }



}

resource "aws_security_group" "web" {
  name        = "allow_http"
  description = "Allow HTTP inbound traffic"

  // 인바운드 규칙 설정
  ingress {
    from_port   = 80
    to_port     = 80
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"] // 모든 IP 주소에서 접근 허용
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    Name = "allow_http"
  }
  // 이 보안 그룹을 기본 VPC에 적용

}
