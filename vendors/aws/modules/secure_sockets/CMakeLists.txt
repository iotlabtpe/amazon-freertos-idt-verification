# Link to this INTERFACE target to use the default implementation based on cellular.
afr_module(NAME secure_sockets_cellular INTERFACE)

set(src_dir "${CMAKE_CURRENT_LIST_DIR}/cellular")

afr_module_sources(
    secure_sockets_cellular
    INTERFACE
        "${src_dir}/iot_secure_sockets.c"
)

afr_module_include_dirs(
    secure_sockets_cellular
    INTERFACE
        "${AFR_VENDORS_DIR}/aws/modules/cellular/include"
)

afr_module_dependencies(
    secure_sockets_cellular
    INTERFACE
        AFR::tls
        AFR::cellular
)
