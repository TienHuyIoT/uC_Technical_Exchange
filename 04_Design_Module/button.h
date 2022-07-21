/*
Design button module

A. Input
- Phân biệt cạnh lên / xuống

1 Phân biệt trạng thái nút nhấn
- Thời gian lấy mẫu  ; Chống rung
- Số lần lấy mẫu     ; xác định mức logic của nút nhấn

2. Single click
- Xác định thay đổi trạng thái nút nhấn

3. Double click
- Xác định thay đổi trạng thái nút nhấn
- Khoảng cách giữa 2 lần nhấn

4. Nhấn dữ
- Xác định thay đổi trạng thái nút nhấn
- Thời gian giữ nút nhấn

5. Idle mode
- Thời gian không nhấn nút

B: Layer
1. Driver
- Level input GPIO: 
    -> Callback input low : stm32: gpio_read(1), digital_input(1)
    -> Callback input high


2,3,4,5: Service
- Callback Single click
- Callback double click
- Callback hold button
- Callback idle button

- event function:
event_button(service)
{
    switch (service):
    case SINGLE:

    break;
}

- api support user query 10ms
- callback function support driver
- callback function support service


button_driver.c

button_service.c

button_module.c

button_app.c  BSP module
*/