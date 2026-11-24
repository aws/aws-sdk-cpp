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
 * <p>The instance health check settings to configure on a compute node group when
 * you create it. Specify <code>healthMonitoring</code>,
 * <code>deepHealthChecks</code>, or both. You can't specify an empty object
 * (<code>{}</code>).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/InstanceHealthChecksRequest">AWS
 * API Reference</a></p>
 */
class InstanceHealthChecksRequest {
 public:
  AWS_PCS_API InstanceHealthChecksRequest() = default;
  AWS_PCS_API InstanceHealthChecksRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API InstanceHealthChecksRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The health monitoring settings. Health monitoring continuously checks running
   * instances for hardware and software faults. If you specify this object, it can't
   * be empty.</p>
   */
  inline const HealthMonitoring& GetHealthMonitoring() const { return m_healthMonitoring; }
  inline bool HealthMonitoringHasBeenSet() const { return m_healthMonitoringHasBeenSet; }
  template <typename HealthMonitoringT = HealthMonitoring>
  void SetHealthMonitoring(HealthMonitoringT&& value) {
    m_healthMonitoringHasBeenSet = true;
    m_healthMonitoring = std::forward<HealthMonitoringT>(value);
  }
  template <typename HealthMonitoringT = HealthMonitoring>
  InstanceHealthChecksRequest& WithHealthMonitoring(HealthMonitoringT&& value) {
    SetHealthMonitoring(std::forward<HealthMonitoringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deep health check settings. Deep health checks test the graphics
   * processing units (GPUs) of an instance each time it starts, including after a
   * reboot, before it accepts jobs. If you specify this object, it can't be
   * empty.</p>
   */
  inline const DeepHealthChecks& GetDeepHealthChecks() const { return m_deepHealthChecks; }
  inline bool DeepHealthChecksHasBeenSet() const { return m_deepHealthChecksHasBeenSet; }
  template <typename DeepHealthChecksT = DeepHealthChecks>
  void SetDeepHealthChecks(DeepHealthChecksT&& value) {
    m_deepHealthChecksHasBeenSet = true;
    m_deepHealthChecks = std::forward<DeepHealthChecksT>(value);
  }
  template <typename DeepHealthChecksT = DeepHealthChecks>
  InstanceHealthChecksRequest& WithDeepHealthChecks(DeepHealthChecksT&& value) {
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
