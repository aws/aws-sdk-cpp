/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
 * <p>Specifies an instance group and the number of nodes to add to
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddClusterNodeSpecification">AWS
 * API Reference</a></p>
 */
class AddClusterNodeSpecification {
 public:
  AWS_SAGEMAKER_API AddClusterNodeSpecification() = default;
  AWS_SAGEMAKER_API AddClusterNodeSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AddClusterNodeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the instance group to which you want to add nodes.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  AddClusterNodeSpecification& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes to add to the specified instance group. The total number
   * of nodes across all instance groups in a single request cannot exceed 50.</p>
   */
  inline int GetIncrementTargetCountBy() const { return m_incrementTargetCountBy; }
  inline bool IncrementTargetCountByHasBeenSet() const { return m_incrementTargetCountByHasBeenSet; }
  inline void SetIncrementTargetCountBy(int value) {
    m_incrementTargetCountByHasBeenSet = true;
    m_incrementTargetCountBy = value;
  }
  inline AddClusterNodeSpecification& WithIncrementTargetCountBy(int value) {
    SetIncrementTargetCountBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability zones in which to add nodes. Use this to target node
   * placement in specific availability zones within a flexible instance group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  AddClusterNodeSpecification& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  AddClusterNodeSpecification& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types to use when adding nodes. Use this to target specific
   * instance types within a flexible instance group.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  AddClusterNodeSpecification& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline AddClusterNodeSpecification& AddInstanceTypes(ClusterInstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceGroupName;

  int m_incrementTargetCountBy{0};

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<ClusterInstanceType> m_instanceTypes;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_incrementTargetCountByHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
