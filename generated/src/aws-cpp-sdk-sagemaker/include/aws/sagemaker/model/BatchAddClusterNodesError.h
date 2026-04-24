/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchAddClusterNodesErrorCode.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>

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
 * <p>Information about an error that occurred during the node addition
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchAddClusterNodesError">AWS
 * API Reference</a></p>
 */
class BatchAddClusterNodesError {
 public:
  AWS_SAGEMAKER_API BatchAddClusterNodesError() = default;
  AWS_SAGEMAKER_API BatchAddClusterNodesError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BatchAddClusterNodesError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the instance group for which the error occurred.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  BatchAddClusterNodesError& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code associated with the failure. Possible values include
   * <code>InstanceGroupNotFound</code> and
   * <code>InvalidInstanceGroupState</code>.</p>
   */
  inline BatchAddClusterNodesErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchAddClusterNodesErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchAddClusterNodesError& WithErrorCode(BatchAddClusterNodesErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes that failed to be added to the specified instance
   * group.</p>
   */
  inline int GetFailedCount() const { return m_failedCount; }
  inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
  inline void SetFailedCount(int value) {
    m_failedCountHasBeenSet = true;
    m_failedCount = value;
  }
  inline BatchAddClusterNodesError& WithFailedCount(int value) {
    SetFailedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability zones associated with the failed node addition request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  BatchAddClusterNodesError& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  BatchAddClusterNodesError& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types associated with the failed node addition request.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  BatchAddClusterNodesError& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline BatchAddClusterNodesError& AddInstanceTypes(ClusterInstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive message providing additional details about the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchAddClusterNodesError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceGroupName;

  BatchAddClusterNodesErrorCode m_errorCode{BatchAddClusterNodesErrorCode::NOT_SET};

  int m_failedCount{0};

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<ClusterInstanceType> m_instanceTypes;

  Aws::String m_message;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_failedCountHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
