/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/DeepHealthChecks.h>
#include <aws/pcs/model/HealthMonitoring.h>

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
 * <p>The instance health check settings of a compute node group. Instance health
 * checks detect faults on instances in the compute node group and respond with the
 * repair action that you choose.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/InstanceHealthChecks">AWS
 * API Reference</a></p>
 */
class InstanceHealthChecks {
 public:
  AWS_PCS_API InstanceHealthChecks() = default;
  AWS_PCS_API InstanceHealthChecks(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API InstanceHealthChecks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The health monitoring settings. Health monitoring continuously checks running
   * instances for hardware and software faults.</p>
   */
  inline const HealthMonitoring& GetHealthMonitoring() const { return m_healthMonitoring; }
  inline bool HealthMonitoringHasBeenSet() const { return m_healthMonitoringHasBeenSet; }
  template <typename HealthMonitoringT = HealthMonitoring>
  void SetHealthMonitoring(HealthMonitoringT&& value) {
    m_healthMonitoringHasBeenSet = true;
    m_healthMonitoring = std::forward<HealthMonitoringT>(value);
  }
  template <typename HealthMonitoringT = HealthMonitoring>
  InstanceHealthChecks& WithHealthMonitoring(HealthMonitoringT&& value) {
    SetHealthMonitoring(std::forward<HealthMonitoringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deep health check settings. Deep health checks test the graphics
   * processing units (GPUs) of an instance each time it starts, including after a
   * reboot, before it accepts jobs.</p>
   */
  inline const DeepHealthChecks& GetDeepHealthChecks() const { return m_deepHealthChecks; }
  inline bool DeepHealthChecksHasBeenSet() const { return m_deepHealthChecksHasBeenSet; }
  template <typename DeepHealthChecksT = DeepHealthChecks>
  void SetDeepHealthChecks(DeepHealthChecksT&& value) {
    m_deepHealthChecksHasBeenSet = true;
    m_deepHealthChecks = std::forward<DeepHealthChecksT>(value);
  }
  template <typename DeepHealthChecksT = DeepHealthChecks>
  InstanceHealthChecks& WithDeepHealthChecks(DeepHealthChecksT&& value) {
    SetDeepHealthChecks(std::forward<DeepHealthChecksT>(value));
    return *this;
  }
  ///@}
 private:
  HealthMonitoring m_healthMonitoring;

  DeepHealthChecks m_deepHealthChecks;
  bool m_healthMonitoringHasBeenSet = false;
  bool m_deepHealthChecksHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
