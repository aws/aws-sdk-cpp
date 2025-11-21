/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOnDemandOptions.h>
#include <aws/sagemaker/model/ClusterSpotOptions.h>

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
 * <p>Defines the instance capacity requirements for an instance group, including
 * configurations for both Spot and On-Demand capacity types. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterCapacityRequirements">AWS
 * API Reference</a></p>
 */
class ClusterCapacityRequirements {
 public:
  AWS_SAGEMAKER_API ClusterCapacityRequirements() = default;
  AWS_SAGEMAKER_API ClusterCapacityRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterCapacityRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration options specific to Spot instances.</p>
   */
  inline const ClusterSpotOptions& GetSpot() const { return m_spot; }
  inline bool SpotHasBeenSet() const { return m_spotHasBeenSet; }
  template <typename SpotT = ClusterSpotOptions>
  void SetSpot(SpotT&& value) {
    m_spotHasBeenSet = true;
    m_spot = std::forward<SpotT>(value);
  }
  template <typename SpotT = ClusterSpotOptions>
  ClusterCapacityRequirements& WithSpot(SpotT&& value) {
    SetSpot(std::forward<SpotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration options specific to On-Demand instances.</p>
   */
  inline const ClusterOnDemandOptions& GetOnDemand() const { return m_onDemand; }
  inline bool OnDemandHasBeenSet() const { return m_onDemandHasBeenSet; }
  template <typename OnDemandT = ClusterOnDemandOptions>
  void SetOnDemand(OnDemandT&& value) {
    m_onDemandHasBeenSet = true;
    m_onDemand = std::forward<OnDemandT>(value);
  }
  template <typename OnDemandT = ClusterOnDemandOptions>
  ClusterCapacityRequirements& WithOnDemand(OnDemandT&& value) {
    SetOnDemand(std::forward<OnDemandT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterSpotOptions m_spot;
  bool m_spotHasBeenSet = false;

  ClusterOnDemandOptions m_onDemand;
  bool m_onDemandHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
