/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationInstanceDetail.h>

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
 * <p>Details about the model package in a recommendation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationModelDetails">AWS
 * API Reference</a></p>
 */
class AIRecommendationModelDetails {
 public:
  AWS_SAGEMAKER_API AIRecommendationModelDetails() = default;
  AWS_SAGEMAKER_API AIRecommendationModelDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationModelDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model package.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  AIRecommendationModelDetails& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the inference specification within the model package.</p>
   */
  inline const Aws::String& GetInferenceSpecificationName() const { return m_inferenceSpecificationName; }
  inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }
  template <typename InferenceSpecificationNameT = Aws::String>
  void SetInferenceSpecificationName(InferenceSpecificationNameT&& value) {
    m_inferenceSpecificationNameHasBeenSet = true;
    m_inferenceSpecificationName = std::forward<InferenceSpecificationNameT>(value);
  }
  template <typename InferenceSpecificationNameT = Aws::String>
  AIRecommendationModelDetails& WithInferenceSpecificationName(InferenceSpecificationNameT&& value) {
    SetInferenceSpecificationName(std::forward<InferenceSpecificationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance details for this recommendation, including instance type, count,
   * and model copies per instance.</p>
   */
  inline const Aws::Vector<AIRecommendationInstanceDetail>& GetInstanceDetails() const { return m_instanceDetails; }
  inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }
  template <typename InstanceDetailsT = Aws::Vector<AIRecommendationInstanceDetail>>
  void SetInstanceDetails(InstanceDetailsT&& value) {
    m_instanceDetailsHasBeenSet = true;
    m_instanceDetails = std::forward<InstanceDetailsT>(value);
  }
  template <typename InstanceDetailsT = Aws::Vector<AIRecommendationInstanceDetail>>
  AIRecommendationModelDetails& WithInstanceDetails(InstanceDetailsT&& value) {
    SetInstanceDetails(std::forward<InstanceDetailsT>(value));
    return *this;
  }
  template <typename InstanceDetailsT = AIRecommendationInstanceDetail>
  AIRecommendationModelDetails& AddInstanceDetails(InstanceDetailsT&& value) {
    m_instanceDetailsHasBeenSet = true;
    m_instanceDetails.emplace_back(std::forward<InstanceDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageArn;

  Aws::String m_inferenceSpecificationName;

  Aws::Vector<AIRecommendationInstanceDetail> m_instanceDetails;
  bool m_modelPackageArnHasBeenSet = false;
  bool m_inferenceSpecificationNameHasBeenSet = false;
  bool m_instanceDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
