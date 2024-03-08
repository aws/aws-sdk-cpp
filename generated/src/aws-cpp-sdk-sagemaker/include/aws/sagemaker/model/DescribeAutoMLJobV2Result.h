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
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result();
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAutoMLJobV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobName = value; }

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobName = std::move(value); }

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobName.assign(value); }

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}


    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline const Aws::Vector<AutoMLJobChannel>& GetAutoMLJobInputDataConfig() const{ return m_autoMLJobInputDataConfig; }

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline void SetAutoMLJobInputDataConfig(const Aws::Vector<AutoMLJobChannel>& value) { m_autoMLJobInputDataConfig = value; }

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline void SetAutoMLJobInputDataConfig(Aws::Vector<AutoMLJobChannel>&& value) { m_autoMLJobInputDataConfig = std::move(value); }

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobInputDataConfig(const Aws::Vector<AutoMLJobChannel>& value) { SetAutoMLJobInputDataConfig(value); return *this;}

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobInputDataConfig(Aws::Vector<AutoMLJobChannel>&& value) { SetAutoMLJobInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline DescribeAutoMLJobV2Result& AddAutoMLJobInputDataConfig(const AutoMLJobChannel& value) { m_autoMLJobInputDataConfig.push_back(value); return *this; }

    /**
     * <p>Returns an array of channel objects describing the input data and their
     * location.</p>
     */
    inline DescribeAutoMLJobV2Result& AddAutoMLJobInputDataConfig(AutoMLJobChannel&& value) { m_autoMLJobInputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns the job's output data config.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Returns the job's output data config.</p>
     */
    inline void SetOutputDataConfig(const AutoMLOutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>Returns the job's output data config.</p>
     */
    inline void SetOutputDataConfig(AutoMLOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>Returns the job's output data config.</p>
     */
    inline DescribeAutoMLJobV2Result& WithOutputDataConfig(const AutoMLOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Returns the job's output data config.</p>
     */
    inline DescribeAutoMLJobV2Result& WithOutputDataConfig(AutoMLOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeAutoMLJobV2Result& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeAutoMLJobV2Result& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that has read permission to the input data location
     * and write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeAutoMLJobV2Result& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Returns the job's objective.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }

    /**
     * <p>Returns the job's objective.</p>
     */
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjective = value; }

    /**
     * <p>Returns the job's objective.</p>
     */
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjective = std::move(value); }

    /**
     * <p>Returns the job's objective.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}

    /**
     * <p>Returns the job's objective.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}


    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline const AutoMLProblemTypeConfig& GetAutoMLProblemTypeConfig() const{ return m_autoMLProblemTypeConfig; }

    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline void SetAutoMLProblemTypeConfig(const AutoMLProblemTypeConfig& value) { m_autoMLProblemTypeConfig = value; }

    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline void SetAutoMLProblemTypeConfig(AutoMLProblemTypeConfig&& value) { m_autoMLProblemTypeConfig = std::move(value); }

    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfig(const AutoMLProblemTypeConfig& value) { SetAutoMLProblemTypeConfig(value); return *this;}

    /**
     * <p>Returns the configuration settings of the problem type set for the AutoML job
     * V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfig(AutoMLProblemTypeConfig&& value) { SetAutoMLProblemTypeConfig(std::move(value)); return *this;}


    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline const AutoMLProblemTypeConfigName& GetAutoMLProblemTypeConfigName() const{ return m_autoMLProblemTypeConfigName; }

    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline void SetAutoMLProblemTypeConfigName(const AutoMLProblemTypeConfigName& value) { m_autoMLProblemTypeConfigName = value; }

    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline void SetAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName&& value) { m_autoMLProblemTypeConfigName = std::move(value); }

    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfigName(const AutoMLProblemTypeConfigName& value) { SetAutoMLProblemTypeConfigName(value); return *this;}

    /**
     * <p>Returns the name of the problem type configuration set for the AutoML job
     * V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName&& value) { SetAutoMLProblemTypeConfigName(std::move(value)); return *this;}


    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Returns the creation time of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Returns the end time of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline DescribeAutoMLJobV2Result& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Returns the job's last modified time.</p>
     */
    inline DescribeAutoMLJobV2Result& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline DescribeAutoMLJobV2Result& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline DescribeAutoMLJobV2Result& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>Returns the reason for the failure of the AutoML job V2, when applicable.</p>
     */
    inline DescribeAutoMLJobV2Result& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const{ return m_partialFailureReasons; }

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline void SetPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { m_partialFailureReasons = value; }

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline void SetPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { m_partialFailureReasons = std::move(value); }

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { SetPartialFailureReasons(value); return *this;}

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { SetPartialFailureReasons(std::move(value)); return *this;}

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& AddPartialFailureReasons(const AutoMLPartialFailureReason& value) { m_partialFailureReasons.push_back(value); return *this; }

    /**
     * <p>Returns a list of reasons for partial failures within an AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& AddPartialFailureReasons(AutoMLPartialFailureReason&& value) { m_partialFailureReasons.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline const AutoMLCandidate& GetBestCandidate() const{ return m_bestCandidate; }

    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline void SetBestCandidate(const AutoMLCandidate& value) { m_bestCandidate = value; }

    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline void SetBestCandidate(AutoMLCandidate&& value) { m_bestCandidate = std::move(value); }

    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline DescribeAutoMLJobV2Result& WithBestCandidate(const AutoMLCandidate& value) { SetBestCandidate(value); return *this;}

    /**
     * <p>Information about the candidate produced by an AutoML training job V2,
     * including its status, steps, and other properties.</p>
     */
    inline DescribeAutoMLJobV2Result& WithBestCandidate(AutoMLCandidate&& value) { SetBestCandidate(std::move(value)); return *this;}


    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline const AutoMLJobStatus& GetAutoMLJobStatus() const{ return m_autoMLJobStatus; }

    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobStatus(const AutoMLJobStatus& value) { m_autoMLJobStatus = value; }

    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobStatus(AutoMLJobStatus&& value) { m_autoMLJobStatus = std::move(value); }

    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobStatus(const AutoMLJobStatus& value) { SetAutoMLJobStatus(value); return *this;}

    /**
     * <p>Returns the status of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobStatus(AutoMLJobStatus&& value) { SetAutoMLJobStatus(std::move(value)); return *this;}


    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline const AutoMLJobSecondaryStatus& GetAutoMLJobSecondaryStatus() const{ return m_autoMLJobSecondaryStatus; }

    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { m_autoMLJobSecondaryStatus = value; }

    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { m_autoMLJobSecondaryStatus = std::move(value); }

    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { SetAutoMLJobSecondaryStatus(value); return *this;}

    /**
     * <p>Returns the secondary status of the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { SetAutoMLJobSecondaryStatus(std::move(value)); return *this;}


    
    inline const AutoMLJobArtifacts& GetAutoMLJobArtifacts() const{ return m_autoMLJobArtifacts; }

    
    inline void SetAutoMLJobArtifacts(const AutoMLJobArtifacts& value) { m_autoMLJobArtifacts = value; }

    
    inline void SetAutoMLJobArtifacts(AutoMLJobArtifacts&& value) { m_autoMLJobArtifacts = std::move(value); }

    
    inline DescribeAutoMLJobV2Result& WithAutoMLJobArtifacts(const AutoMLJobArtifacts& value) { SetAutoMLJobArtifacts(value); return *this;}

    
    inline DescribeAutoMLJobV2Result& WithAutoMLJobArtifacts(AutoMLJobArtifacts&& value) { SetAutoMLJobArtifacts(std::move(value)); return *this;}


    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline const AutoMLResolvedAttributes& GetResolvedAttributes() const{ return m_resolvedAttributes; }

    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline void SetResolvedAttributes(const AutoMLResolvedAttributes& value) { m_resolvedAttributes = value; }

    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline void SetResolvedAttributes(AutoMLResolvedAttributes&& value) { m_resolvedAttributes = std::move(value); }

    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithResolvedAttributes(const AutoMLResolvedAttributes& value) { SetResolvedAttributes(value); return *this;}

    /**
     * <p>Returns the resolved attributes used by the AutoML job V2.</p>
     */
    inline DescribeAutoMLJobV2Result& WithResolvedAttributes(AutoMLResolvedAttributes&& value) { SetResolvedAttributes(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline const ModelDeployConfig& GetModelDeployConfig() const{ return m_modelDeployConfig; }

    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline void SetModelDeployConfig(const ModelDeployConfig& value) { m_modelDeployConfig = value; }

    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline void SetModelDeployConfig(ModelDeployConfig&& value) { m_modelDeployConfig = std::move(value); }

    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline DescribeAutoMLJobV2Result& WithModelDeployConfig(const ModelDeployConfig& value) { SetModelDeployConfig(value); return *this;}

    /**
     * <p>Indicates whether the model was deployed automatically to an endpoint and the
     * name of that endpoint if deployed automatically.</p>
     */
    inline DescribeAutoMLJobV2Result& WithModelDeployConfig(ModelDeployConfig&& value) { SetModelDeployConfig(std::move(value)); return *this;}


    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline const ModelDeployResult& GetModelDeployResult() const{ return m_modelDeployResult; }

    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline void SetModelDeployResult(const ModelDeployResult& value) { m_modelDeployResult = value; }

    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline void SetModelDeployResult(ModelDeployResult&& value) { m_modelDeployResult = std::move(value); }

    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline DescribeAutoMLJobV2Result& WithModelDeployResult(const ModelDeployResult& value) { SetModelDeployResult(value); return *this;}

    /**
     * <p>Provides information about endpoint for the model deployment.</p>
     */
    inline DescribeAutoMLJobV2Result& WithModelDeployResult(ModelDeployResult&& value) { SetModelDeployResult(std::move(value)); return *this;}


    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const{ return m_dataSplitConfig; }

    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline void SetDataSplitConfig(const AutoMLDataSplitConfig& value) { m_dataSplitConfig = value; }

    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline void SetDataSplitConfig(AutoMLDataSplitConfig&& value) { m_dataSplitConfig = std::move(value); }

    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline DescribeAutoMLJobV2Result& WithDataSplitConfig(const AutoMLDataSplitConfig& value) { SetDataSplitConfig(value); return *this;}

    /**
     * <p>Returns the configuration settings of how the data are split into train and
     * validation datasets.</p>
     */
    inline DescribeAutoMLJobV2Result& WithDataSplitConfig(AutoMLDataSplitConfig&& value) { SetDataSplitConfig(std::move(value)); return *this;}


    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline void SetSecurityConfig(const AutoMLSecurityConfig& value) { m_securityConfig = value; }

    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline void SetSecurityConfig(AutoMLSecurityConfig&& value) { m_securityConfig = std::move(value); }

    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline DescribeAutoMLJobV2Result& WithSecurityConfig(const AutoMLSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>Returns the security configuration for traffic encryption or Amazon VPC
     * settings.</p>
     */
    inline DescribeAutoMLJobV2Result& WithSecurityConfig(AutoMLSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAutoMLJobV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAutoMLJobV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAutoMLJobV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_autoMLJobName;

    Aws::String m_autoMLJobArn;

    Aws::Vector<AutoMLJobChannel> m_autoMLJobInputDataConfig;

    AutoMLOutputDataConfig m_outputDataConfig;

    Aws::String m_roleArn;

    AutoMLJobObjective m_autoMLJobObjective;

    AutoMLProblemTypeConfig m_autoMLProblemTypeConfig;

    AutoMLProblemTypeConfigName m_autoMLProblemTypeConfigName;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    Aws::Vector<AutoMLPartialFailureReason> m_partialFailureReasons;

    AutoMLCandidate m_bestCandidate;

    AutoMLJobStatus m_autoMLJobStatus;

    AutoMLJobSecondaryStatus m_autoMLJobSecondaryStatus;

    AutoMLJobArtifacts m_autoMLJobArtifacts;

    AutoMLResolvedAttributes m_resolvedAttributes;

    ModelDeployConfig m_modelDeployConfig;

    ModelDeployResult m_modelDeployResult;

    AutoMLDataSplitConfig m_dataSplitConfig;

    AutoMLSecurityConfig m_securityConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
