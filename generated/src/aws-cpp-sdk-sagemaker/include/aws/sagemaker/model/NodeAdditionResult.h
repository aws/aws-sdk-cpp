/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInstanceStatus.h>
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
 * <p>Information about a node that was successfully added to the
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NodeAdditionResult">AWS
 * API Reference</a></p>
 */
class NodeAdditionResult {
 public:
  AWS_SAGEMAKER_API NodeAdditionResult() = default;
  AWS_SAGEMAKER_API NodeAdditionResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API NodeAdditionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier assigned to the node that can be used to track its
   * provisioning status through the <code>DescribeClusterNode</code> operation.</p>
   */
  inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
  inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
  template <typename NodeLogicalIdT = Aws::String>
  void SetNodeLogicalId(NodeLogicalIdT&& value) {
    m_nodeLogicalIdHasBeenSet = true;
    m_nodeLogicalId = std::forward<NodeLogicalIdT>(value);
  }
  template <typename NodeLogicalIdT = Aws::String>
  NodeAdditionResult& WithNodeLogicalId(NodeLogicalIdT&& value) {
    SetNodeLogicalId(std::forward<NodeLogicalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the instance group to which the node was added.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  NodeAdditionResult& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the node. Possible values include <code>Pending</code>,
   * <code>Running</code>, <code>Failed</code>, <code>ShuttingDown</code>,
   * <code>SystemUpdating</code>, <code>DeepHealthCheckInProgress</code>, and
   * <code>NotFound</code>.</p>
   */
  inline ClusterInstanceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ClusterInstanceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NodeAdditionResult& WithStatus(ClusterInstanceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability zones associated with the successfully added node.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  NodeAdditionResult& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  NodeAdditionResult& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types associated with the successfully added node.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  NodeAdditionResult& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline NodeAdditionResult& AddInstanceTypes(ClusterInstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeLogicalId;

  Aws::String m_instanceGroupName;

  ClusterInstanceStatus m_status{ClusterInstanceStatus::NOT_SET};

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<ClusterInstanceType> m_instanceTypes;
  bool m_nodeLogicalIdHasBeenSet = false;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
