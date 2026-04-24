/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIModelSource.h>
#include <aws/sagemaker/model/AIRecommendation.h>
#include <aws/sagemaker/model/AIRecommendationComputeSpec.h>
#include <aws/sagemaker/model/AIRecommendationInferenceSpecification.h>
#include <aws/sagemaker/model/AIRecommendationJobStatus.h>
#include <aws/sagemaker/model/AIRecommendationOutputResult.h>
#include <aws/sagemaker/model/AIRecommendationPerformanceTarget.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeAIRecommendationJobResult {
 public:
  AWS_SAGEMAKER_API DescribeAIRecommendationJobResult() = default;
  AWS_SAGEMAKER_API DescribeAIRecommendationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeAIRecommendationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the AI recommendation job.</p>
   */
  inline const Aws::String& GetAIRecommendationJobName() const { return m_aIRecommendationJobName; }
  template <typename AIRecommendationJobNameT = Aws::String>
  void SetAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    m_aIRecommendationJobNameHasBeenSet = true;
    m_aIRecommendationJobName = std::forward<AIRecommendationJobNameT>(value);
  }
  template <typename AIRecommendationJobNameT = Aws::String>
  DescribeAIRecommendationJobResult& WithAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    SetAIRecommendationJobName(std::forward<AIRecommendationJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI recommendation job.</p>
   */
  inline const Aws::String& GetAIRecommendationJobArn() const { return m_aIRecommendationJobArn; }
  template <typename AIRecommendationJobArnT = Aws::String>
  void SetAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    m_aIRecommendationJobArnHasBeenSet = true;
    m_aIRecommendationJobArn = std::forward<AIRecommendationJobArnT>(value);
  }
  template <typename AIRecommendationJobArnT = Aws::String>
  DescribeAIRecommendationJobResult& WithAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    SetAIRecommendationJobArn(std::forward<AIRecommendationJobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the AI recommendation job.</p>
   */
  inline AIRecommendationJobStatus GetAIRecommendationJobStatus() const { return m_aIRecommendationJobStatus; }
  inline void SetAIRecommendationJobStatus(AIRecommendationJobStatus value) {
    m_aIRecommendationJobStatusHasBeenSet = true;
    m_aIRecommendationJobStatus = value;
  }
  inline DescribeAIRecommendationJobResult& WithAIRecommendationJobStatus(AIRecommendationJobStatus value) {
    SetAIRecommendationJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the recommendation job failed, the reason it failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  DescribeAIRecommendationJobResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the model that was analyzed.</p>
   */
  inline const AIModelSource& GetModelSource() const { return m_modelSource; }
  template <typename ModelSourceT = AIModelSource>
  void SetModelSource(ModelSourceT&& value) {
    m_modelSourceHasBeenSet = true;
    m_modelSource = std::forward<ModelSourceT>(value);
  }
  template <typename ModelSourceT = AIModelSource>
  DescribeAIRecommendationJobResult& WithModelSource(ModelSourceT&& value) {
    SetModelSource(std::forward<ModelSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the recommendation job.</p>
   */
  inline const AIRecommendationOutputResult& GetOutputConfig() const { return m_outputConfig; }
  template <typename OutputConfigT = AIRecommendationOutputResult>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AIRecommendationOutputResult>
  DescribeAIRecommendationJobResult& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inference framework configuration.</p>
   */
  inline const AIRecommendationInferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
  template <typename InferenceSpecificationT = AIRecommendationInferenceSpecification>
  void SetInferenceSpecification(InferenceSpecificationT&& value) {
    m_inferenceSpecificationHasBeenSet = true;
    m_inferenceSpecification = std::forward<InferenceSpecificationT>(value);
  }
  template <typename InferenceSpecificationT = AIRecommendationInferenceSpecification>
  DescribeAIRecommendationJobResult& WithInferenceSpecification(InferenceSpecificationT&& value) {
    SetInferenceSpecification(std::forward<InferenceSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the AI workload configuration used
   * for this recommendation job.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigIdentifier() const { return m_aIWorkloadConfigIdentifier; }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  void SetAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
    m_aIWorkloadConfigIdentifier = std::forward<AIWorkloadConfigIdentifierT>(value);
  }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  DescribeAIRecommendationJobResult& WithAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    SetAIWorkloadConfigIdentifier(std::forward<AIWorkloadConfigIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether model optimization techniques were allowed.</p>
   */
  inline bool GetOptimizeModel() const { return m_optimizeModel; }
  inline void SetOptimizeModel(bool value) {
    m_optimizeModelHasBeenSet = true;
    m_optimizeModel = value;
  }
  inline DescribeAIRecommendationJobResult& WithOptimizeModel(bool value) {
    SetOptimizeModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The performance targets specified for the recommendation job.</p>
   */
  inline const AIRecommendationPerformanceTarget& GetPerformanceTarget() const { return m_performanceTarget; }
  template <typename PerformanceTargetT = AIRecommendationPerformanceTarget>
  void SetPerformanceTarget(PerformanceTargetT&& value) {
    m_performanceTargetHasBeenSet = true;
    m_performanceTarget = std::forward<PerformanceTargetT>(value);
  }
  template <typename PerformanceTargetT = AIRecommendationPerformanceTarget>
  DescribeAIRecommendationJobResult& WithPerformanceTarget(PerformanceTargetT&& value) {
    SetPerformanceTarget(std::forward<PerformanceTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of optimization recommendations generated by the job. Each
   * recommendation includes optimization details, deployment configuration, expected
   * performance metrics, and the associated benchmark job ARN.</p>
   */
  inline const Aws::Vector<AIRecommendation>& GetRecommendations() const { return m_recommendations; }
  template <typename RecommendationsT = Aws::Vector<AIRecommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<AIRecommendation>>
  DescribeAIRecommendationJobResult& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = AIRecommendation>
  DescribeAIRecommendationJobResult& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used by the recommendation
   * job.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  DescribeAIRecommendationJobResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute resource specification for the recommendation job.</p>
   */
  inline const AIRecommendationComputeSpec& GetComputeSpec() const { return m_computeSpec; }
  template <typename ComputeSpecT = AIRecommendationComputeSpec>
  void SetComputeSpec(ComputeSpecT&& value) {
    m_computeSpecHasBeenSet = true;
    m_computeSpec = std::forward<ComputeSpecT>(value);
  }
  template <typename ComputeSpecT = AIRecommendationComputeSpec>
  DescribeAIRecommendationJobResult& WithComputeSpec(ComputeSpecT&& value) {
    SetComputeSpec(std::forward<ComputeSpecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the recommendation job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeAIRecommendationJobResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the recommendation job started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  DescribeAIRecommendationJobResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the recommendation job completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  DescribeAIRecommendationJobResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the recommendation job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeAIRecommendationJobResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeAIRecommendationJobResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAIRecommendationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIRecommendationJobName;

  Aws::String m_aIRecommendationJobArn;

  AIRecommendationJobStatus m_aIRecommendationJobStatus{AIRecommendationJobStatus::NOT_SET};

  Aws::String m_failureReason;

  AIModelSource m_modelSource;

  AIRecommendationOutputResult m_outputConfig;

  AIRecommendationInferenceSpecification m_inferenceSpecification;

  Aws::String m_aIWorkloadConfigIdentifier;

  bool m_optimizeModel{false};

  AIRecommendationPerformanceTarget m_performanceTarget;

  Aws::Vector<AIRecommendation> m_recommendations;

  Aws::String m_roleArn;

  AIRecommendationComputeSpec m_computeSpec;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<Tag> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIRecommendationJobNameHasBeenSet = false;
  bool m_aIRecommendationJobArnHasBeenSet = false;
  bool m_aIRecommendationJobStatusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_modelSourceHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_inferenceSpecificationHasBeenSet = false;
  bool m_aIWorkloadConfigIdentifierHasBeenSet = false;
  bool m_optimizeModelHasBeenSet = false;
  bool m_performanceTargetHasBeenSet = false;
  bool m_recommendationsHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_computeSpecHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
