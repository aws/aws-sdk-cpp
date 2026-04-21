/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationMetric.h>

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
 * <p>A performance constraint for an AI recommendation job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationConstraint">AWS
 * API Reference</a></p>
 */
class AIRecommendationConstraint {
 public:
  AWS_SAGEMAKER_API AIRecommendationConstraint() = default;
  AWS_SAGEMAKER_API AIRecommendationConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The performance metric. Valid values are <code>ttft-ms</code> (time to first
   * token in milliseconds), <code>throughput</code>, and <code>cost</code>.</p>
   */
  inline AIRecommendationMetric GetMetric() const { return m_metric; }
  inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
  inline void SetMetric(AIRecommendationMetric value) {
    m_metricHasBeenSet = true;
    m_metric = value;
  }
  inline AIRecommendationConstraint& WithMetric(AIRecommendationMetric value) {
    SetMetric(value);
    return *this;
  }
  ///@}
 private:
  AIRecommendationMetric m_metric{AIRecommendationMetric::NOT_SET};
  bool m_metricHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
