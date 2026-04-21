/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AICapacityReservationConfig.h>
#include <aws/sagemaker/model/AIRecommendationInstanceType.h>

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
 * <p>The compute resource specification for an AI recommendation
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationComputeSpec">AWS
 * API Reference</a></p>
 */
class AIRecommendationComputeSpec {
 public:
  AWS_SAGEMAKER_API AIRecommendationComputeSpec() = default;
  AWS_SAGEMAKER_API AIRecommendationComputeSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationComputeSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of instance types to consider for recommendations. You can specify
   * up to 3 instance types.</p>
   */
  inline const Aws::Vector<AIRecommendationInstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<AIRecommendationInstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<AIRecommendationInstanceType>>
  AIRecommendationComputeSpec& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline AIRecommendationComputeSpec& AddInstanceTypes(AIRecommendationInstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity reservation configuration.</p>
   */
  inline const AICapacityReservationConfig& GetCapacityReservationConfig() const { return m_capacityReservationConfig; }
  inline bool CapacityReservationConfigHasBeenSet() const { return m_capacityReservationConfigHasBeenSet; }
  template <typename CapacityReservationConfigT = AICapacityReservationConfig>
  void SetCapacityReservationConfig(CapacityReservationConfigT&& value) {
    m_capacityReservationConfigHasBeenSet = true;
    m_capacityReservationConfig = std::forward<CapacityReservationConfigT>(value);
  }
  template <typename CapacityReservationConfigT = AICapacityReservationConfig>
  AIRecommendationComputeSpec& WithCapacityReservationConfig(CapacityReservationConfigT&& value) {
    SetCapacityReservationConfig(std::forward<CapacityReservationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AIRecommendationInstanceType> m_instanceTypes;

  AICapacityReservationConfig m_capacityReservationConfig;
  bool m_instanceTypesHasBeenSet = false;
  bool m_capacityReservationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
