# 2026-02-16T08:26:24.385001200
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis_ws")

platform = client.get_component(name="tmc_testbench")
status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

status = platform.build()

comp = client.get_component(name="hello_world")
comp.build()

domain = platform.get_domain(name="standalone_microblaze_0")

status = domain.regenerate()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = domain.set_config(option = "lib", param = "XILTIMER_sleep_timer", value = "axi_timer_0", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_en_interval_timer", value = "true", lib_name="xiltimer")

status = domain.set_config(option = "lib", param = "XILTIMER_tick_timer", value = "axi_timer_0", lib_name="xiltimer")

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp = client.get_component(name="xtmrctr_polled_example")
comp.build()

status = platform.build()

comp = client.get_component(name="hello_world")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp = client.get_component(name="xtmrctr_polled_example_1")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp = client.get_component(name="xtmrctr_low_level_example")
comp.build()

status = platform.build()

comp = client.get_component(name="hello_world")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

client.delete_component(name="xtmrctr_polled_example_1")

status = platform.build()

comp = client.get_component(name="xtmrctr_polled_example")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

comp = client.create_app_component(name="timer_test",platform = "$COMPONENT_LOCATION/../tmc_testbench/export/tmc_testbench/tmc_testbench.xpfm",domain = "standalone_microblaze_0")

status = platform.build()

status = platform.build()

comp = client.get_component(name="timer_test")
comp.build()

client.delete_component(name="hello_world")

client.delete_component(name="componentName")

status = platform.build()

comp.build()

vitis.dispose()

