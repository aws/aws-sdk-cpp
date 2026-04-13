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
 * <p>Recommended instance types for training and inference with a SageMaker
 * algorithm.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SageMakerAlgorithmRecommendation">AWS
 * API Reference</a></p>
 */
class SageMakerAlgorithmRecommendation {
 public:
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmRecommendation() = default;
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SageMakerAlgorithmRecommendation& WithRecommendedBatchTransformInstanceType(RecommendedBatchTransformInstanceTypeT&& value) {
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
  SageMakerAlgorithmRecommendation& WithRecommendedRealtimeInferenceInstanceType(RecommendedRealtimeInferenceInstanceTypeT&& value) {
    SetRecommendedRealtimeInferenceInstanceType(std::forward<RecommendedRealtimeInferenceInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended instance type for training.</p>
   */
  inline const Aws::String& GetRecommendedTrainingInstanceType() const { return m_recommendedTrainingInstanceType; }
  inline bool RecommendedTrainingInstanceTypeHasBeenSet() const { return m_recommendedTrainingInstanceTypeHasBeenSet; }
  template <typename RecommendedTrainingInstanceTypeT = Aws::String>
  void SetRecommendedTrainingInstanceType(RecommendedTrainingInstanceTypeT&& value) {
    m_recommendedTrainingInstanceTypeHasBeenSet = true;
    m_recommendedTrainingInstanceType = std::forward<RecommendedTrainingInstanceTypeT>(value);
  }
  template <typename RecommendedTrainingInstanceTypeT = Aws::String>
  SageMakerAlgorithmRecommendation& WithRecommendedTrainingInstanceType(RecommendedTrainingInstanceTypeT&& value) {
    SetRecommendedTrainingInstanceType(std::forward<RecommendedTrainingInstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedBatchTransformInstanceType;

  Aws::String m_recommendedRealtimeInferenceInstanceType;

  Aws::String m_recommendedTrainingInstanceType;
  bool m_recommendedBatchTransformInstanceTypeHasBeenSet = false;
  bool m_recommendedRealtimeInferenceInstanceTypeHasBeenSet = false;
  bool m_recommendedTrainingInstanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
