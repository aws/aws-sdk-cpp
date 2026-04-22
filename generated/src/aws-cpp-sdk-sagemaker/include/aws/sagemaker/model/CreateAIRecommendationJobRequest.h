/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIModelSource.h>
#include <aws/sagemaker/model/AIRecommendationComputeSpec.h>
#include <aws/sagemaker/model/AIRecommendationInferenceSpecification.h>
#include <aws/sagemaker/model/AIRecommendationOutputConfig.h>
#include <aws/sagemaker/model/AIRecommendationPerformanceTarget.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateAIRecommendationJobRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateAIRecommendationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAIRecommendationJob"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the AI recommendation job. The name must be unique within your
   * Amazon Web Services account in the current Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetAIRecommendationJobName() const { return m_aIRecommendationJobName; }
  inline bool AIRecommendationJobNameHasBeenSet() const { return m_aIRecommendationJobNameHasBeenSet; }
  template <typename AIRecommendationJobNameT = Aws::String>
  void SetAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    m_aIRecommendationJobNameHasBeenSet = true;
    m_aIRecommendationJobName = std::forward<AIRecommendationJobNameT>(value);
  }
  template <typename AIRecommendationJobNameT = Aws::String>
  CreateAIRecommendationJobRequest& WithAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    SetAIRecommendationJobName(std::forward<AIRecommendationJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the model to optimize. Specify the Amazon S3 location of the
   * model artifacts.</p>
   */
  inline const AIModelSource& GetModelSource() const { return m_modelSource; }
  inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
  template <typename ModelSourceT = AIModelSource>
  void SetModelSource(ModelSourceT&& value) {
    m_modelSourceHasBeenSet = true;
    m_modelSource = std::forward<ModelSourceT>(value);
  }
  template <typename ModelSourceT = AIModelSource>
  CreateAIRecommendationJobRequest& WithModelSource(ModelSourceT&& value) {
    SetModelSource(std::forward<ModelSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the recommendation job, including the Amazon S3
   * location for results and an optional model package group where the optimized
   * model is registered.</p>
   */
  inline const AIRecommendationOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = AIRecommendationOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AIRecommendationOutputConfig>
  CreateAIRecommendationJobRequest& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the AI workload configuration to
   * use for this recommendation job.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigIdentifier() const { return m_aIWorkloadConfigIdentifier; }
  inline bool AIWorkloadConfigIdentifierHasBeenSet() const { return m_aIWorkloadConfigIdentifierHasBeenSet; }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  void SetAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
    m_aIWorkloadConfigIdentifier = std::forward<AIWorkloadConfigIdentifierT>(value);
  }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  CreateAIRecommendationJobRequest& WithAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    SetAIWorkloadConfigIdentifier(std::forward<AIWorkloadConfigIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The performance targets for the recommendation job. Specify constraints on
   * metrics such as time to first token (<code>ttft-ms</code>),
   * <code>throughput</code>, or <code>cost</code>.</p>
   */
  inline const AIRecommendationPerformanceTarget& GetPerformanceTarget() const { return m_performanceTarget; }
  inline bool PerformanceTargetHasBeenSet() const { return m_performanceTargetHasBeenSet; }
  template <typename PerformanceTargetT = AIRecommendationPerformanceTarget>
  void SetPerformanceTarget(PerformanceTargetT&& value) {
    m_performanceTargetHasBeenSet = true;
    m_performanceTarget = std::forward<PerformanceTargetT>(value);
  }
  template <typename PerformanceTargetT = AIRecommendationPerformanceTarget>
  CreateAIRecommendationJobRequest& WithPerformanceTarget(PerformanceTargetT&& value) {
    SetPerformanceTarget(std::forward<PerformanceTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
   * AI to perform tasks on your behalf.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateAIRecommendationJobRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inference framework configuration. Specify the framework (such as LMI or
   * vLLM) for the recommendation job.</p>
   */
  inline const AIRecommendationInferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
  inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }
  template <typename InferenceSpecificationT = AIRecommendationInferenceSpecification>
  void SetInferenceSpecification(InferenceSpecificationT&& value) {
    m_inferenceSpecificationHasBeenSet = true;
    m_inferenceSpecification = std::forward<InferenceSpecificationT>(value);
  }
  template <typename InferenceSpecificationT = AIRecommendationInferenceSpecification>
  CreateAIRecommendationJobRequest& WithInferenceSpecification(InferenceSpecificationT&& value) {
    SetInferenceSpecification(std::forward<InferenceSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to allow model optimization techniques such as quantization,
   * speculative decoding, and kernel tuning. The default is <code>true</code>.</p>
   */
  inline bool GetOptimizeModel() const { return m_optimizeModel; }
  inline bool OptimizeModelHasBeenSet() const { return m_optimizeModelHasBeenSet; }
  inline void SetOptimizeModel(bool value) {
    m_optimizeModelHasBeenSet = true;
    m_optimizeModel = value;
  }
  inline CreateAIRecommendationJobRequest& WithOptimizeModel(bool value) {
    SetOptimizeModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute resource specification for the recommendation job. You can
   * specify up to 3 instance types to consider, and optionally provide capacity
   * reservation configuration.</p>
   */
  inline const AIRecommendationComputeSpec& GetComputeSpec() const { return m_computeSpec; }
  inline bool ComputeSpecHasBeenSet() const { return m_computeSpecHasBeenSet; }
  template <typename ComputeSpecT = AIRecommendationComputeSpec>
  void SetComputeSpec(ComputeSpecT&& value) {
    m_computeSpecHasBeenSet = true;
    m_computeSpec = std::forward<ComputeSpecT>(value);
  }
  template <typename ComputeSpecT = AIRecommendationComputeSpec>
  CreateAIRecommendationJobRequest& WithComputeSpec(ComputeSpecT&& value) {
    SetComputeSpec(std::forward<ComputeSpecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to Amazon Web Services resources to help you
   * categorize and organize them.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAIRecommendationJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAIRecommendationJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIRecommendationJobName;

  AIModelSource m_modelSource;

  AIRecommendationOutputConfig m_outputConfig;

  Aws::String m_aIWorkloadConfigIdentifier;

  AIRecommendationPerformanceTarget m_performanceTarget;

  Aws::String m_roleArn;

  AIRecommendationInferenceSpecification m_inferenceSpecification;

  bool m_optimizeModel{false};

  AIRecommendationComputeSpec m_computeSpec;

  Aws::Vector<Tag> m_tags;
  bool m_aIRecommendationJobNameHasBeenSet = false;
  bool m_modelSourceHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_aIWorkloadConfigIdentifierHasBeenSet = false;
  bool m_performanceTargetHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_inferenceSpecificationHasBeenSet = false;
  bool m_optimizeModelHasBeenSet = false;
  bool m_computeSpecHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
