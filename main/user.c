#include "user.h"
#include "button.h"

static const char *TAG = "USER";

void user_setup(void *args)
{
    ESP_LOGW(TAG, LOG_FMT() );
    
}

void user_http_init(void *args)
{
    // функция вызывается после user_setup и старта webserver'a
    ESP_LOGW(TAG, LOG_FMT() );
}

// функция вызывается после user_setup и старта mqtt
// в этой функции можно зарегистрировать свои кастомные колбеки на отправку и получение данных
void user_mqtt_init(void *args)
{
    ESP_LOGW(TAG, LOG_FMT() );

}

// функция вызывает в основном цикле каждую секунду
void user_loop(uint32_t sec)
{
 
}

#ifdef CONFIG_USER_WEB_PRINT
// функция вывод данные в пользовательском блоке на главной
void user_web_main(httpd_req_t *req)
{
    ESP_LOGW(TAG, LOG_FMT() );

}
#endif 

#ifdef CONFIG_USER_WEB_CONFIG
void user_web_options(httpd_req_t *req)
{
    ESP_LOGW(TAG, LOG_FMT() );
       
}


void user_process_param(httpd_req_t *req, void *args)
{
    ESP_LOGW(TAG, LOG_FMT() );
    //ESP_LOGW(TAG, "Hello User process param!");
}
#endif
