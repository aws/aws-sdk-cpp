/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationEndpointsAssociation.h>
#include <aws/sagemaker/model/CapacityReservationHyperPodClustersAssociation.h>

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
 * <p>An association between one type of resource in your account and a SageMaker
 * Capacity Reservation. Each item contains exactly one member.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationResourceAssociation">AWS
 * API Reference</a></p>
 */
class CapacityReservationResourceAssociation {
 public:
  AWS_SAGEMAKER_API CapacityReservationResourceAssociation() = default;
  AWS_SAGEMAKER_API CapacityReservationResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The association between the SageMaker AI HyperPod clusters in your account
   * and the SageMaker Capacity Reservation. The association applies to all HyperPod
   * clusters in your account.</p>
   */
  inline const CapacityReservationHyperPodClustersAssociation& GetHyperPodClusters() const { return m_hyperPodClusters; }
  inline bool HyperPodClustersHasBeenSet() const { return m_hyperPodClustersHasBeenSet; }
  template <typename HyperPodClustersT = CapacityReservationHyperPodClustersAssociation>
  void SetHyperPodClusters(HyperPodClustersT&& value) {
    m_hyperPodClustersHasBeenSet = true;
    m_hyperPodClusters = std::forward<HyperPodClustersT>(value);
  }
  template <typename HyperPodClustersT = CapacityReservationHyperPodClustersAssociation>
  CapacityReservationResourceAssociation& WithHyperPodClusters(HyperPodClustersT&& value) {
    SetHyperPodClusters(std::forward<HyperPodClustersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The association between the SageMaker AI endpoints in your account and the
   * SageMaker Capacity Reservation, through one ML capacity reservation. The
   * response includes one item for each ML capacity reservation.</p>
   */
  inline const CapacityReservationEndpointsAssociation& GetEndpoints() const { return m_endpoints; }
  inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
  template <typename EndpointsT = CapacityReservationEndpointsAssociation>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = CapacityReservationEndpointsAssociation>
  CapacityReservationResourceAssociation& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityReservationHyperPodClustersAssociation m_hyperPodClusters;

  CapacityReservationEndpointsAssociation m_endpoints;
  bool m_hyperPodClustersHasBeenSet = false;
  bool m_endpointsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
