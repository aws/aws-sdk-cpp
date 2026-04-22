/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationConstraint.h>

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
 * <p>The performance targets for an AI recommendation job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationPerformanceTarget">AWS
 * API Reference</a></p>
 */
class AIRecommendationPerformanceTarget {
 public:
  AWS_SAGEMAKER_API AIRecommendationPerformanceTarget() = default;
  AWS_SAGEMAKER_API AIRecommendationPerformanceTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationPerformanceTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of performance constraints that define the optimization
   * objectives.</p>
   */
  inline const Aws::Vector<AIRecommendationConstraint>& GetConstraints() const { return m_constraints; }
  inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
  template <typename ConstraintsT = Aws::Vector<AIRecommendationConstraint>>
  void SetConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints = std::forward<ConstraintsT>(value);
  }
  template <typename ConstraintsT = Aws::Vector<AIRecommendationConstraint>>
  AIRecommendationPerformanceTarget& WithConstraints(ConstraintsT&& value) {
    SetConstraints(std::forward<ConstraintsT>(value));
    return *this;
  }
  template <typename ConstraintsT = AIRecommendationConstraint>
  AIRecommendationPerformanceTarget& AddConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints.emplace_back(std::forward<ConstraintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AIRecommendationConstraint> m_constraints;
  bool m_constraintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
