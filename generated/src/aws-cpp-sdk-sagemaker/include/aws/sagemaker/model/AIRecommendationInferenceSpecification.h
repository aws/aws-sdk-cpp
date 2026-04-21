/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationInferenceFramework.h>

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
 * <p>The inference framework for an AI recommendation job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationInferenceSpecification">AWS
 * API Reference</a></p>
 */
class AIRecommendationInferenceSpecification {
 public:
  AWS_SAGEMAKER_API AIRecommendationInferenceSpecification() = default;
  AWS_SAGEMAKER_API AIRecommendationInferenceSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationInferenceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The inference framework. Valid values are <code>LMI</code> and
   * <code>VLLM</code>.</p>
   */
  inline AIRecommendationInferenceFramework GetFramework() const { return m_framework; }
  inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
  inline void SetFramework(AIRecommendationInferenceFramework value) {
    m_frameworkHasBeenSet = true;
    m_framework = value;
  }
  inline AIRecommendationInferenceSpecification& WithFramework(AIRecommendationInferenceFramework value) {
    SetFramework(value);
    return *this;
  }
  ///@}
 private:
  AIRecommendationInferenceFramework m_framework{AIRecommendationInferenceFramework::NOT_SET};
  bool m_frameworkHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
