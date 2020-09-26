var group__group__hal__impl__hw__types =
[
    [ "cyhal_clock_t", "group__group__hal__impl__hw__types.html#structcyhal__clock__t", [
      [ "div_type", "group__group__hal__impl__hw__types.html#a12a2c8d12099bb43979094e9336ffec6", null ],
      [ "div_num", "group__group__hal__impl__hw__types.html#a621dd72458c30e3386ca3a60c5646a96", null ],
      [ "block", "group__group__hal__impl__hw__types.html#a60762f348f4de6260d4eee35a6cd6560", null ],
      [ "channel", "group__group__hal__impl__hw__types.html#aa27063ada31404de933c54ade97205df", null ],
      [ "reserved", "group__group__hal__impl__hw__types.html#a4b783c0785fab0565508506aeb055429", null ]
    ] ],
    [ "cyhal_resource_inst_t", "group__group__hal__impl__hw__types.html#structcyhal__resource__inst__t", [
      [ "type", "group__group__hal__impl__hw__types.html#ad111187a65d182386ea96858369b83d4", null ],
      [ "block_num", "group__group__hal__impl__hw__types.html#a91895766b5f5efe1dfffac2d7537e73a", null ],
      [ "channel_num", "group__group__hal__impl__hw__types.html#a4488a199114a86e5a72184c7a0a16c06", null ]
    ] ],
    [ "cyhal_event_callback_data_t", "group__group__hal__impl__hw__types.html#structcyhal__event__callback__data__t", [
      [ "callback", "group__group__hal__impl__hw__types.html#a3c3d10edf78afaf402eb6eb9004a17c0", null ],
      [ "callback_arg", "group__group__hal__impl__hw__types.html#aeabdbaef4f75c5b947fa9d1534d230f9", null ]
    ] ],
    [ "cyhal_tcpwm_t", "group__group__hal__impl__hw__types.html#structcyhal__tcpwm__t", [
      [ "base", "group__group__hal__impl__hw__types.html#afcbafe1118309449887b2d1e71589be8", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a8ccce14a59d1387736d5e28469a43af1", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a4c8ba4a2754b8447ce97969933baff39", null ],
      [ "dedicated_clock", "group__group__hal__impl__hw__types.html#a21f9fdb1ebd75cc3a229e6b8359d7277", null ],
      [ "clock_hz", "group__group__hal__impl__hw__types.html#a61e96b14af811d1664fdee09caad9f12", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a4ca7850ec02d62ce98b20273a040cab0", null ]
    ] ],
    [ "cyhal_dma_t", "group__group__hal__impl__hw__types.html#structcyhal__dma__t", [
      [ "resource", "group__group__hal__impl__hw__types.html#a435949478e9279c9270c62843a69070e", null ],
      [ "channel_config", "group__group__hal__impl__hw__types.html#ab95c46736c4721480ddc4dded574b8f3", null ],
      [ "descriptor_config", "group__group__hal__impl__hw__types.html#a47827b4c0b730eb66f36ac7916d459db", null ],
      [ "descriptor", "group__group__hal__impl__hw__types.html#a863c863640536cf57231ce5819fd4707", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#ae05f049b8e40d8f1a111ec3328afc5a7", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a9fb6d3fe2403deb665ce86e958fb956a", null ]
    ] ],
    [ "cyhal_dma_t.channel_config", "group__group__hal__impl__hw__types.html#unioncyhal__dma__t_8channel__config", [
      [ "dw", "group__group__hal__impl__hw__types.html#a1f2121f36f817bd18540e5fa7de06f59", null ],
      [ "dmac", "group__group__hal__impl__hw__types.html#ae555fc29296b95adb45c0092d8f35338", null ]
    ] ],
    [ "cyhal_dma_t.descriptor_config", "group__group__hal__impl__hw__types.html#unioncyhal__dma__t_8descriptor__config", [
      [ "dw", "group__group__hal__impl__hw__types.html#a1f2121f36f817bd18540e5fa7de06f59", null ],
      [ "dmac", "group__group__hal__impl__hw__types.html#ae555fc29296b95adb45c0092d8f35338", null ]
    ] ],
    [ "cyhal_dma_t.descriptor", "group__group__hal__impl__hw__types.html#unioncyhal__dma__t_8descriptor", [
      [ "dw", "group__group__hal__impl__hw__types.html#a1f2121f36f817bd18540e5fa7de06f59", null ],
      [ "dmac", "group__group__hal__impl__hw__types.html#ae555fc29296b95adb45c0092d8f35338", null ]
    ] ],
    [ "cyhal_adc_t", "group__group__hal__impl__hw__types.html#structcyhal__adc__t", [
      [ "base", "group__group__hal__impl__hw__types.html#ac5615cdba01efd5c110f0ca6adbef43e", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a9343981a568de936a5c729c9b94e3888", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#aa7f9c40ac381cf1ba12d887a498938b0", null ],
      [ "dedicated_clock", "group__group__hal__impl__hw__types.html#a1446fcf0c070b58ba0a02a6d1ad0e167", null ],
      [ "continuous_scanning", "group__group__hal__impl__hw__types.html#a503d77d3c3fe26ec55140a57dcf67b69", null ],
      [ "conversion_complete", "group__group__hal__impl__hw__types.html#aee91178fbd81ee50efb413d028ae3519", null ],
      [ "channel_config", "group__group__hal__impl__hw__types.html#a80387c168decb163670d999d25ab9861", null ],
      [ "user_enabled_events", "group__group__hal__impl__hw__types.html#a6ae0542a24823c0931f95eb71cc6db33", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a215032cbf5b0e332de57edc6e08b967b", null ],
      [ "async_mode", "group__group__hal__impl__hw__types.html#a1ab5d42ceff21bf6a5983839ec19cdcc", null ],
      [ "dma", "group__group__hal__impl__hw__types.html#a9b7bf7fcde35981ece224554ad22f10d", null ],
      [ "async_buff_orig", "group__group__hal__impl__hw__types.html#af162a27f19cd19a089fb5e2c49ae800a", null ],
      [ "async_buff_next", "group__group__hal__impl__hw__types.html#a1183a11bed557a6643c10de4a2cde754", null ],
      [ "async_transfer_in_uv", "group__group__hal__impl__hw__types.html#a762f879937906d9d3ea371de58faa1e6", null ],
      [ "async_scans_remaining", "group__group__hal__impl__hw__types.html#a1460a01df6bff30e507cd971dd8b908d", null ]
    ] ],
    [ "cyhal_adc_channel_t", "group__group__hal__impl__hw__types.html#structcyhal__adc__channel__t", [
      [ "adc", "group__group__hal__impl__hw__types.html#ae3f5aaa0bc16116937f581313a9a88cf", null ],
      [ "vplus", "group__group__hal__impl__hw__types.html#aa6c3e0cbeff34ed618b0408597443ed3", null ],
      [ "vminus", "group__group__hal__impl__hw__types.html#abcc1d2644dbd56211ea3c8741fdf9178", null ],
      [ "channel_idx", "group__group__hal__impl__hw__types.html#a6bf6a5d80c620d0c1ffd7e281f4ff5e1", null ],
      [ "minimum_acquisition_ns", "group__group__hal__impl__hw__types.html#a03534d0f3db39a0495245a42d69eb13c", null ]
    ] ],
    [ "cyhal_comp_t", "group__group__hal__impl__hw__types.html#structcyhal__comp__t", [
      [ "resource", "group__group__hal__impl__hw__types.html#abfdfcd88b2f9058b88fcd385a412b578", null ],
      [ "pin_vin_p", "group__group__hal__impl__hw__types.html#a253387985e2368023e82f4d519448b7b", null ],
      [ "pin_vin_m", "group__group__hal__impl__hw__types.html#a529ba908b202f3e94240b26a92be90f9", null ],
      [ "pin_out", "group__group__hal__impl__hw__types.html#acbe031d28cebcf3212482c98af7c3fc4", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a62e44a6d43bc091a5c31cea999aefabe", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#ac1cc4c9fa610791f2d51a84bed89fd6d", null ]
    ] ],
    [ "cyhal_comp_t.__unnamed__", "group__group__hal__impl__hw__types.html#unioncyhal__comp__t_8____unnamed____", [
      [ "base_lpcomp", "group__group__hal__impl__hw__types.html#a0deb488364ff2caa9ee5f6413710ffc9", null ]
    ] ],
    [ "cyhal_crc_t", "group__group__hal__impl__hw__types.html#structcyhal__crc__t", [
      [ "base", "group__group__hal__impl__hw__types.html#aa8172d5f14d9a24826e003df016ea62d", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#aac1de671fc1cf74d6808fd126fe89238", null ],
      [ "crc_width", "group__group__hal__impl__hw__types.html#a6e9f1abc6fc3e175b4d6536a050d320f", null ]
    ] ],
    [ "cyhal_dac_t", "group__group__hal__impl__hw__types.html#structcyhal__dac__t", [
      [ "base_dac", "group__group__hal__impl__hw__types.html#a5b0e17875a2da127bcdbaeb51f5a66c1", null ],
      [ "base_opamp", "group__group__hal__impl__hw__types.html#a143f8ee01aefa9db1120ef8851efe5bc", null ],
      [ "resource_dac", "group__group__hal__impl__hw__types.html#ac8e0a257738d4a4fe97862e3e177ab2e", null ],
      [ "resource_opamp", "group__group__hal__impl__hw__types.html#af45e23f1a63602534c1306cbb8038fc3", null ],
      [ "resource_aref_opamp", "group__group__hal__impl__hw__types.html#aec0112cc65bfebc5669e436c9b877727", null ],
      [ "pin", "group__group__hal__impl__hw__types.html#a7e9694b84de60b955ff0d8a6afbc55c2", null ]
    ] ],
    [ "cyhal_opamp_t", "group__group__hal__impl__hw__types.html#structcyhal__opamp__t", [
      [ "base", "group__group__hal__impl__hw__types.html#ac3675bc630cea19d2882aac355eebc34", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a5fc84ff1731b7aabe0724eafe2b80748", null ],
      [ "pin_vin_p", "group__group__hal__impl__hw__types.html#aff04f2bc53ca5d8d6827d7699b18e372", null ],
      [ "pin_vin_m", "group__group__hal__impl__hw__types.html#a787d97da72ce6ce10b5bec605d0382a3", null ],
      [ "pin_vout", "group__group__hal__impl__hw__types.html#aa2cc2ea2267eb1ec5d95dc41b31748d4", null ],
      [ "is_init_success", "group__group__hal__impl__hw__types.html#ae25bcc43d16a511756d5805bfe1b8d61", null ]
    ] ],
    [ "cyhal_flash_t", "group__group__hal__impl__hw__types.html#structcyhal__flash__t", [
      [ "empty", "group__group__hal__impl__hw__types.html#aaa4efca804da27aa9934f5bc2a88b609", null ]
    ] ],
    [ "cyhal_i2c_t", "group__group__hal__impl__hw__types.html#structcyhal__i2c__t", [
      [ "base", "group__group__hal__impl__hw__types.html#a0929625ac8253a070d2edb3cc3c1bd4e", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a34241849f682fd5bee4f6b7be9c5e44d", null ],
      [ "pin_sda", "group__group__hal__impl__hw__types.html#ab6d7b3f033a28dd9589d765d3c12e758", null ],
      [ "pin_scl", "group__group__hal__impl__hw__types.html#ae48ab483971698a3695c2145e1eafe28", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#aba31f83dc1b34b7adef74c7828892156", null ],
      [ "is_shared_clock", "group__group__hal__impl__hw__types.html#ad927263ef78c2fca8f05a0a2bcfe4dc3", null ],
      [ "context", "group__group__hal__impl__hw__types.html#aa56649f560fd041a0b1303921e2ba3fa", null ],
      [ "rx_config", "group__group__hal__impl__hw__types.html#a43ab6f2f527440a244846ee58b1e903d", null ],
      [ "tx_config", "group__group__hal__impl__hw__types.html#aace0bcce15d6519d9d7edf4470719b68", null ],
      [ "is_slave", "group__group__hal__impl__hw__types.html#ab603bff9673ba097723feebcb95107d4", null ],
      [ "address", "group__group__hal__impl__hw__types.html#a1f7b4087fcc65fadd219cc056620857b", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#a74a6c300ca7a9aab30886a343e1c6d19", null ],
      [ "pending", "group__group__hal__impl__hw__types.html#ade05e50ecdc505da34ca7a0cc190d7fd", null ],
      [ "events", "group__group__hal__impl__hw__types.html#afa9f049ebdc491d46985c81ff80cb4e8", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#aaaab9b7e79c057162b0f000e0502295c", null ]
    ] ],
    [ "cyhal_ezi2c_t", "group__group__hal__impl__hw__types.html#structcyhal__ezi2c__t", [
      [ "base", "group__group__hal__impl__hw__types.html#a1acfb04d7f408bef718b8fc65d3e51ce", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a9c99de3b28996d598c0bfff24553fe78", null ],
      [ "pin_sda", "group__group__hal__impl__hw__types.html#a28cfb1d3efde5f9680cc1da02804cb34", null ],
      [ "pin_scl", "group__group__hal__impl__hw__types.html#a75b314887d1fcaaaba028873a3f1292d", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a68627f300a191617cf6d7f49e3d115d4", null ],
      [ "is_shared_clock", "group__group__hal__impl__hw__types.html#af155dccb8af1decc16cce52d4ceaf7cc", null ],
      [ "context", "group__group__hal__impl__hw__types.html#a3aa065ed0c7c1d4d24c559cc4f4a644b", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#a9cded0c71c054dea98ddf9f0c68d5ff7", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a78fc15a46183b145984ad509e430d8af", null ]
    ] ],
    [ "cyhal_i2s_t", "group__group__hal__impl__hw__types.html#structcyhal__i2s__t", [
      [ "empty", "group__group__hal__impl__hw__types.html#aa7ec2ea7a9d469b29f3542c287b21e88", null ]
    ] ],
    [ "cyhal_lptimer_t", "group__group__hal__impl__hw__types.html#structcyhal__lptimer__t", [
      [ "base", "group__group__hal__impl__hw__types.html#ab6e909cedc7f2a404a5de186d7c731cb", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a06e532202124b44f3cbd3a88270f50ae", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#aee76c50832553de4525a4270d5d06df5", null ],
      [ "clear_int_mask", "group__group__hal__impl__hw__types.html#a0267197c10e521c17927a135956c7e31", null ]
    ] ],
    [ "cyhal_pdm_pcm_t", "group__group__hal__impl__hw__types.html#structcyhal__pdm__pcm__t", [
      [ "base", "group__group__hal__impl__hw__types.html#ad96e08de632111cb6c4b51212270d49c", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a02d5e79f65e4d59fee8b32777d86cd1b", null ],
      [ "pin_data", "group__group__hal__impl__hw__types.html#a23b0819374a1197586fa47196c1d5c28", null ],
      [ "pin_clk", "group__group__hal__impl__hw__types.html#a5bda25c3b6a6a3af16cb102e29696a69", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#a459a288e12f28d84eba07b731557f6c7", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a6e777ed7780a0b6843f11664a490898f", null ],
      [ "word_size", "group__group__hal__impl__hw__types.html#aede94648d66301bb1b626f6cec71e344", null ],
      [ "dma", "group__group__hal__impl__hw__types.html#a1ed94b4e2288e0e7c6b71535258b469a", null ],
      [ "stabilized", "group__group__hal__impl__hw__types.html#a882b2be28778d26c7872f52f587dacce", null ],
      [ "pm_transition_ready", "group__group__hal__impl__hw__types.html#a552d58a6a7db7165c25c6118e9f378d9", null ],
      [ "pm_callback", "group__group__hal__impl__hw__types.html#a3bb17483581fb05866d9aa744a4d9079", null ],
      [ "async_buffer", "group__group__hal__impl__hw__types.html#ae5a3543635ef4f259fd7047663653465", null ],
      [ "async_read_remaining", "group__group__hal__impl__hw__types.html#a706a2bf50cce1bebabf22f563f8ce917", null ]
    ] ],
    [ "cyhal_pwm_t", "group__group__hal__impl__hw__types.html#structcyhal__pwm__t", [
      [ "tcpwm", "group__group__hal__impl__hw__types.html#a2256866da49cb401cc0c792d184aa13d", null ],
      [ "pin", "group__group__hal__impl__hw__types.html#adbc3775af399b89b28f710ba299e633e", null ],
      [ "pin_compl", "group__group__hal__impl__hw__types.html#acd470392a044f5d9e89462be54e54516", null ]
    ] ],
    [ "cyhal_qspi_t", "group__group__hal__impl__hw__types.html#structcyhal__qspi__t", [
      [ "base", "group__group__hal__impl__hw__types.html#a7d4a257b40a90d8df5f2078c333be024", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#ac59d6d6a74889f341406e5abafa07625", null ],
      [ "pin_ios", "group__group__hal__impl__hw__types.html#a1593d196807e7bbf202d9785006c66ba", null ],
      [ "pin_sclk", "group__group__hal__impl__hw__types.html#a69cf396fb94143caf3c17f21e77fe30a", null ],
      [ "pin_ssel", "group__group__hal__impl__hw__types.html#a09ac9cc8aaeb58965a786f5a02747715", null ],
      [ "slave_select", "group__group__hal__impl__hw__types.html#a03a0419ecb43ffc36c7d6f407f49fc9d", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a28e2c55bdc9721139219fd2bfc7dbd6e", null ],
      [ "is_clock_owned", "group__group__hal__impl__hw__types.html#a58c5363b600cf045c3594385f107b727", null ],
      [ "mode", "group__group__hal__impl__hw__types.html#a32c76b6134b5fcfc5ed7a5bed1ebe93d", null ],
      [ "context", "group__group__hal__impl__hw__types.html#a701c962e05235ae4d577fd2831df2f1a", null ],
      [ "data_select", "group__group__hal__impl__hw__types.html#a9174d14499fb4f0af86ada40d9a6c750", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#a6e5636079826219fc50c6eca3d0b42ba", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a548bcda97b2206efadd024b69339973a", null ],
      [ "pm_callback", "group__group__hal__impl__hw__types.html#a629d4ffdad4e9a8912cc08cfb8b94f9b", null ],
      [ "pm_transition_pending", "group__group__hal__impl__hw__types.html#a5271ef0f6b8a86eaefba25d7880f9f88", null ]
    ] ],
    [ "cyhal_trng_t", "group__group__hal__impl__hw__types.html#structcyhal__trng__t", [
      [ "base", "group__group__hal__impl__hw__types.html#acf8a5871571c60e989496cefe80df53f", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#adff657185b0e7645d799377dedc5eaf6", null ]
    ] ],
    [ "cyhal_rtc_t", "group__group__hal__impl__hw__types.html#structcyhal__rtc__t", [
      [ "empty", "group__group__hal__impl__hw__types.html#aff21062458721c4f2e7cc6eb9700f815", null ]
    ] ],
    [ "cyhal_sdhc_t", "group__group__hal__impl__hw__types.html#structcyhal__sdhc__t", [
      [ "base", "group__group__hal__impl__hw__types.html#af8cbea03143779795a2e4972c635f4dd", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#ad179252d21dd3cb37ae739cd4cb8926a", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a45ae15622a4556b40d0af1d7b0777505", null ],
      [ "emmc", "group__group__hal__impl__hw__types.html#af4fc74f61d8086822834b928787ac79e", null ],
      [ "dmaType", "group__group__hal__impl__hw__types.html#a365b370b54b12e6754a3dce00a6df82d", null ],
      [ "enableLedControl", "group__group__hal__impl__hw__types.html#ad2c4ad3c7a68210914f6a180747674b9", null ],
      [ "context", "group__group__hal__impl__hw__types.html#ace871089c0db12bbea58e571514ab471", null ],
      [ "pin_clk", "group__group__hal__impl__hw__types.html#af7f97c5e37997a65df7799c5e66455fe", null ],
      [ "pin_cmd", "group__group__hal__impl__hw__types.html#a02e5d8916c5c1e15152a95744d6895be", null ],
      [ "pin_data", "group__group__hal__impl__hw__types.html#a072f05e510d39475bc879745f8f67346", null ],
      [ "pin_cardDetect", "group__group__hal__impl__hw__types.html#afe0c6a7e564b723137384810daaebea0", null ],
      [ "pin_ioVoltSel", "group__group__hal__impl__hw__types.html#a23e2d73cec426c5c71195c5e07209183", null ],
      [ "pin_cardIfPwrEn", "group__group__hal__impl__hw__types.html#ab0ef18346eebebc8b413ef63b9cdf2ac", null ],
      [ "pin_cardMechWriteProt", "group__group__hal__impl__hw__types.html#a914137cebd5692f79343f6327a959148", null ],
      [ "pin_ledCtrl", "group__group__hal__impl__hw__types.html#a123619860ae2fcaeee3f350a53836a99", null ],
      [ "pin_cardEmmcReset", "group__group__hal__impl__hw__types.html#a17154ca2e853521132aaffb9d6efa1ec", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#adadc83241a4d70cc0d2139218749ca72", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a2bd77b27b881fa7a20283d847ac0fd54", null ],
      [ "pm_transition_pending", "group__group__hal__impl__hw__types.html#a0a72410d8d34a3400b037e19bbf96a56", null ],
      [ "pm_callback_data", "group__group__hal__impl__hw__types.html#a3fa201afda0e69b1e2d148943e651188", null ]
    ] ],
    [ "cyhal_sdio_t", "group__group__hal__impl__hw__types.html#structcyhal__sdio__t", [
      [ "base", "group__group__hal__impl__hw__types.html#ac4b575bfe95953180357fc511f1e5914", null ],
      [ "emmc", "group__group__hal__impl__hw__types.html#a6cfdc4e7436bee85524491bcbaa71f3d", null ],
      [ "dmaType", "group__group__hal__impl__hw__types.html#ad85bb812245a8b5e46d611db6872e3f3", null ],
      [ "context", "group__group__hal__impl__hw__types.html#abbfdd2921695a42d9bef2aa0bf9bbfed", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a8d8c01a75bd5d523cd9278d41eee7da3", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a722e1255e00bdf81242a40eda39e2290", null ],
      [ "pin_clk", "group__group__hal__impl__hw__types.html#a2ee725f184bcac8b12f8ea1a2eeb2635", null ],
      [ "pin_cmd", "group__group__hal__impl__hw__types.html#a6e03fcad3619f23a805c9f0f4cef84e3", null ],
      [ "pin_data0", "group__group__hal__impl__hw__types.html#ae6e6a56a702ec396296b3157a2461077", null ],
      [ "pin_data1", "group__group__hal__impl__hw__types.html#a0d6a82b63f847fd52e6f9834c257d568", null ],
      [ "pin_data2", "group__group__hal__impl__hw__types.html#a933ec9a436f9ddd1ee2321871bdcbf5f", null ],
      [ "pin_data3", "group__group__hal__impl__hw__types.html#a9268ca2e6abbe7873c914ce6cb85d18d", null ],
      [ "frequencyhal_hz", "group__group__hal__impl__hw__types.html#a1575bc5e8889960f5d34d3e7926a1931", null ],
      [ "block_size", "group__group__hal__impl__hw__types.html#aff42f0fd4ff5e0026f7532469d829f08", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#aa69c64759bc59b3836ce07317ca735bc", null ],
      [ "events", "group__group__hal__impl__hw__types.html#acb9a4e41a6c52418ccd92285f5eadde0", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a8eaf2c237cb6229a06e774981c39f081", null ],
      [ "pm_transition_pending", "group__group__hal__impl__hw__types.html#a111804ebe1aa7e58e09c0d6398479f9d", null ],
      [ "pm_callback_data", "group__group__hal__impl__hw__types.html#a984a30a6c7f6ea79ea8f2bb2347f0dd4", null ]
    ] ],
    [ "cyhal_spi_t", "group__group__hal__impl__hw__types.html#structcyhal__spi__t", [
      [ "base", "group__group__hal__impl__hw__types.html#a9d0c88aefd98c3154063d62806bc7896", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a50ef30629c0ed6b9b88fd3edd1d6d917", null ],
      [ "pin_miso", "group__group__hal__impl__hw__types.html#a4abba543deddc161985cb5e2bce54a27", null ],
      [ "pin_mosi", "group__group__hal__impl__hw__types.html#aeb604dd90daa694e30c9401c4a35a261", null ],
      [ "pin_sclk", "group__group__hal__impl__hw__types.html#a0257721a8d77e714a2403d20c474097b", null ],
      [ "pin_ssel", "group__group__hal__impl__hw__types.html#a25f5477edefe12fe9e7c0fc5a34e5c3d", null ],
      [ "ssel_pol", "group__group__hal__impl__hw__types.html#a97c4443efbfb39aa679ab01dda84c7f9", null ],
      [ "active_ssel", "group__group__hal__impl__hw__types.html#aadd316efc500c86d31d4f5a1d537eda8", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a209a4ab790591cf161bd9cd4984cac94", null ],
      [ "clk_mode", "group__group__hal__impl__hw__types.html#a53afd13ba64fe0511d4e6a18e1e0e5de", null ],
      [ "mode", "group__group__hal__impl__hw__types.html#a48e2879bfa6bea23645f5e2b8a684eb9", null ],
      [ "data_bits", "group__group__hal__impl__hw__types.html#a50a0b5cf864a709a12c53b57bf1f60e0", null ],
      [ "is_slave", "group__group__hal__impl__hw__types.html#adac2b2d71c8aa2918756ff15b7eed46f", null ],
      [ "alloc_clock", "group__group__hal__impl__hw__types.html#ae7b748656fdeb754c3d5e4fca97ce981", null ],
      [ "oversample_value", "group__group__hal__impl__hw__types.html#a1719642510d5c74a45fc5ed4e3af0b4c", null ],
      [ "msb_first", "group__group__hal__impl__hw__types.html#ad3b024dc55f4ba25ae9a002fdf6274ef", null ],
      [ "context", "group__group__hal__impl__hw__types.html#a9d3190844992b833c1985a0f70db0f47", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#aaad3adf0f7954bb7fee6e543220b2c38", null ],
      [ "pending", "group__group__hal__impl__hw__types.html#a81a81ef012f522585a7f86211d2eed93", null ],
      [ "write_fill", "group__group__hal__impl__hw__types.html#a39beabda44550039d6b984c454c798e0", null ],
      [ "rx_buffer", "group__group__hal__impl__hw__types.html#ad61070aa55e039d0f02e7e4a9547bf49", null ],
      [ "rx_buffer_size", "group__group__hal__impl__hw__types.html#ae83a2c35e45a21c0bb078cfcf915b981", null ],
      [ "tx_buffer", "group__group__hal__impl__hw__types.html#a5b27c2bab5d173ffdc1187b153859f3c", null ],
      [ "tx_buffer_size", "group__group__hal__impl__hw__types.html#a68458b1ec4318a905b47e78874b9571d", null ],
      [ "is_async", "group__group__hal__impl__hw__types.html#ae332bc5a8e1965808c24eb36f7f4be01", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#a81359f063c7f6603a9665c2af197595e", null ]
    ] ],
    [ "cyhal_timer_t", "group__group__hal__impl__hw__types.html#structcyhal__timer__t", [
      [ "tcpwm", "group__group__hal__impl__hw__types.html#ad9b79323e63e1fb3d8cedeb0baca175b", null ],
      [ "default_value", "group__group__hal__impl__hw__types.html#a35055537da61b0cc38799626e3ae0e6f", null ]
    ] ],
    [ "cyhal_uart_t", "group__group__hal__impl__hw__types.html#structcyhal__uart__t", [
      [ "base", "group__group__hal__impl__hw__types.html#adb1e03e9a708b3dd6aed68e6581a463a", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#a8500bcc4df32b74911f7f2c7e620e609", null ],
      [ "pin_rx", "group__group__hal__impl__hw__types.html#aa211e6d348346ecb7391dfc07df98454", null ],
      [ "pin_tx", "group__group__hal__impl__hw__types.html#a934295a171024345bf34fb06d79572dc", null ],
      [ "pin_cts", "group__group__hal__impl__hw__types.html#a8b5b034b002f4e0f8070705fe4e79cc0", null ],
      [ "pin_rts", "group__group__hal__impl__hw__types.html#a7620d3f9a57ea1299c92d34229d126c3", null ],
      [ "is_user_clock", "group__group__hal__impl__hw__types.html#a4628cb953d5faf964d15c6f4cbb0257b", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#aa8af046d01fd941ec033e42270fabe76", null ],
      [ "context", "group__group__hal__impl__hw__types.html#a697fcf1b077b74a133145af1c28ac2f5", null ],
      [ "config", "group__group__hal__impl__hw__types.html#ac3dcfd1fa7e11f70bab10f0576b7c290", null ],
      [ "irq_cause", "group__group__hal__impl__hw__types.html#a1f4bed812246890c7edf9827ab4a358d", null ],
      [ "saved_tx_hsiom", "group__group__hal__impl__hw__types.html#a008b02a1e8dacd618e91a354bde6e2e8", null ],
      [ "saved_rts_hsiom", "group__group__hal__impl__hw__types.html#a5f630a9fe03003133e35606897f92c0e", null ],
      [ "callback_data", "group__group__hal__impl__hw__types.html#af4a8e8f055a31f3ed62aec9a50bc7fec", null ]
    ] ],
    [ "cyhal_usb_dev_t", "group__group__hal__impl__hw__types.html#structcyhal__usb__dev__t", [
      [ "base", "group__group__hal__impl__hw__types.html#a3c6b9b0f98859eff39ca7f376c2282e0", null ],
      [ "context", "group__group__hal__impl__hw__types.html#a71e9161fcac9326df1d83e026ede4ada", null ],
      [ "resource", "group__group__hal__impl__hw__types.html#ac15fc6729389743f48c21e8c3e68e52e", null ],
      [ "pll_resource", "group__group__hal__impl__hw__types.html#a3a276cf5df1c7b0cea53fe44e30f53a5", null ],
      [ "clock", "group__group__hal__impl__hw__types.html#a21a1eddc7965f2c095ab57fdc891231d", null ],
      [ "shared_clock", "group__group__hal__impl__hw__types.html#a4dd7bc3028d5e9d7bc4da5bb076d83ef", null ],
      [ "pin_dp", "group__group__hal__impl__hw__types.html#a3101a7d5d01e3075613ca3e6b0b911c0", null ],
      [ "pin_dm", "group__group__hal__impl__hw__types.html#adeffee8b006f521b524e47d58e99d643", null ],
      [ "pm_callback", "group__group__hal__impl__hw__types.html#a2f6379dd475c270983fd096104b4aa21", null ],
      [ "rd_data", "group__group__hal__impl__hw__types.html#aa7973c6fcf336f6e2db8e0a123a7526d", null ],
      [ "rd_size", "group__group__hal__impl__hw__types.html#a2f579c1dfe2024e95f6a6d04a547796e", null ]
    ] ],
    [ "cyhal_wdt_t", "group__group__hal__impl__hw__types.html#structcyhal__wdt__t", [
      [ "placeholder", "group__group__hal__impl__hw__types.html#ab767afdb6a026741efa6e40457b3634e", null ]
    ] ],
    [ "CYHAL_ISR_PRIORITY_DEFAULT", "group__group__hal__impl__hw__types.html#gad822a466fc63847114add720ef84c83a", null ],
    [ "cyhal_system_callback_t", "group__group__hal__impl__hw__types.html#gacd10538852e7575732463b1f552b73d4", null ],
    [ "cyhal_source_t", "group__group__hal__impl__hw__types.html#gae6e4ea4100036d96d2efc006a3f69c9b", null ],
    [ "cyhal_resource_t", "group__group__hal__impl__hw__types.html#ga63b023ea7b5e73db59ddc0423c77975b", [
      [ "CYHAL_RSC_ADC", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba612bee18e656ba78a4ca633f8913249d", null ],
      [ "CYHAL_RSC_BLESS", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975bac10abc82f19b0a06a14a98e30a75b74d", null ],
      [ "CYHAL_RSC_CAN", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba1b775f74aa64eb24531a8669a6e25546", null ],
      [ "CYHAL_RSC_CLKPATH", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba59ccc8aae425c4249a6d44a211b9e13a", null ],
      [ "CYHAL_RSC_CLOCK", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba87c497b200dfbc0c5daf9617a89f4aa7", null ],
      [ "CYHAL_RSC_CRYPTO", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba25fa2cb684b519d6826067ce6d5d1afe", null ],
      [ "CYHAL_RSC_DAC", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975badad76bbe79d1dd504f44296427c38fe2", null ],
      [ "CYHAL_RSC_DMA", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975badd087e136a6661d42919ab8c145a395f", null ],
      [ "CYHAL_RSC_DW", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba1f6f00a8d9b758e0ea4a1ad8da3f5dd0", null ],
      [ "CYHAL_RSC_GPIO", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba5f4259788e0fc887772496df602d7549", null ],
      [ "CYHAL_RSC_I2S", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba6b93380724a9f1c695cf1f7a2e993a90", null ],
      [ "CYHAL_RSC_LCD", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba66e93a0a9834e5b16a3156d87ad993e4", null ],
      [ "CYHAL_RSC_LPCOMP", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba66b3400d94288b89d49def6194537bbe", null ],
      [ "CYHAL_RSC_LPTIMER", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba6408a108cf029e1e7b69c98ce86320e7", null ],
      [ "CYHAL_RSC_OPAMP", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba279192cbd81c5e71e5f4c3939d2e96a8", null ],
      [ "CYHAL_RSC_PDM", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba9123cdde61ea752aa7c362b3f9ca2814", null ],
      [ "CYHAL_RSC_SMIF", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba0b3f19bcd7698ff1293d1bcbccb31b77", null ],
      [ "CYHAL_RSC_RTC", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba65ea21d45fd38e900113b40eb3849236", null ],
      [ "CYHAL_RSC_SCB", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975bac1349fcb893be326bcd28ed254bd7a80", null ],
      [ "CYHAL_RSC_SDHC", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975baf35ab7112b4bcd054bdb0874a441155a", null ],
      [ "CYHAL_RSC_TCPWM", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975baa445456a2983f23d4be55613f2d09eb6", null ],
      [ "CYHAL_RSC_UDB", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975ba446a3390d41bd50e12d0b8f0c1715a53", null ],
      [ "CYHAL_RSC_USB", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975bae7778bb22af66e6dfb5c620d6c3c9108", null ],
      [ "CYHAL_RSC_INVALID", "group__group__hal__impl__hw__types.html#gga63b023ea7b5e73db59ddc0423c77975baf4c05e33bb994cc6a1d94bd301dcc988", null ]
    ] ],
    [ "cyhal_clock_block_t", "group__group__hal__impl__hw__types.html#ga1968e793be1599de10dec9e2d48f66d6", [
      [ "CYHAL_CLOCK_BLOCK_PERIPHERAL_8BIT", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6aa2ad8d65e54305da7b44a31098766bd0", null ],
      [ "CYHAL_CLOCK_BLOCK_PERIPHERAL_16BIT", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ad7a5eb2a34cbaf931bf1aaab6f844689", null ],
      [ "CYHAL_CLOCK_BLOCK_PERIPHERAL_16_5BIT", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a60962f330adb0e70b04db75c73f13b29", null ],
      [ "CYHAL_CLOCK_BLOCK_PERIPHERAL_24_5BIT", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ac1db33a815241ce8130e4d10c04ecd6f", null ],
      [ "CYHAL_CLOCK_BLOCK_IMO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6acebb813360b499d38240f371cb561d25", null ],
      [ "CYHAL_CLOCK_BLOCK_ECO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a569f417eb328cc49ce9273c67a2c156c", null ],
      [ "CYHAL_CLOCK_BLOCK_EXT", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ade160370a906f1fc83b35b16a6304ba1", null ],
      [ "CYHAL_CLOCK_BLOCK_ALTHF", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a74961f9f75b8f9db755f985bd232f214", null ],
      [ "CYHAL_CLOCK_BLOCK_ALTLF", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a980d225119a02ae8e8cd097377b2efb9", null ],
      [ "CYHAL_CLOCK_BLOCK_ILO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ad0a58702a8cbdca688e6e511ca1f07d8", null ],
      [ "CYHAL_CLOCK_BLOCK_PILO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a0d35ecdf452b2e4230ad24fa260d85b1", null ],
      [ "CYHAL_CLOCK_BLOCK_WCO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6af1e5156df9893f46f841c501a44e15a9", null ],
      [ "CYHAL_CLOCK_BLOCK_MFO", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a45e87fa3881a5f5f04152d86554ef472", null ],
      [ "CYHAL_CLOCK_BLOCK_PATHMUX", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a63443ebb72d1f623ec03192bd61ae6a3", null ],
      [ "CYHAL_CLOCK_BLOCK_FLL", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a3400dbd378560315601e80fafb271309", null ],
      [ "CYHAL_CLOCK_BLOCK_PLL", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a72bcc11752a8d6a317f3f0d007b243b5", null ],
      [ "CYHAL_CLOCK_BLOCK_LF", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a2e58d5538b15cb4e62710429dc12cf3b", null ],
      [ "CYHAL_CLOCK_BLOCK_MF", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ad12d89f860467b420f97751dd04177de", null ],
      [ "CYHAL_CLOCK_BLOCK_HF", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a1507c454c996026a54ff09cf67be74f5", null ],
      [ "CYHAL_CLOCK_BLOCK_PUMP", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a3e574cdce2f00e7445b8c8a722e11382", null ],
      [ "CYHAL_CLOCK_BLOCK_BAK", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a3f1e682cc21f1111141edca3b980a766", null ],
      [ "CYHAL_CLOCK_BLOCK_TIMER", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6af95128613464988bea875bcc3dde0f2a", null ],
      [ "CYHAL_CLOCK_BLOCK_ALT_SYS_TICK", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a461e7c674bf0783647f330e6e4ddec77", null ],
      [ "CYHAL_CLOCK_BLOCK_FAST", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6aa108a2f435cd0685525c0f6c0eb40efd", null ],
      [ "CYHAL_CLOCK_BLOCK_PERI", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6a758c14746dfb2b0c29e2cbb34debea58", null ],
      [ "CYHAL_CLOCK_BLOCK_SLOW", "group__group__hal__impl__hw__types.html#gga1968e793be1599de10dec9e2d48f66d6ac5aab6717e8f989277c9a25720907bfb", null ]
    ] ]
];