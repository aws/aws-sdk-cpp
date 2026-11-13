/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOnDrainTimeout.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Specifies how pods are evicted from an instance before it is patched with the
 * <code>DrainFirst</code> strategy. By default, evictions respect Kubernetes Pod
 * Disruption Budgets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterDrainPolicy">AWS
 * API Reference</a></p>
 */
class ClusterDrainPolicy {
 public:
  AWS_SAGEMAKER_API ClusterDrainPolicy() = default;
  AWS_SAGEMAKER_API ClusterDrainPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterDrainPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in seconds, to wait for the pods on an instance to drain.
   * Valid values are from 0 to 5400 (90 minutes). The default is 3600 (1 hour).</p>
   */
  inline int GetDrainTimeoutInSeconds() const { return m_drainTimeoutInSeconds; }
  inline bool DrainTimeoutInSecondsHasBeenSet() const { return m_drainTimeoutInSecondsHasBeenSet; }
  inline void SetDrainTimeoutInSeconds(int value) {
    m_drainTimeoutInSecondsHasBeenSet = true;
    m_drainTimeoutInSeconds = value;
  }
  inline ClusterDrainPolicy& WithDrainTimeoutInSeconds(int value) {
    SetDrainTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take if the pods on an instance don't drain within
   * <code>DrainTimeoutInSeconds</code>. The default is <code>Skip</code>.</p> <ul>
   * <li> <p> <code>Skip</code>: Doesn't patch the instance. The instance is
   * uncordoned and remains on the previous AMI version. This can leave the instance
   * group partially patched. You can then use UpdateClusterSoftware with the desired
   * ImageReleaseVersion to manually update the remaining instances.</p> </li> <li>
   * <p> <code>Force</code>: Deletes the remaining pods without respecting Pod
   * Disruption Budgets, and then patches the instance.</p> </li> </ul>
   */
  inline ClusterOnDrainTimeout GetOnDrainTimeout() const { return m_onDrainTimeout; }
  inline bool OnDrainTimeoutHasBeenSet() const { return m_onDrainTimeoutHasBeenSet; }
  inline void SetOnDrainTimeout(ClusterOnDrainTimeout value) {
    m_onDrainTimeoutHasBeenSet = true;
    m_onDrainTimeout = value;
  }
  inline ClusterDrainPolicy& WithOnDrainTimeout(ClusterOnDrainTimeout value) {
    SetOnDrainTimeout(value);
    return *this;
  }
  ///@}
 private:
  int m_drainTimeoutInSeconds{0};

  ClusterOnDrainTimeout m_onDrainTimeout{ClusterOnDrainTimeout::NOT_SET};
  bool m_drainTimeoutInSecondsHasBeenSet = false;
  bool m_onDrainTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
