/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLOutputDataConfig.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/ProblemType.h>
#include <aws/sagemaker/model/AutoMLJobConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AutoMLCandidate.h>
#include <aws/sagemaker/model/AutoMLJobStatus.h>
#include <aws/sagemaker/model/AutoMLJobSecondaryStatus.h>
#include <aws/sagemaker/model/AutoMLJobArtifacts.h>
#include <aws/sagemaker/model/ResolvedAttributes.h>
#include <aws/sagemaker/model/ModelDeployConfig.h>
#include <aws/sagemaker/model/ModelDeployResult.h>
#include <aws/sagemaker/model/AutoMLChannel.h>
#include <aws/sagemaker/model/AutoMLPartialFailureReason.h>
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
  class DescribeAutoMLJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeAutoMLJobResult();
    AWS_SAGEMAKER_API DescribeAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the name of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobName = value; }
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobName = std::move(value); }
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobName.assign(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the ARN of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the input data configuration for the AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLChannel>& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline void SetInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { m_inputDataConfig = value; }
    inline void SetInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { m_inputDataConfig = std::move(value); }
    inline DescribeAutoMLJobResult& WithInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { SetInputDataConfig(value); return *this;}
    inline DescribeAutoMLJobResult& WithInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { SetInputDataConfig(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& AddInputDataConfig(const AutoMLChannel& value) { m_inputDataConfig.push_back(value); return *this; }
    inline DescribeAutoMLJobResult& AddInputDataConfig(AutoMLChannel&& value) { m_inputDataConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the job's output data config.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const AutoMLOutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(AutoMLOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline DescribeAutoMLJobResult& WithOutputDataConfig(const AutoMLOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline DescribeAutoMLJobResult& WithOutputDataConfig(AutoMLOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeAutoMLJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeAutoMLJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's objective.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjective = value; }
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjective = std::move(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's problem type.</p>
     */
    inline const ProblemType& GetProblemType() const{ return m_problemType; }
    inline void SetProblemType(const ProblemType& value) { m_problemType = value; }
    inline void SetProblemType(ProblemType&& value) { m_problemType = std::move(value); }
    inline DescribeAutoMLJobResult& WithProblemType(const ProblemType& value) { SetProblemType(value); return *this;}
    inline DescribeAutoMLJobResult& WithProblemType(ProblemType&& value) { SetProblemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the configuration for the AutoML job.</p>
     */
    inline const AutoMLJobConfig& GetAutoMLJobConfig() const{ return m_autoMLJobConfig; }
    inline void SetAutoMLJobConfig(const AutoMLJobConfig& value) { m_autoMLJobConfig = value; }
    inline void SetAutoMLJobConfig(AutoMLJobConfig&& value) { m_autoMLJobConfig = std::move(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobConfig(const AutoMLJobConfig& value) { SetAutoMLJobConfig(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobConfig(AutoMLJobConfig&& value) { SetAutoMLJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the creation time of the AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeAutoMLJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeAutoMLJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the end time of the AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeAutoMLJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeAutoMLJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeAutoMLJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeAutoMLJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the failure reason for an AutoML job, when applicable.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeAutoMLJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeAutoMLJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const{ return m_partialFailureReasons; }
    inline void SetPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { m_partialFailureReasons = value; }
    inline void SetPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { m_partialFailureReasons = std::move(value); }
    inline DescribeAutoMLJobResult& WithPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { SetPartialFailureReasons(value); return *this;}
    inline DescribeAutoMLJobResult& WithPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { SetPartialFailureReasons(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& AddPartialFailureReasons(const AutoMLPartialFailureReason& value) { m_partialFailureReasons.push_back(value); return *this; }
    inline DescribeAutoMLJobResult& AddPartialFailureReasons(AutoMLPartialFailureReason&& value) { m_partialFailureReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The best model candidate selected by SageMaker AI Autopilot using both the
     * best objective metric and lowest <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html">InferenceLatency</a>
     * for an experiment.</p>
     */
    inline const AutoMLCandidate& GetBestCandidate() const{ return m_bestCandidate; }
    inline void SetBestCandidate(const AutoMLCandidate& value) { m_bestCandidate = value; }
    inline void SetBestCandidate(AutoMLCandidate&& value) { m_bestCandidate = std::move(value); }
    inline DescribeAutoMLJobResult& WithBestCandidate(const AutoMLCandidate& value) { SetBestCandidate(value); return *this;}
    inline DescribeAutoMLJobResult& WithBestCandidate(AutoMLCandidate&& value) { SetBestCandidate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the status of the AutoML job.</p>
     */
    inline const AutoMLJobStatus& GetAutoMLJobStatus() const{ return m_autoMLJobStatus; }
    inline void SetAutoMLJobStatus(const AutoMLJobStatus& value) { m_autoMLJobStatus = value; }
    inline void SetAutoMLJobStatus(AutoMLJobStatus&& value) { m_autoMLJobStatus = std::move(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobStatus(const AutoMLJobStatus& value) { SetAutoMLJobStatus(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobStatus(AutoMLJobStatus&& value) { SetAutoMLJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the secondary status of the AutoML job.</p>
     */
    inline const AutoMLJobSecondaryStatus& GetAutoMLJobSecondaryStatus() const{ return m_autoMLJobSecondaryStatus; }
    inline void SetAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { m_autoMLJobSecondaryStatus = value; }
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { m_autoMLJobSecondaryStatus = std::move(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { SetAutoMLJobSecondaryStatus(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { SetAutoMLJobSecondaryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the output for an AutoML job generates candidate
     * definitions only.</p>
     */
    inline bool GetGenerateCandidateDefinitionsOnly() const{ return m_generateCandidateDefinitionsOnly; }
    inline void SetGenerateCandidateDefinitionsOnly(bool value) { m_generateCandidateDefinitionsOnly = value; }
    inline DescribeAutoMLJobResult& WithGenerateCandidateDefinitionsOnly(bool value) { SetGenerateCandidateDefinitionsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information on the job's artifacts found in
     * <code>AutoMLJobArtifacts</code>.</p>
     */
    inline const AutoMLJobArtifacts& GetAutoMLJobArtifacts() const{ return m_autoMLJobArtifacts; }
    inline void SetAutoMLJobArtifacts(const AutoMLJobArtifacts& value) { m_autoMLJobArtifacts = value; }
    inline void SetAutoMLJobArtifacts(AutoMLJobArtifacts&& value) { m_autoMLJobArtifacts = std::move(value); }
    inline DescribeAutoMLJobResult& WithAutoMLJobArtifacts(const AutoMLJobArtifacts& value) { SetAutoMLJobArtifacts(value); return *this;}
    inline DescribeAutoMLJobResult& WithAutoMLJobArtifacts(AutoMLJobArtifacts&& value) { SetAutoMLJobArtifacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains <code>ProblemType</code>, <code>AutoMLJobObjective</code>, and
     * <code>CompletionCriteria</code>. If you do not provide these values, they are
     * inferred.</p>
     */
    inline const ResolvedAttributes& GetResolvedAttributes() const{ return m_resolvedAttributes; }
    inline void SetResolvedAttributes(const ResolvedAttributes& value) { m_resolvedAttributes = value; }
    inline void SetResolvedAttributes(ResolvedAttributes&& value) { m_resolvedAttributes = std::move(value); }
    inline DescribeAutoMLJobResult& WithResolvedAttributes(const ResolvedAttributes& value) { SetResolvedAttributes(value); return *this;}
    inline DescribeAutoMLJobResult& WithResolvedAttributes(ResolvedAttributes&& value) { SetResolvedAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline const ModelDeployConfig& GetModelDeployConfig() const{ return m_modelDeployConfig; }
    inline void SetModelDeployConfig(const ModelDeployConfig& value) { m_modelDeployConfig = value; }
    inline void SetModelDeployConfig(ModelDeployConfig&& value) { m_modelDeployConfig = std::move(value); }
    inline DescribeAutoMLJobResult& WithModelDeployConfig(const ModelDeployConfig& value) { SetModelDeployConfig(value); return *this;}
    inline DescribeAutoMLJobResult& WithModelDeployConfig(ModelDeployConfig&& value) { SetModelDeployConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline const ModelDeployResult& GetModelDeployResult() const{ return m_modelDeployResult; }
    inline void SetModelDeployResult(const ModelDeployResult& value) { m_modelDeployResult = value; }
    inline void SetModelDeployResult(ModelDeployResult&& value) { m_modelDeployResult = std::move(value); }
    inline DescribeAutoMLJobResult& WithModelDeployResult(const ModelDeployResult& value) { SetModelDeployResult(value); return *this;}
    inline DescribeAutoMLJobResult& WithModelDeployResult(ModelDeployResult&& value) { SetModelDeployResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAutoMLJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAutoMLJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAutoMLJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;

    Aws::String m_autoMLJobArn;

    Aws::Vector<AutoMLChannel> m_inputDataConfig;

    AutoMLOutputDataConfig m_outputDataConfig;

    Aws::String m_roleArn;

    AutoMLJobObjective m_autoMLJobObjective;

    ProblemType m_problemType;

    AutoMLJobConfig m_autoMLJobConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    Aws::Vector<AutoMLPartialFailureReason> m_partialFailureReasons;

    AutoMLCandidate m_bestCandidate;

    AutoMLJobStatus m_autoMLJobStatus;

    AutoMLJobSecondaryStatus m_autoMLJobSecondaryStatus;

    bool m_generateCandidateDefinitionsOnly;

    AutoMLJobArtifacts m_autoMLJobArtifacts;

    ResolvedAttributes m_resolvedAttributes;

    ModelDeployConfig m_modelDeployConfig;

    ModelDeployResult m_modelDeployResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
