/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Recommended instance types for inference with a SageMaker
 * model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SageMakerModelRecommendation">AWS
 * API Reference</a></p>
 */
class SageMakerModelRecommendation {
 public:
  AWS_MARKETPLACEDISCOVERY_API SageMakerModelRecommendation() = default;
  AWS_MARKETPLACEDISCOVERY_API SageMakerModelRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SageMakerModelRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommended instance type for batch inference.</p>
   */
  inline const Aws::String& GetRecommendedBatchTransformInstanceType() const { return m_recommendedBatchTransformInstanceType; }
  inline bool RecommendedBatchTransformInstanceTypeHasBeenSet() const { return m_recommendedBatchTransformInstanceTypeHasBeenSet; }
  template <typename RecommendedBatchTransformInstanceTypeT = Aws::String>
  void SetRecommendedBatchTransformInstanceType(RecommendedBatchTransformInstanceTypeT&& value) {
    m_recommendedBatchTransformInstanceTypeHasBeenSet = true;
    m_recommendedBatchTransformInstanceType = std::forward<RecommendedBatchTransformInstanceTypeT>(value);
  }
  template <typename RecommendedBatchTransformInstanceTypeT = Aws::String>
  SageMakerModelRecommendation& WithRecommendedBatchTransformInstanceType(RecommendedBatchTransformInstanceTypeT&& value) {
    SetRecommendedBatchTransformInstanceType(std::forward<RecommendedBatchTransformInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended instance type for real-time inference.</p>
   */
  inline const Aws::String& GetRecommendedRealtimeInferenceInstanceType() const { return m_recommendedRealtimeInferenceInstanceType; }
  inline bool RecommendedRealtimeInferenceInstanceTypeHasBeenSet() const { return m_recommendedRealtimeInferenceInstanceTypeHasBeenSet; }
  template <typename RecommendedRealtimeInferenceInstanceTypeT = Aws::String>
  void SetRecommendedRealtimeInferenceInstanceType(RecommendedRealtimeInferenceInstanceTypeT&& value) {
    m_recommendedRealtimeInferenceInstanceTypeHasBeenSet = true;
    m_recommendedRealtimeInferenceInstanceType = std::forward<RecommendedRealtimeInferenceInstanceTypeT>(value);
  }
  template <typename RecommendedRealtimeInferenceInstanceTypeT = Aws::String>
  SageMakerModelRecommendation& WithRecommendedRealtimeInferenceInstanceType(RecommendedRealtimeInferenceInstanceTypeT&& value) {
    SetRecommendedRealtimeInferenceInstanceType(std::forward<RecommendedRealtimeInferenceInstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedBatchTransformInstanceType;

  Aws::String m_recommendedRealtimeInferenceInstanceType;
  bool m_recommendedBatchTransformInstanceTypeHasBeenSet = false;
  bool m_recommendedRealtimeInferenceInstanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
