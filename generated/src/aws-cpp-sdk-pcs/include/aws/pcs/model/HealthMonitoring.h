/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/HealthMonitoringMode.h>
#include <aws/pcs/model/HealthMonitoringRepairAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The health monitoring settings of a compute node group. Health monitoring
 * continuously checks running instances for hardware and software
 * faults.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/HealthMonitoring">AWS
 * API Reference</a></p>
 */
class HealthMonitoring {
 public:
  AWS_PCS_API HealthMonitoring() = default;
  AWS_PCS_API HealthMonitoring(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API HealthMonitoring& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The health monitoring mode. This value is required when you specify
   * <code>healthMonitoring</code>. There is no default value. Valid values:</p> <ul>
   * <li> <p> <code>NONE</code> – Turns off health monitoring. You can't specify
   * <code>repairAction</code> with this mode.</p> </li> <li> <p>
   * <code>STANDARD</code> – Continuously checks running instances for hardware and
   * software faults.</p> </li> </ul>
   */
  inline HealthMonitoringMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(HealthMonitoringMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline HealthMonitoring& WithMode(HealthMonitoringMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that PCS takes when health monitoring finds a fault on an
   * instance. You can't specify this value when <code>mode</code> is
   * <code>NONE</code>. If you don't specify this value and <code>mode</code> isn't
   * <code>NONE</code>, PCS uses <code>AUTO</code>. <code>GetComputeNodeGroup</code>
   * doesn't return a <code>repairAction</code> that you didn't specify. Valid
   * values:</p> <ul> <li> <p> <code>AUTO</code> – PCS chooses the repair action
   * based on the fault.</p> </li> <li> <p> <code>REPLACE</code> – Replaces the
   * instance after running jobs finish.</p> </li> <li> <p> <code>ISOLATE</code> –
   * Stops new jobs on the instance and keeps the instance running until you
   * investigate.</p> </li> <li> <p> <code>NONE</code> – Records the fault in Slurm
   * and leaves the instance available for jobs.</p> </li> </ul>
   */
  inline HealthMonitoringRepairAction GetRepairAction() const { return m_repairAction; }
  inline bool RepairActionHasBeenSet() const { return m_repairActionHasBeenSet; }
  inline void SetRepairAction(HealthMonitoringRepairAction value) {
    m_repairActionHasBeenSet = true;
    m_repairAction = value;
  }
  inline HealthMonitoring& WithRepairAction(HealthMonitoringRepairAction value) {
    SetRepairAction(value);
    return *this;
  }
  ///@}
 private:
  HealthMonitoringMode m_mode{HealthMonitoringMode::NOT_SET};

  HealthMonitoringRepairAction m_repairAction{HealthMonitoringRepairAction::NOT_SET};
  bool m_modeHasBeenSet = false;
  bool m_repairActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
