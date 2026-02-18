# 2026-02-16T10:43:42.365224300
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis_ws")

platform = client.get_component(name="tmc_testbench")
status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

domain = platform.get_domain(name="standalone_microblaze_0")

status = domain.regenerate()

status = domain.set_config(option = "lib", param = "XILTIMER_en_interval_timer", value = "true", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_sleep_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_sleep_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_sleep_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_tick_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.regenerate()

status = domain.set_config(option = "lib", param = "XILTIMER_tick_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_sleep_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_tick_timer", value = "None", lib_name="xiltimer")

status = platform.build()

comp = client.get_component(name="timer_test")
comp.build()

comp = client.create_app_component(name="latency_test",platform = "$COMPONENT_LOCATION/../tmc_testbench/export/tmc_testbench/tmc_testbench.xpfm",domain = "standalone_microblaze_0")

status = platform.build()

comp = client.get_component(name="latency_test")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

vitis.dispose()

