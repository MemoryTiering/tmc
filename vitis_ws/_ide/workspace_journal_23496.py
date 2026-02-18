# 2026-02-14T18:23:11.138469600
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis_ws")

platform = client.create_platform_component(name = "tmc_testbench",hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa",os = "standalone",cpu = "microblaze_0",domain_name = "standalone_microblaze_0",compiler = "gcc")

comp = client.create_app_component(name="hello_world",platform = "$COMPONENT_LOCATION/../tmc_testbench/export/tmc_testbench/tmc_testbench.xpfm",domain = "standalone_microblaze_0",template = "hello_world")

platform = client.get_component(name="tmc_testbench")
status = platform.build()

comp = client.get_component(name="hello_world")
comp.build()

status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

status = platform.build()

comp.build()

status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

vitis.dispose()

