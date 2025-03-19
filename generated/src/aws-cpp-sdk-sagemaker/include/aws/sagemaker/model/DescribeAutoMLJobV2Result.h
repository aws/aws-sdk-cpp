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
#include <aws/sagemaker/model/AutoMLProblemTypeConfig.h>
#include <aws/sagemaker/model/AutoMLProblemTypeConfigName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AutoMLCandidate.h>
#include <aws/sagemaker/model/AutoMLJobStatus.h>
#include <aws/sagemaker/model/AutoMLJobSecondaryStatus.h>
#include <aws/sagemaker/model/AutoMLJobArtifacts.h>
#include <aws/sagemaker/model/AutoMLResolvedAttributes.h>
#include <aws/sagemaker/model/ModelDeployConfig.h>
#include <aws/sagemaker/model/ModelDeployResult.h>
#include <aws/sagemaker/model/AutoMLDataSplitConfig.h>
#include <aws/sagemaker/model/AutoMLSecurityConfig.h>
#include <aws/sagemaker/model/AutoMLComputeConfig.h>
#include <aws/sagemaker/model/AutoMLJobChannel.h>
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
  class DescribeAutoMLJobV2Result
  {
  public:
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result() = default;
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const { return m_autoMLJobName; }
    template<typename AutoMLJobNameT = Aws::String>
    void SetAutoMLJobName(AutoMLJobNameT&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::forward<AutoMLJobNameT>(value); }
    template<typename AutoMLJobNameT = Aws::String>
    DescribeAutoMLJobV2Result& WithAutoMLJobName(AutoMLJobNameT&& value) { SetAutoMLJobName(std::forward<AutoMLJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    DescribeAutoMLJobV2Result& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline const Aws::Vector<AutoMLJobChannel>& GetAutoMLJobInputDataConfig() const { return m_autoMLJobInputDataConfig; }
    template<typename AutoMLJobInputDataConfigT = Aws::Vector<AutoMLJobChannel>>
    void SetAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig = std::forward<AutoMLJobInputDataConfigT>(value); }
    template<typename AutoMLJobInputDataConfigT = Aws::Vector<AutoMLJobChannel>>
    DescribeAutoMLJobV2Result& WithAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { SetAutoMLJobInputDataConfig(std::forward<AutoMLJobInputDataConfigT>(value)); return *this;}
    template<typename AutoMLJobInputDataConfigT = AutoMLJobChannel>
    DescribeAutoMLJobV2Result& AddAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig.emplace_back(std::forward<AutoMLJobInputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the job's output data config.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    DescribeAutoMLJobV2Result& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
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
    DescribeAutoMLJobV2Result& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's objective.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const { return m_autoMLJobObjective; }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    void SetAutoMLJobObjective(AutoMLJobObjectiveT&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::forward<AutoMLJobObjectiveT>(value); }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    DescribeAutoMLJobV2Result& WithAutoMLJobObjective(AutoMLJobObjectiveT&& value) { SetAutoMLJobObjective(std::forward<AutoMLJobObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline const AutoMLProblemTypeConfig& GetAutoMLProblemTypeConfig() const { return m_autoMLProblemTypeConfig; }
    template<typename AutoMLProblemTypeConfigT = AutoMLProblemTypeConfig>
    void SetAutoMLProblemTypeConfig(AutoMLProblemTypeConfigT&& value) { m_autoMLProblemTypeConfigHasBeenSet = true; m_autoMLProblemTypeConfig = std::forward<AutoMLProblemTypeConfigT>(value); }
    template<typename AutoMLProblemTypeConfigT = AutoMLProblemTypeConfig>
    DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfig(AutoMLProblemTypeConfigT&& value) { SetAutoMLProblemTypeConfig(std::forward<AutoMLProblemTypeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline AutoMLProblemTypeConfigName GetAutoMLProblemTypeConfigName() const { return m_autoMLProblemTypeConfigName; }
    inline void SetAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName value) { m_autoMLProblemTypeConfigNameHasBeenSet = true; m_autoMLProblemTypeConfigName = value; }
    inline DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName value) { SetAutoMLProblemTypeConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobV2Result& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobV2Result& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeAutoMLJobV2Result& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeAutoMLJobV2Result& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const { return m_partialFailureReasons; }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    void SetPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons = std::forward<PartialFailureReasonsT>(value); }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    DescribeAutoMLJobV2Result& WithPartialFailureReasons(PartialFailureReasonsT&& value) { SetPartialFailureReasons(std::forward<PartialFailureReasonsT>(value)); return *this;}
    template<typename PartialFailureReasonsT = AutoMLPartialFailureReason>
    DescribeAutoMLJobV2Result& AddPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons.emplace_back(std::forward<PartialFailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline const AutoMLCandidate& GetBestCandidate() const { return m_bestCandidate; }
    template<typename BestCandidateT = AutoMLCandidate>
    void SetBestCandidate(BestCandidateT&& value) { m_bestCandidateHasBeenSet = true; m_bestCandidate = std::forward<BestCandidateT>(value); }
    template<typename BestCandidateT = AutoMLCandidate>
    DescribeAutoMLJobV2Result& WithBestCandidate(BestCandidateT&& value) { SetBestCandidate(std::forward<BestCandidateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline AutoMLJobStatus GetAutoMLJobStatus() const { return m_autoMLJobStatus; }
    inline void SetAutoMLJobStatus(AutoMLJobStatus value) { m_autoMLJobStatusHasBeenSet = true; m_autoMLJobStatus = value; }
    inline DescribeAutoMLJobV2Result& WithAutoMLJobStatus(AutoMLJobStatus value) { SetAutoMLJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatus() const { return m_autoMLJobSecondaryStatus; }
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { m_autoMLJobSecondaryStatusHasBeenSet = true; m_autoMLJobSecondaryStatus = value; }
    inline DescribeAutoMLJobV2Result& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { SetAutoMLJobSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const AutoMLJobArtifacts& GetAutoMLJobArtifacts() const { return m_autoMLJobArtifacts; }
    template<typename AutoMLJobArtifactsT = AutoMLJobArtifacts>
    void SetAutoMLJobArtifacts(AutoMLJobArtifactsT&& value) { m_autoMLJobArtifactsHasBeenSet = true; m_autoMLJobArtifacts = std::forward<AutoMLJobArtifactsT>(value); }
    template<typename AutoMLJobArtifactsT = AutoMLJobArtifacts>
    DescribeAutoMLJobV2Result& WithAutoMLJobArtifacts(AutoMLJobArtifactsT&& value) { SetAutoMLJobArtifacts(std::forward<AutoMLJobArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline const AutoMLResolvedAttributes& GetResolvedAttributes() const { return m_resolvedAttributes; }
    template<typename ResolvedAttributesT = AutoMLResolvedAttributes>
    void SetResolvedAttributes(ResolvedAttributesT&& value) { m_resolvedAttributesHasBeenSet = true; m_resolvedAttributes = std::forward<ResolvedAttributesT>(value); }
    template<typename ResolvedAttributesT = AutoMLResolvedAttributes>
    DescribeAutoMLJobV2Result& WithResolvedAttributes(ResolvedAttributesT&& value) { SetResolvedAttributes(std::forward<ResolvedAttributesT>(value)); return *this;}
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
    DescribeAutoMLJobV2Result& WithModelDeployConfig(ModelDeployConfigT&& value) { SetModelDeployConfig(std::forward<ModelDeployConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline const ModelDeployResult& GetModelDeployResult() const { return m_modelDeployResult; }
    template<typename ModelDeployResultT = ModelDeployResult>
    void SetModelDeployResult(ModelDeployResultT&& value) { m_modelDeployResultHasBeenSet = true; m_modelDeployResult = std::forward<ModelDeployResultT>(value); }
    template<typename ModelDeployResultT = ModelDeployResult>
    DescribeAutoMLJobV2Result& WithModelDeployResult(ModelDeployResultT&& value) { SetModelDeployResult(std::forward<ModelDeployResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const { return m_dataSplitConfig; }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    void SetDataSplitConfig(DataSplitConfigT&& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = std::forward<DataSplitConfigT>(value); }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    DescribeAutoMLJobV2Result& WithDataSplitConfig(DataSplitConfigT&& value) { SetDataSplitConfig(std::forward<DataSplitConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    DescribeAutoMLJobV2Result& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration used for the AutoML job V2.</p>
     */
    inline const AutoMLComputeConfig& GetAutoMLComputeConfig() const { return m_autoMLComputeConfig; }
    template<typename AutoMLComputeConfigT = AutoMLComputeConfig>
    void SetAutoMLComputeConfig(AutoMLComputeConfigT&& value) { m_autoMLComputeConfigHasBeenSet = true; m_autoMLComputeConfig = std::forward<AutoMLComputeConfigT>(value); }
    template<typename AutoMLComputeConfigT = AutoMLComputeConfig>
    DescribeAutoMLJobV2Result& WithAutoMLComputeConfig(AutoMLComputeConfigT&& value) { SetAutoMLComputeConfig(std::forward<AutoMLComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAutoMLJobV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    Aws::Vector<AutoMLJobChannel> m_autoMLJobInputDataConfig;
    bool m_autoMLJobInputDataConfigHasBeenSet = false;

    AutoMLOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    AutoMLProblemTypeConfig m_autoMLProblemTypeConfig;
    bool m_autoMLProblemTypeConfigHasBeenSet = false;

    AutoMLProblemTypeConfigName m_autoMLProblemTypeConfigName{AutoMLProblemTypeConfigName::NOT_SET};
    bool m_autoMLProblemTypeConfigNameHasBeenSet = false;

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

    AutoMLJobArtifacts m_autoMLJobArtifacts;
    bool m_autoMLJobArtifactsHasBeenSet = false;

    AutoMLResolvedAttributes m_resolvedAttributes;
    bool m_resolvedAttributesHasBeenSet = false;

    ModelDeployConfig m_modelDeployConfig;
    bool m_modelDeployConfigHasBeenSet = false;

    ModelDeployResult m_modelDeployResult;
    bool m_modelDeployResultHasBeenSet = false;

    AutoMLDataSplitConfig m_dataSplitConfig;
    bool m_dataSplitConfigHasBeenSet = false;

    AutoMLSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    AutoMLComputeConfig m_autoMLComputeConfig;
    bool m_autoMLComputeConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
