int main(void) {
    HAL_Init();
    // Tạm thời comment (vô hiệu hóa) dòng Clock nếu bạn chưa chỉnh đúng trong CubeMX
    // SystemClock_Config();

    MX_GPIO_Init();
    MX_USART2_UART_Init();

    while (1) {
        uint8_t test_msg[] = "Hello\r\n";
        HAL_UART_Transmit(&huart2, test_msg, 7, 10);
        HAL_Delay(500); // Đèn TX trên module UART2 phải nháy mỗi 0.5 giây
    }
}
