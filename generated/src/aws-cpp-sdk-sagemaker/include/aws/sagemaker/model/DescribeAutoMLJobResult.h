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
    AWS_SAGEMAKER_API DescribeAutoMLJobResult() = default;
    AWS_SAGEMAKER_API DescribeAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the name of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const { return m_autoMLJobName; }
    template<typename AutoMLJobNameT = Aws::String>
    void SetAutoMLJobName(AutoMLJobNameT&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::forward<AutoMLJobNameT>(value); }
    template<typename AutoMLJobNameT = Aws::String>
    DescribeAutoMLJobResult& WithAutoMLJobName(AutoMLJobNameT&& value) { SetAutoMLJobName(std::forward<AutoMLJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the ARN of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    DescribeAutoMLJobResult& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the input data configuration for the AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLChannel>& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = Aws::Vector<AutoMLChannel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<AutoMLChannel>>
    DescribeAutoMLJobResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = AutoMLChannel>
    DescribeAutoMLJobResult& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the job's output data config.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    DescribeAutoMLJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeAutoMLJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's objective.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const { return m_autoMLJobObjective; }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    void SetAutoMLJobObjective(AutoMLJobObjectiveT&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::forward<AutoMLJobObjectiveT>(value); }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    DescribeAutoMLJobResult& WithAutoMLJobObjective(AutoMLJobObjectiveT&& value) { SetAutoMLJobObjective(std::forward<AutoMLJobObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's problem type.</p>
     */
    inline ProblemType GetProblemType() const { return m_problemType; }
    inline void SetProblemType(ProblemType value) { m_problemTypeHasBeenSet = true; m_problemType = value; }
    inline DescribeAutoMLJobResult& WithProblemType(ProblemType value) { SetProblemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the configuration for the AutoML job.</p>
     */
    inline const AutoMLJobConfig& GetAutoMLJobConfig() const { return m_autoMLJobConfig; }
    template<typename AutoMLJobConfigT = AutoMLJobConfig>
    void SetAutoMLJobConfig(AutoMLJobConfigT&& value) { m_autoMLJobConfigHasBeenSet = true; m_autoMLJobConfig = std::forward<AutoMLJobConfigT>(value); }
    template<typename AutoMLJobConfigT = AutoMLJobConfig>
    DescribeAutoMLJobResult& WithAutoMLJobConfig(AutoMLJobConfigT&& value) { SetAutoMLJobConfig(std::forward<AutoMLJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the creation time of the AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the end time of the AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the failure reason for an AutoML job, when applicable.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeAutoMLJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const { return m_partialFailureReasons; }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    void SetPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons = std::forward<PartialFailureReasonsT>(value); }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    DescribeAutoMLJobResult& WithPartialFailureReasons(PartialFailureReasonsT&& value) { SetPartialFailureReasons(std::forward<PartialFailureReasonsT>(value)); return *this;}
    template<typename PartialFailureReasonsT = AutoMLPartialFailureReason>
    DescribeAutoMLJobResult& AddPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons.emplace_back(std::forward<PartialFailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The best model candidate selected by SageMaker AI Autopilot using both the
     * best objective metric and lowest <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html">InferenceLatency</a>
     * for an experiment.</p>
     */
    inline const AutoMLCandidate& GetBestCandidate() const { return m_bestCandidate; }
    template<typename BestCandidateT = AutoMLCandidate>
    void SetBestCandidate(BestCandidateT&& value) { m_bestCandidateHasBeenSet = true; m_bestCandidate = std::forward<BestCandidateT>(value); }
    template<typename BestCandidateT = AutoMLCandidate>
    DescribeAutoMLJobResult& WithBestCandidate(BestCandidateT&& value) { SetBestCandidate(std::forward<BestCandidateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the status of the AutoML job.</p>
     */
    inline AutoMLJobStatus GetAutoMLJobStatus() const { return m_autoMLJobStatus; }
    inline void SetAutoMLJobStatus(AutoMLJobStatus value) { m_autoMLJobStatusHasBeenSet = true; m_autoMLJobStatus = value; }
    inline DescribeAutoMLJobResult& WithAutoMLJobStatus(AutoMLJobStatus value) { SetAutoMLJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the secondary status of the AutoML job.</p>
     */
    inline AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatus() const { return m_autoMLJobSecondaryStatus; }
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { m_autoMLJobSecondaryStatusHasBeenSet = true; m_autoMLJobSecondaryStatus = value; }
    inline DescribeAutoMLJobResult& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { SetAutoMLJobSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the output for an AutoML job generates candidate
     * definitions only.</p>
     */
    inline bool GetGenerateCandidateDefinitionsOnly() const { return m_generateCandidateDefinitionsOnly; }
    inline void SetGenerateCandidateDefinitionsOnly(bool value) { m_generateCandidateDefinitionsOnlyHasBeenSet = true; m_generateCandidateDefinitionsOnly = value; }
    inline DescribeAutoMLJobResult& WithGenerateCandidateDefinitionsOnly(bool value) { SetGenerateCandidateDefinitionsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information on the job's artifacts found in
     * <code>AutoMLJobArtifacts</code>.</p>
     */
    inline const AutoMLJobArtifacts& GetAutoMLJobArtifacts() const { return m_autoMLJobArtifacts; }
    template<typename AutoMLJobArtifactsT = AutoMLJobArtifacts>
    void SetAutoMLJobArtifacts(AutoMLJobArtifactsT&& value) { m_autoMLJobArtifactsHasBeenSet = true; m_autoMLJobArtifacts = std::forward<AutoMLJobArtifactsT>(value); }
    template<typename AutoMLJobArtifactsT = AutoMLJobArtifacts>
    DescribeAutoMLJobResult& WithAutoMLJobArtifacts(AutoMLJobArtifactsT&& value) { SetAutoMLJobArtifacts(std::forward<AutoMLJobArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains <code>ProblemType</code>, <code>AutoMLJobObjective</code>, and
     * <code>CompletionCriteria</code>. If you do not provide these values, they are
     * inferred.</p>
     */
    inline const ResolvedAttributes& GetResolvedAttributes() const { return m_resolvedAttributes; }
    template<typename ResolvedAttributesT = ResolvedAttributes>
    void SetResolvedAttributes(ResolvedAttributesT&& value) { m_resolvedAttributesHasBeenSet = true; m_resolvedAttributes = std::forward<ResolvedAttributesT>(value); }
    template<typename ResolvedAttributesT = ResolvedAttributes>
    DescribeAutoMLJobResult& WithResolvedAttributes(ResolvedAttributesT&& value) { SetResolvedAttributes(std::forward<ResolvedAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline const ModelDeployConfig& GetModelDeployConfig() const { return m_modelDeployConfig; }
    template<typename ModelDeployConfigT = ModelDeployConfig>
    void SetModelDeployConfig(ModelDeployConfigT&& value) { m_modelDeployConfigHasBeenSet = true; m_modelDeployConfig = std::forward<ModelDeployConfigT>(value); }
    template<typename ModelDeployConfigT = ModelDeployConfig>
    DescribeAutoMLJobResult& WithModelDeployConfig(ModelDeployConfigT&& value) { SetModelDeployConfig(std::forward<ModelDeployConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline const ModelDeployResult& GetModelDeployResult() const { return m_modelDeployResult; }
    template<typename ModelDeployResultT = ModelDeployResult>
    void SetModelDeployResult(ModelDeployResultT&& value) { m_modelDeployResultHasBeenSet = true; m_modelDeployResult = std::forward<ModelDeployResultT>(value); }
    template<typename ModelDeployResultT = ModelDeployResult>
    DescribeAutoMLJobResult& WithModelDeployResult(ModelDeployResultT&& value) { SetModelDeployResult(std::forward<ModelDeployResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAutoMLJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    Aws::Vector<AutoMLChannel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    AutoMLOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    ProblemType m_problemType{ProblemType::NOT_SET};
    bool m_problemTypeHasBeenSet = false;

    AutoMLJobConfig m_autoMLJobConfig;
    bool m_autoMLJobConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<AutoMLPartialFailureReason> m_partialFailureReasons;
    bool m_partialFailureReasonsHasBeenSet = false;

    AutoMLCandidate m_bestCandidate;
    bool m_bestCandidateHasBeenSet = false;

    AutoMLJobStatus m_autoMLJobStatus{AutoMLJobStatus::NOT_SET};
    bool m_autoMLJobStatusHasBeenSet = false;

    AutoMLJobSecondaryStatus m_autoMLJobSecondaryStatus{AutoMLJobSecondaryStatus::NOT_SET};
    bool m_autoMLJobSecondaryStatusHasBeenSet = false;

    bool m_generateCandidateDefinitionsOnly{false};
    bool m_generateCandidateDefinitionsOnlyHasBeenSet = false;

    AutoMLJobArtifacts m_autoMLJobArtifacts;
    bool m_autoMLJobArtifactsHasBeenSet = false;

    ResolvedAttributes m_resolvedAttributes;
    bool m_resolvedAttributesHasBeenSet = false;

    ModelDeployConfig m_modelDeployConfig;
    bool m_modelDeployConfigHasBeenSet = false;

    ModelDeployResult m_modelDeployResult;
    bool m_modelDeployResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
