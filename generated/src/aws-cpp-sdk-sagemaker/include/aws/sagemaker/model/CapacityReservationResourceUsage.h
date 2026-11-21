/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationResourceType.h>

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
 * <p>The instances from a SageMaker Capacity Reservation that one resource type
 * uses in an account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationResourceUsage">AWS
 * API Reference</a></p>
 */
class CapacityReservationResourceUsage {
 public:
  AWS_SAGEMAKER_API CapacityReservationResourceUsage() = default;
  AWS_SAGEMAKER_API CapacityReservationResourceUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationResourceUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of resource that uses the instances. Valid values:</p> <dl>
   * <dt>HyperPodClusters</dt> <dd> <p>SageMaker AI HyperPod clusters.</p> </dd>
   * <dt>Endpoints</dt> <dd> <p>SageMaker AI endpoints.</p> </dd> </dl>
   */
  inline CapacityReservationResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(CapacityReservationResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline CapacityReservationResourceUsage& WithResourceType(CapacityReservationResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances from the SageMaker Capacity Reservation that are in
   * use.</p>
   */
  inline int GetInUseInstanceCount() const { return m_inUseInstanceCount; }
  inline bool InUseInstanceCountHasBeenSet() const { return m_inUseInstanceCountHasBeenSet; }
  inline void SetInUseInstanceCount(int value) {
    m_inUseInstanceCountHasBeenSet = true;
    m_inUseInstanceCount = value;
  }
  inline CapacityReservationResourceUsage& WithInUseInstanceCount(int value) {
    SetInUseInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  CapacityReservationResourceType m_resourceType{CapacityReservationResourceType::NOT_SET};

  int m_inUseInstanceCount{0};
  bool m_resourceTypeHasBeenSet = false;
  bool m_inUseInstanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
