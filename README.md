Imitation of the Network
[Learning Practice by MAI. (2 course)]
------------------------------------
Task (rus): 

Создать программу имитации передачи информационных сообщений в сети с топологией "Звезда". Сеть состоит из абонентских пунктов и
контроллера. Передача сообщения от одного абонентского пункта к другому
осуществляется через контроллер. Абонент-источник передаёт сообщение
контроллеру, а тот передаёт его уже абоненту-приёмнику.

Создать классы "Абонент" и "Контроллер".

Класс "Абонент" должен содержать ссылку на объект "Контроллер",
чтобы иметь возможность передачи ему сообщений.

Определить в классе функцию "Отправить сообщение", которая
формирует сообщение и передаёт его контроллеру (вызывает функцию
"Обслужить заявку"). Строка сообщения имеет следующий вид:
"Абонент "+ <имя клиента> +"Сообщение № "+ <порядковый номер
сообщения>.

Порядковый номер сообщения ведётся самим абонентом. Имя абонента
задаётся при создании объекта абонента.

Определить в классе функцию "Принять сообщение". Данная функция
будет вызываться контроллером для передачи сообщения абоненту. Функция
принимает один параметр - строка с текстом сообщения. Должна вывести на
экран строку "Принято сообщение " и сам текст сообщения.

Определить в классе функцию "Решить, генерировать ли для передачи
сообщение". Эта функция с помощью генератора случайных чисел решает,
генерировать ли сообщение. Если да, то вызывается функция "Отправить
сообщение".

Класс "Контроллер" должен содержать в своём составе массив-список
объектов типа "Абонент", который формируется программой после своего
старта. Этот массив определяет информационную сеть.

Определить в классе функцию "Обслужить заявку". Эта функция
вызывается абонентом, требующим передать своё сообщение другому
абоненту. Функция принимает два параметра:
1) целое число, определяющее индекс абонента -получателя;
2) строка с именем абонента;
3) строка-сообщение.
При своём выполнении функция должна выводить на экран сообщение
"Обрабатывается сообщение от абонента " + <имя абонента>. Далее
сообщение передаётся (вызывает функцию "Принять сообщение") абонентуполучателю, если он существует.

Определить функцию добавления абонента в сеть.

Требования к основной программе.
Программа создаёт объект контроллера. Затем создаёт несколько
объектов абонентов сети и передаёт их контроллеру. Далее организуется
бесконечный цикл, в котором для каждого абонента вызывается функция
"Решить, генерировать ли для передачи сообщение". Если да, то абонент
генерирует и передаёт сообщение.

Программа заканчивает работу по нажатию какой-либо клавиши,
определяющей завершение работы.