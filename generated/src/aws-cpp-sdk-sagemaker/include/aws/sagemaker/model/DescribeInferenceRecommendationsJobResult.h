/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobType.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/RecommendationJobInputConfig.h>
#include <aws/sagemaker/model/RecommendationJobStoppingConditions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceRecommendation.h>
#include <aws/sagemaker/model/EndpointPerformance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeInferenceRecommendationsJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult() = default;
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
    template<typename JobDescriptionT = Aws::String>
    void SetJobDescription(JobDescriptionT&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::forward<JobDescriptionT>(value); }
    template<typename JobDescriptionT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithJobDescription(JobDescriptionT&& value) { SetJobDescription(std::forward<JobDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline RecommendationJobType GetJobType() const { return m_jobType; }
    inline void SetJobType(RecommendationJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline DescribeInferenceRecommendationsJobResult& WithJobType(RecommendationJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline RecommendationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(RecommendationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeInferenceRecommendationsJobResult& WithStatus(RecommendationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeInferenceRecommendationsJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    DescribeInferenceRecommendationsJobResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeInferenceRecommendationsJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline const RecommendationJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    template<typename InputConfigT = RecommendationJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = RecommendationJobInputConfig>
    DescribeInferenceRecommendationsJobResult& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline const RecommendationJobStoppingConditions& GetStoppingConditions() const { return m_stoppingConditions; }
    template<typename StoppingConditionsT = RecommendationJobStoppingConditions>
    void SetStoppingConditions(StoppingConditionsT&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::forward<StoppingConditionsT>(value); }
    template<typename StoppingConditionsT = RecommendationJobStoppingConditions>
    DescribeInferenceRecommendationsJobResult& WithStoppingConditions(StoppingConditionsT&& value) { SetStoppingConditions(std::forward<StoppingConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline const Aws::Vector<InferenceRecommendation>& GetInferenceRecommendations() const { return m_inferenceRecommendations; }
    template<typename InferenceRecommendationsT = Aws::Vector<InferenceRecommendation>>
    void SetInferenceRecommendations(InferenceRecommendationsT&& value) { m_inferenceRecommendationsHasBeenSet = true; m_inferenceRecommendations = std::forward<InferenceRecommendationsT>(value); }
    template<typename InferenceRecommendationsT = Aws::Vector<InferenceRecommendation>>
    DescribeInferenceRecommendationsJobResult& WithInferenceRecommendations(InferenceRecommendationsT&& value) { SetInferenceRecommendations(std::forward<InferenceRecommendationsT>(value)); return *this;}
    template<typename InferenceRecommendationsT = InferenceRecommendation>
    DescribeInferenceRecommendationsJobResult& AddInferenceRecommendations(InferenceRecommendationsT&& value) { m_inferenceRecommendationsHasBeenSet = true; m_inferenceRecommendations.emplace_back(std::forward<InferenceRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline const Aws::Vector<EndpointPerformance>& GetEndpointPerformances() const { return m_endpointPerformances; }
    template<typename EndpointPerformancesT = Aws::Vector<EndpointPerformance>>
    void SetEndpointPerformances(EndpointPerformancesT&& value) { m_endpointPerformancesHasBeenSet = true; m_endpointPerformances = std::forward<EndpointPerformancesT>(value); }
    template<typename EndpointPerformancesT = Aws::Vector<EndpointPerformance>>
    DescribeInferenceRecommendationsJobResult& WithEndpointPerformances(EndpointPerformancesT&& value) { SetEndpointPerformances(std::forward<EndpointPerformancesT>(value)); return *this;}
    template<typename EndpointPerformancesT = EndpointPerformance>
    DescribeInferenceRecommendationsJobResult& AddEndpointPerformances(EndpointPerformancesT&& value) { m_endpointPerformancesHasBeenSet = true; m_endpointPerformances.emplace_back(std::forward<EndpointPerformancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInferenceRecommendationsJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    RecommendationJobType m_jobType{RecommendationJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RecommendationJobStatus m_status{RecommendationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    RecommendationJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    RecommendationJobStoppingConditions m_stoppingConditions;
    bool m_stoppingConditionsHasBeenSet = false;

    Aws::Vector<InferenceRecommendation> m_inferenceRecommendations;
    bool m_inferenceRecommendationsHasBeenSet = false;

    Aws::Vector<EndpointPerformance> m_endpointPerformances;
    bool m_endpointPerformancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
