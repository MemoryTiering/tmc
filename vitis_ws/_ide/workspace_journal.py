# 2026-02-18T13:30:15.468044400
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis_ws")

platform = client.get_component(name="tmc_testbench")
status = platform.update_hw(hw_design = "$COMPONENT_LOCATION/../../tmc_testbench/tmc_tbp.xsa")

