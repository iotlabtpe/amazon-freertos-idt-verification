AMAZON_FREERTOS_LIB_DIR := ../../../../../../../../libraries
AMAZON_FREERTOS_KERNEL_DIR := ../../../../../../../../freertos_kernel

COMPONENT_ADD_INCLUDEDIRS := include 
                            ../../config_files 
                            ${AMAZON_FREERTOS_KERNEL_DIR}/include 
                            $(AMAZON_FREERTOS_LIB_DIR)/c_sdk/standard/common/include 
                            $(AMAZON_FREERTOS_LIB_DIR)/freertos_plus/standard/crypto/include 
                            $(AMAZON_FREERTOS_LIB_DIR)/c_sdk/aws/defender/include 
                            $(AMAZON_FREERTOS_LIB_DIR)/freertos_plus/aws/greengrass/include
                            $(AMAZON_FREERTOS_LIB_DIR)/c_sdk/standard/mqtt/include
                            $(AMAZON_FREERTOS_LIB_DIR)/freertos_plus/aws/ota/include
                            $(AMAZON_FREERTOS_LIB_DIR)/abstractions/pkcs11/include
                            $(AMAZON_FREERTOS_LIB_DIR)/abstractions/secure_sockets/include
                            $(AMAZON_FREERTOS_LIB_DIR)/c_sdk/aws/shadow/include
                            $(AMAZON_FREERTOS_LIB_DIR)/freertos_plus/standard/utils/include
                            $(AMAZON_FREERTOS_LIB_DIR)/freertos_plus/standard/tls/include
                            $(AMAZON_FREERTOS_LIB_DIR)/abstractions/wifi/include
                            $(AMAZON_FREERTOS_LIB_DIR)/c_sdk/standard/common/include/private
                            ${AMAZON_FREERTOS_KERNEL_DIR}/portable/ThirdParty/GCC/Xtensa_ESP32/include
COMPONENT_SRCDIRS := . ${AMAZON_FREERTOS_KERNEL_DIR}/portable/ThirdParty/GCC/Xtensa_ESP32 $(AMAZON_FREERTOS_KERNEL_DIR)
COMPONENT_ADD_LDFLAGS += -Wl,--undefined=uxTopUsedPriority
