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
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult();
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }
    inline void SetJobDescription(const Aws::String& value) { m_jobDescription = value; }
    inline void SetJobDescription(Aws::String&& value) { m_jobDescription = std::move(value); }
    inline void SetJobDescription(const char* value) { m_jobDescription.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline const RecommendationJobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const RecommendationJobType& value) { m_jobType = value; }
    inline void SetJobType(RecommendationJobType&& value) { m_jobType = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithJobType(const RecommendationJobType& value) { SetJobType(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobType(RecommendationJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline const RecommendationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RecommendationJobStatus& value) { m_status = value; }
    inline void SetStatus(RecommendationJobStatus&& value) { m_status = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithStatus(const RecommendationJobStatus& value) { SetStatus(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithStatus(RecommendationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline const RecommendationJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline void SetInputConfig(const RecommendationJobInputConfig& value) { m_inputConfig = value; }
    inline void SetInputConfig(RecommendationJobInputConfig&& value) { m_inputConfig = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithInputConfig(const RecommendationJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithInputConfig(RecommendationJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline const RecommendationJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }
    inline void SetStoppingConditions(const RecommendationJobStoppingConditions& value) { m_stoppingConditions = value; }
    inline void SetStoppingConditions(RecommendationJobStoppingConditions&& value) { m_stoppingConditions = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithStoppingConditions(const RecommendationJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithStoppingConditions(RecommendationJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline const Aws::Vector<InferenceRecommendation>& GetInferenceRecommendations() const{ return m_inferenceRecommendations; }
    inline void SetInferenceRecommendations(const Aws::Vector<InferenceRecommendation>& value) { m_inferenceRecommendations = value; }
    inline void SetInferenceRecommendations(Aws::Vector<InferenceRecommendation>&& value) { m_inferenceRecommendations = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithInferenceRecommendations(const Aws::Vector<InferenceRecommendation>& value) { SetInferenceRecommendations(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithInferenceRecommendations(Aws::Vector<InferenceRecommendation>&& value) { SetInferenceRecommendations(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& AddInferenceRecommendations(const InferenceRecommendation& value) { m_inferenceRecommendations.push_back(value); return *this; }
    inline DescribeInferenceRecommendationsJobResult& AddInferenceRecommendations(InferenceRecommendation&& value) { m_inferenceRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline const Aws::Vector<EndpointPerformance>& GetEndpointPerformances() const{ return m_endpointPerformances; }
    inline void SetEndpointPerformances(const Aws::Vector<EndpointPerformance>& value) { m_endpointPerformances = value; }
    inline void SetEndpointPerformances(Aws::Vector<EndpointPerformance>&& value) { m_endpointPerformances = std::move(value); }
    inline DescribeInferenceRecommendationsJobResult& WithEndpointPerformances(const Aws::Vector<EndpointPerformance>& value) { SetEndpointPerformances(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithEndpointPerformances(Aws::Vector<EndpointPerformance>&& value) { SetEndpointPerformances(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& AddEndpointPerformances(const EndpointPerformance& value) { m_endpointPerformances.push_back(value); return *this; }
    inline DescribeInferenceRecommendationsJobResult& AddEndpointPerformances(EndpointPerformance&& value) { m_endpointPerformances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInferenceRecommendationsJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInferenceRecommendationsJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;

    Aws::String m_jobDescription;

    RecommendationJobType m_jobType;

    Aws::String m_jobArn;

    Aws::String m_roleArn;

    RecommendationJobStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    RecommendationJobInputConfig m_inputConfig;

    RecommendationJobStoppingConditions m_stoppingConditions;

    Aws::Vector<InferenceRecommendation> m_inferenceRecommendations;

    Aws::Vector<EndpointPerformance> m_endpointPerformances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
