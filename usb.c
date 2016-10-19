#include <usb_names.h>

#define MANUFACTURER_NAME  {'M','o','n','o','m','e'}
#define MANUFACTURER_NAME_LEN 6
#define PRODUCT_NAME    {'M','o','n','o','m','e','4','0','h'}
#define PRODUCT_NAME_LEN  8
#define PRODUCT_SERIAL_LEN 8
#define PRODUCT_SERIAL {'m','1','0','0','0','0','0','9'}
struct usb_string_descriptor_struct usb_string_manufacturer_name = {
  2 + MANUFACTURER_NAME_LEN * 2,
  3,
  MANUFACTURER_NAME
};
struct usb_string_descriptor_struct usb_string_product_name = {
  2 + PRODUCT_NAME_LEN * 2,
  3,
  PRODUCT_NAME
};
struct usb_string_descriptor_struct usb_string_serial_number = {
  2 + PRODUCT_SERIAL_LEN * 2,
  3,
  PRODUCT_SERIAL
};
