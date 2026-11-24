/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/DeepHealthCheckOnStart.h>

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
 * <p>The deep health check settings of a compute node group. Deep health checks
 * test the graphics processing units (GPUs) of an instance each time it starts,
 * including after a reboot, before it accepts jobs. Deep health checks with a
 * profile other than <code>NONE</code> require instance types with NVIDIA
 * GPUs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/DeepHealthChecks">AWS
 * API Reference</a></p>
 */
class DeepHealthChecks {
 public:
  AWS_PCS_API DeepHealthChecks() = default;
  AWS_PCS_API DeepHealthChecks(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API DeepHealthChecks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deep health check to run each time an instance starts, including after a
   * reboot, before the compute node accepts jobs. If the check fails after a reboot,
   * PCS takes the same <code>repairAction</code> as at launch. For example, with
   * <code>REPLACE</code>, PCS replaces the instance instead of returning it to
   * service. If the compute node group has scripts in the
   * <code>nodeBootstrapped</code> stage of <code>nodeLifecycleActions</code>, the
   * deep health check runs after those scripts. If a script fails and its
   * <code>onError</code> setting terminates the compute node, the deep health check
   * doesn't run. This value is required when you specify
   * <code>deepHealthChecks</code>.</p>
   */
  inline const DeepHealthCheckOnStart& GetOnStart() const { return m_onStart; }
  inline bool OnStartHasBeenSet() const { return m_onStartHasBeenSet; }
  template <typename OnStartT = DeepHealthCheckOnStart>
  void SetOnStart(OnStartT&& value) {
    m_onStartHasBeenSet = true;
    m_onStart = std::forward<OnStartT>(value);
  }
  template <typename OnStartT = DeepHealthCheckOnStart>
  DeepHealthChecks& WithOnStart(OnStartT&& value) {
    SetOnStart(std::forward<OnStartT>(value));
    return *this;
  }
  ///@}
 private:
  DeepHealthCheckOnStart m_onStart;
  bool m_onStartHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
