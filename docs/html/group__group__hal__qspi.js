var group__group__hal__qspi =
[
    [ "QSPI HAL Results", "group__group__hal__results__qspi.html", "group__group__hal__results__qspi" ],
    [ "cyhal_qspi_command_t", "group__group__hal__qspi.html#structcyhal__qspi__command__t", [
      [ "instruction", "group__group__hal__qspi.html#a6b3a205d095fac02f65395f3080e2257", null ],
      [ "address", "group__group__hal__qspi.html#a5575b9fde5fb2ef4278f4162d3ba9b17", null ],
      [ "mode_bits", "group__group__hal__qspi.html#a6fc8177c91c003870da0daea405a5b5c", null ],
      [ "dummy_count", "group__group__hal__qspi.html#a972b6ca026d8e28490ab029d431b7a20", null ],
      [ "data", "group__group__hal__qspi.html#aea8f0c3e6166a587bd2781f91bf8814a", null ]
    ] ],
    [ "cyhal_qspi_command_t.instruction", "group__group__hal__qspi.html#structcyhal__qspi__command__t_8instruction", [
      [ "bus_width", "group__group__hal__qspi.html#aaea78d2eed5d55bf6a19b3a4933520d2", null ],
      [ "value", "group__group__hal__qspi.html#a2063c1608d6e0baf80249c42e2be5804", null ],
      [ "disabled", "group__group__hal__qspi.html#a075ae3d2fc31640504f814f60e5ef713", null ]
    ] ],
    [ "cyhal_qspi_command_t.address", "group__group__hal__qspi.html#structcyhal__qspi__command__t_8address", [
      [ "bus_width", "group__group__hal__qspi.html#aaea78d2eed5d55bf6a19b3a4933520d2", null ],
      [ "size", "group__group__hal__qspi.html#af7bd60b75b29d79b660a2859395c1a24", null ],
      [ "value", "group__group__hal__qspi.html#a2063c1608d6e0baf80249c42e2be5804", null ],
      [ "disabled", "group__group__hal__qspi.html#a075ae3d2fc31640504f814f60e5ef713", null ]
    ] ],
    [ "cyhal_qspi_command_t.mode_bits", "group__group__hal__qspi.html#structcyhal__qspi__command__t_8mode__bits", [
      [ "bus_width", "group__group__hal__qspi.html#aaea78d2eed5d55bf6a19b3a4933520d2", null ],
      [ "size", "group__group__hal__qspi.html#af7bd60b75b29d79b660a2859395c1a24", null ],
      [ "value", "group__group__hal__qspi.html#a2063c1608d6e0baf80249c42e2be5804", null ],
      [ "disabled", "group__group__hal__qspi.html#a075ae3d2fc31640504f814f60e5ef713", null ]
    ] ],
    [ "cyhal_qspi_command_t.data", "group__group__hal__qspi.html#structcyhal__qspi__command__t_8data", [
      [ "bus_width", "group__group__hal__qspi.html#aaea78d2eed5d55bf6a19b3a4933520d2", null ]
    ] ],
    [ "cyhal_qspi_event_callback_t", "group__group__hal__qspi.html#ga42887dff6257345711b353990edb1ab1", null ],
    [ "cyhal_qspi_bus_width_t", "group__group__hal__qspi.html#gaddc93a79f0708fd53897d0c37bc7544b", [
      [ "CYHAL_QSPI_CFG_BUS_SINGLE", "group__group__hal__qspi.html#ggaddc93a79f0708fd53897d0c37bc7544bab14f0354fdb42ea40c30274df3eeb74f", null ],
      [ "CYHAL_QSPI_CFG_BUS_DUAL", "group__group__hal__qspi.html#ggaddc93a79f0708fd53897d0c37bc7544baca253e83014241113acff2120db94c4a", null ],
      [ "CYHAL_QSPI_CFG_BUS_QUAD", "group__group__hal__qspi.html#ggaddc93a79f0708fd53897d0c37bc7544ba9e084c6cdea0e030633d139720cad303", null ],
      [ "CYHAL_QSPI_CFG_BUS_OCTAL", "group__group__hal__qspi.html#ggaddc93a79f0708fd53897d0c37bc7544ba29b9bcb8d38a946e6b629d0950cce40d", null ]
    ] ],
    [ "cyhal_qspi_size_t", "group__group__hal__qspi.html#ga0633be58b4427d173d1f94c4e6e4e058", [
      [ "CYHAL_QSPI_CFG_SIZE_8", "group__group__hal__qspi.html#gga0633be58b4427d173d1f94c4e6e4e058a3a800b560a9a1ff08d80174908a5b577", null ],
      [ "CYHAL_QSPI_CFG_SIZE_16", "group__group__hal__qspi.html#gga0633be58b4427d173d1f94c4e6e4e058ababf1c204fafe33c239c4304ecb7dd0b", null ],
      [ "CYHAL_QSPI_CFG_SIZE_24", "group__group__hal__qspi.html#gga0633be58b4427d173d1f94c4e6e4e058a3255bb7d1a9fbf71e28c121df749135e", null ],
      [ "CYHAL_QSPI_CFG_SIZE_32", "group__group__hal__qspi.html#gga0633be58b4427d173d1f94c4e6e4e058a065035b5f8a48d6edfb798e8e3390eed", null ]
    ] ],
    [ "cyhal_qspi_event_t", "group__group__hal__qspi.html#gadae12b69a94f743b345655ec751d8aad", [
      [ "CYHAL_QSPI_EVENT_NONE", "group__group__hal__qspi.html#ggadae12b69a94f743b345655ec751d8aadac4bda5668bc258f4508d4a1d5cdec9df", null ],
      [ "CYHAL_QSPI_IRQ_TRANSMIT_DONE", "group__group__hal__qspi.html#ggadae12b69a94f743b345655ec751d8aadab1b4499185f082601c68a36c6be0d034", null ],
      [ "CYHAL_QSPI_IRQ_RECEIVE_DONE", "group__group__hal__qspi.html#ggadae12b69a94f743b345655ec751d8aada3c0c0f4d57cf0d2a00ab20ec587fe409", null ]
    ] ],
    [ "cyhal_qspi_init", "group__group__hal__qspi.html#gafeb79a3262be28e59c267b5146273588", null ],
    [ "cyhal_qspi_free", "group__group__hal__qspi.html#ga14906073e688d345f01f880f9400bba3", null ],
    [ "cyhal_qspi_set_frequency", "group__group__hal__qspi.html#ga67150e1497b4547854d48b23deb8fd47", null ],
    [ "cyhal_qspi_get_frequency", "group__group__hal__qspi.html#ga7d779256e9226180b2f6aa8f6af0bcab", null ],
    [ "cyhal_qspi_slave_select_config", "group__group__hal__qspi.html#gac55517e2e3828190ccc942e0d1a08b8e", null ],
    [ "cyhal_qspi_select_active_ssel", "group__group__hal__qspi.html#ga0a0ffa8e5c9c92289b4624616cc27803", null ],
    [ "cyhal_qspi_read", "group__group__hal__qspi.html#ga4e8f85b99de75604ef38becb14ae073d", null ],
    [ "cyhal_qspi_read_async", "group__group__hal__qspi.html#gae29816daa8fec2c03d00c927aa9e1558", null ],
    [ "cyhal_qspi_write", "group__group__hal__qspi.html#ga7f67f2108cdf6312557fca9be9a3cd0e", null ],
    [ "cyhal_qspi_write_async", "group__group__hal__qspi.html#gab4e9be936651ce19e56c16c0b3ae07af", null ],
    [ "cyhal_qspi_transfer", "group__group__hal__qspi.html#gad2ec06f4a49520a89d6b9e0299d0c1ce", null ],
    [ "cyhal_qspi_register_callback", "group__group__hal__qspi.html#ga3650436f640ed3e7640dafaa90268700", null ],
    [ "cyhal_qspi_enable_event", "group__group__hal__qspi.html#ga133e886b33443ee76ad7239623290079", null ]
];