/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
 * <p>Instance details for a recommendation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationInstanceDetail">AWS
 * API Reference</a></p>
 */
class AIRecommendationInstanceDetail {
 public:
  AWS_SAGEMAKER_API AIRecommendationInstanceDetail() = default;
  AWS_SAGEMAKER_API AIRecommendationInstanceDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationInstanceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommended instance type.</p>
   */
  inline AIRecommendationInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(AIRecommendationInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline AIRecommendationInstanceDetail& WithInstanceType(AIRecommendationInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended number of instances.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline AIRecommendationInstanceDetail& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of model copies per instance.</p>
   */
  inline int GetCopyCountPerInstance() const { return m_copyCountPerInstance; }
  inline bool CopyCountPerInstanceHasBeenSet() const { return m_copyCountPerInstanceHasBeenSet; }
  inline void SetCopyCountPerInstance(int value) {
    m_copyCountPerInstanceHasBeenSet = true;
    m_copyCountPerInstance = value;
  }
  inline AIRecommendationInstanceDetail& WithCopyCountPerInstance(int value) {
    SetCopyCountPerInstance(value);
    return *this;
  }
  ///@}
 private:
  AIRecommendationInstanceType m_instanceType{AIRecommendationInstanceType::NOT_SET};

  int m_instanceCount{0};

  int m_copyCountPerInstance{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_copyCountPerInstanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
