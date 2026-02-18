# 2026-02-15T20:39:36.514381900
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis_ws")

platform = client.get_component(name="tmc_testbench")
status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

status = platform.build()

comp = client.get_component(name="hello_world")
comp.build()

status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

status = platform.build()

comp.build()

