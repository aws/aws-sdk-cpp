/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOperationScalingConfiguration.h>
#include <aws/sagemaker/model/ClusterOperationStatus.h>

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
 * <p>The scaling details for a single instance group that is affected by a cluster
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOperationScalingDetails">AWS
 * API Reference</a></p>
 */
class ClusterOperationScalingDetails {
 public:
  AWS_SAGEMAKER_API ClusterOperationScalingDetails() = default;
  AWS_SAGEMAKER_API ClusterOperationScalingDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterOperationScalingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the instance group being scaled.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  ClusterOperationScalingDetails& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the scaling operation for this instance group. Valid values are
   * <code>InProgress</code>, <code>Superseded</code>, or <code>Done</code>.</p>
   */
  inline ClusterOperationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ClusterOperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ClusterOperationScalingDetails& WithStatus(ClusterOperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration of the instance group before the scaling operation
   * was applied, including its current, target, and minimum instance counts.</p>
   */
  inline const ClusterOperationScalingConfiguration& GetOriginal() const { return m_original; }
  inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
  template <typename OriginalT = ClusterOperationScalingConfiguration>
  void SetOriginal(OriginalT&& value) {
    m_originalHasBeenSet = true;
    m_original = std::forward<OriginalT>(value);
  }
  template <typename OriginalT = ClusterOperationScalingConfiguration>
  ClusterOperationScalingDetails& WithOriginal(OriginalT&& value) {
    SetOriginal(std::forward<OriginalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired scaling configuration of the instance group for the scaling
   * operation, including its target and minimum instance counts.</p>
   */
  inline const ClusterOperationScalingConfiguration& GetDesired() const { return m_desired; }
  inline bool DesiredHasBeenSet() const { return m_desiredHasBeenSet; }
  template <typename DesiredT = ClusterOperationScalingConfiguration>
  void SetDesired(DesiredT&& value) {
    m_desiredHasBeenSet = true;
    m_desired = std::forward<DesiredT>(value);
  }
  template <typename DesiredT = ClusterOperationScalingConfiguration>
  ClusterOperationScalingDetails& WithDesired(DesiredT&& value) {
    SetDesired(std::forward<DesiredT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceGroupName;

  ClusterOperationStatus m_status{ClusterOperationStatus::NOT_SET};

  ClusterOperationScalingConfiguration m_original;

  ClusterOperationScalingConfiguration m_desired;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_originalHasBeenSet = false;
  bool m_desiredHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
