/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>A point-in-time snapshot of an instance group's scaling configuration. This
 * structure represents both the original configuration before the operation and
 * the desired configuration requested by the operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOperationScalingConfiguration">AWS
 * API Reference</a></p>
 */
class ClusterOperationScalingConfiguration {
 public:
  AWS_SAGEMAKER_API ClusterOperationScalingConfiguration() = default;
  AWS_SAGEMAKER_API ClusterOperationScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterOperationScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of instances that were in the instance group at the time of the
   * operation.</p>
   */
  inline int GetCurrentCount() const { return m_currentCount; }
  inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
  inline void SetCurrentCount(int value) {
    m_currentCountHasBeenSet = true;
    m_currentCount = value;
  }
  inline ClusterOperationScalingConfiguration& WithCurrentCount(int value) {
    SetCurrentCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target number of instances for the instance group.</p>
   */
  inline int GetTargetCount() const { return m_targetCount; }
  inline bool TargetCountHasBeenSet() const { return m_targetCountHasBeenSet; }
  inline void SetTargetCount(int value) {
    m_targetCountHasBeenSet = true;
    m_targetCount = value;
  }
  inline ClusterOperationScalingConfiguration& WithTargetCount(int value) {
    SetTargetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of instances that must be available in the instance group
   * of a HyperPod cluster before it transitions to <code>InService</code> status.
   * </p>
   */
  inline int GetMinCount() const { return m_minCount; }
  inline bool MinCountHasBeenSet() const { return m_minCountHasBeenSet; }
  inline void SetMinCount(int value) {
    m_minCountHasBeenSet = true;
    m_minCount = value;
  }
  inline ClusterOperationScalingConfiguration& WithMinCount(int value) {
    SetMinCount(value);
    return *this;
  }
  ///@}
 private:
  int m_currentCount{0};

  int m_targetCount{0};

  int m_minCount{0};
  bool m_currentCountHasBeenSet = false;
  bool m_targetCountHasBeenSet = false;
  bool m_minCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
