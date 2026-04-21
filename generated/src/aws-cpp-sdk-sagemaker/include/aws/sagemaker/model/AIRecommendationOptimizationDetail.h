/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationOptimizationType.h>

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
 * <p>Details about an optimization technique applied in a
 * recommendation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationOptimizationDetail">AWS
 * API Reference</a></p>
 */
class AIRecommendationOptimizationDetail {
 public:
  AWS_SAGEMAKER_API AIRecommendationOptimizationDetail() = default;
  AWS_SAGEMAKER_API AIRecommendationOptimizationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationOptimizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of optimization. Valid values are <code>SpeculativeDecoding</code>
   * and <code>KernelTuning</code>.</p>
   */
  inline AIRecommendationOptimizationType GetOptimizationType() const { return m_optimizationType; }
  inline bool OptimizationTypeHasBeenSet() const { return m_optimizationTypeHasBeenSet; }
  inline void SetOptimizationType(AIRecommendationOptimizationType value) {
    m_optimizationTypeHasBeenSet = true;
    m_optimizationType = value;
  }
  inline AIRecommendationOptimizationDetail& WithOptimizationType(AIRecommendationOptimizationType value) {
    SetOptimizationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of configuration parameters for the optimization technique.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOptimizationConfig() const { return m_optimizationConfig; }
  inline bool OptimizationConfigHasBeenSet() const { return m_optimizationConfigHasBeenSet; }
  template <typename OptimizationConfigT = Aws::Map<Aws::String, Aws::String>>
  void SetOptimizationConfig(OptimizationConfigT&& value) {
    m_optimizationConfigHasBeenSet = true;
    m_optimizationConfig = std::forward<OptimizationConfigT>(value);
  }
  template <typename OptimizationConfigT = Aws::Map<Aws::String, Aws::String>>
  AIRecommendationOptimizationDetail& WithOptimizationConfig(OptimizationConfigT&& value) {
    SetOptimizationConfig(std::forward<OptimizationConfigT>(value));
    return *this;
  }
  template <typename OptimizationConfigKeyT = Aws::String, typename OptimizationConfigValueT = Aws::String>
  AIRecommendationOptimizationDetail& AddOptimizationConfig(OptimizationConfigKeyT&& key, OptimizationConfigValueT&& value) {
    m_optimizationConfigHasBeenSet = true;
    m_optimizationConfig.emplace(std::forward<OptimizationConfigKeyT>(key), std::forward<OptimizationConfigValueT>(value));
    return *this;
  }
  ///@}
 private:
  AIRecommendationOptimizationType m_optimizationType{AIRecommendationOptimizationType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_optimizationConfig;
  bool m_optimizationTypeHasBeenSet = false;
  bool m_optimizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
