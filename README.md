# PintOS 프로젝트 3단계: Virtual Memory

## 프로젝트 소개

이 레포지토리는 크래프톤 정글 8기 과정의 12\~13주차에서 진행된 PintOS 운영체제 프로젝트 3단계인 "가상 메모리(Virtual Memory)"의 구현 내용을 아카이빙한 저장소입니다.

본 프로젝트에서는 PintOS 운영체제의 메모리 관리 기능을 강화하고, mmap(메모리 맵핑), 페이지 폴트 처리, Copy-on-Write(COW) 메커니즘 등의 기능을 구현하여 운영체제의 메모리 사용 효율성을 높이는 작업을 진행했습니다.

## 주요 구현 사항

* 파일 기반의 가상 메모리 맵핑(`mmap` 및 `munmap` 구현)
* 지연 로딩(Lazy Loading) 기법을 이용한 페이지 폴트(Page Fault) 처리
* 스왑 공간 관리 및 페이지 교체 알고리즘 구현

## 발표 영상

프로젝트의 발표 영상입니다.

[![Video Label]([https://youtu.be/59USvjy2toI](https://www.youtube.com/watch?v=SJ20J24kUZw))
## 기술 스택

* 언어: C
* 개발 환경: PintOS, Docker

## 참고 자료

* [PintOS 공식 문서](https://web.stanford.edu/class/cs140/projects/pintos/pintos_1.html)
* [KAIST PintOS](https://github.com/kaist-cp/kaist-cp-cs330-pintos)

## 프로젝트 기여자

* [@이현재 (At-this-moment)](https://github.com/At-this-moment)
* 백지원
* 이원규
