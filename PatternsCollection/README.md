# PatternsCollection
![CI](https://github.com/akhtyamovpavel/PatternsCollection/workflows/CI/badge.svg)

[![Python build](https://github.com/akhtyamovpavel/PatternsCollection/actions/workflows/python.yml/badge.svg)](https://github.com/akhtyamovpavel/PatternsCollection/actions/workflows/python.yml)

Кодовая база примеров паттернов проектирования по курсу "Технологии программирования, МФТИ"

## Содержание

* Порождающие паттерны:
  * [Factory Method](/FactoryMethod)
    * [C++](/FactoryMethod/cpp-source)
    * [Python](/FactoryMethod/python-source)
  * [Abstract Factory](/AbstractFactory)
    * [C++](/AbstractFactory/cpp-source)
    * [Python](/AbstractFactory/python-source)
  * [Builder](/Builder)
    * [C++](/Builder/cpp-source)
    * [Python](/Builder/python-source)
  * [Prototype](/Prototype)
    * [C++](/Prototype/cpp-source)
    * [Python](/Prototype/python-source)
* Структурные паттерны:
  * [Adapter](/Adapter)
    * [C++](/Adapter/cpp-source)
    * [Python](/Adapter/python-source)
  * [Bridge](/Bridge/cpp-source)
  * [Decorator](/Decorator/cpp-source)
  * [Composite](/Composite/cpp-source)
* Поведенческие паттерны:
  * [Observer](/Observer/cpp-source)
  * [Strategy](/Strategy/cpp-source)
  * [Chain of Responsibility](/ChainResponsibility/cpp-source)
  * [Command](/Command/cpp-source)
  * [Mediator](/Mediator/cpp-source)
  * [State](/State/cpp-source)
  * [Memento](/Memento/cpp-source)
  * [Visitor](/Visitor/cpp-source)

## Инструкция по созданию окружения разработчика и сборке проекта (для Ubuntu)

* Компилятор C++\
Допустимо использование как g++, так и gcc.\
`sudo apt update`\
`sudo apt instal build-essential`\
После установки можно убедиться в том, что всё прошло успешно, выполнив:\
`gcc --version` или `g++ --version`.
* Boost\
[Download boost](https://www.boost.org/users/download/)\
`cd boost`\
`./bootstrap.sh --prefix=usr/local/Cellar/boost`\
`./b2`\
`cd ..`
* Openssl\
[Download openssl](https://github.com/openssl/openssl/blob/52c6c12c1cad6f1046b34f4139d1aa3e967a5530/INSTALL.md)\
`cd openssl`\
`./Configure --prefix=/usr/local/Cellar/openssl`\
`make`\
`make install`\
`cd ..`
* Curl\
[Download curl](https://curl.se/docs/install.html)\
`cd curl`\
`./buildconf`\
`./configure`\
`make`\
`cd ..`
* Сборка проекта\
`mkdir build`\
`cd build`\
`cmake ..`\
`make`\
`cd ..`
