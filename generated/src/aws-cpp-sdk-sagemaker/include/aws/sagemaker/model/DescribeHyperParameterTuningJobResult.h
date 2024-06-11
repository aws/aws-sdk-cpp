/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobSummary.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <aws/sagemaker/model/Autotune.h>
#include <aws/sagemaker/model/HyperParameterTuningJobCompletionDetails.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConsumedResources.h>
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
  class DescribeHyperParameterTuningJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult();
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobName = value; }
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobName = std::move(value); }
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobName.assign(value); }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArn = value; }
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArn = std::move(value); }
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArn.assign(value); }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">HyperParameterTuningJobConfig</a>
     * object that specifies the configuration of the tuning job.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const{ return m_hyperParameterTuningJobConfig; }
    inline void SetHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { m_hyperParameterTuningJobConfig = value; }
    inline void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { m_hyperParameterTuningJobConfig = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { SetHyperParameterTuningJobConfig(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { SetHyperParameterTuningJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * object that specifies the definition of the training jobs that this tuning job
     * launches.</p>
     */
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }
    inline void SetTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinition = value; }
    inline void SetTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinition = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * objects launched for this tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobDefinition>& GetTrainingJobDefinitions() const{ return m_trainingJobDefinitions; }
    inline void SetTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { m_trainingJobDefinitions = value; }
    inline void SetTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { m_trainingJobDefinitions = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { SetTrainingJobDefinitions(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { SetTrainingJobDefinitions(std::move(value)); return *this;}
    inline DescribeHyperParameterTuningJobResult& AddTrainingJobDefinitions(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitions.push_back(value); return *this; }
    inline DescribeHyperParameterTuningJobResult& AddTrainingJobDefinitions(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the tuning job.</p>
     */
    inline const HyperParameterTuningJobStatus& GetHyperParameterTuningJobStatus() const{ return m_hyperParameterTuningJobStatus; }
    inline void SetHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { m_hyperParameterTuningJobStatus = value; }
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { m_hyperParameterTuningJobStatus = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { SetHyperParameterTuningJobStatus(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { SetHyperParameterTuningJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const{ return m_hyperParameterTuningEndTime; }
    inline void SetHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { m_hyperParameterTuningEndTime = value; }
    inline void SetHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { m_hyperParameterTuningEndTime = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { SetHyperParameterTuningEndTime(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { SetHyperParameterTuningEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobStatusCounters.html">TrainingJobStatusCounters</a>
     * object that specifies the number of training jobs, categorized by status, that
     * this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const{ return m_trainingJobStatusCounters; }
    inline void SetTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { m_trainingJobStatusCounters = value; }
    inline void SetTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { m_trainingJobStatusCounters = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { SetTrainingJobStatusCounters(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { SetTrainingJobStatusCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ObjectiveStatusCounters.html">ObjectiveStatusCounters</a>
     * object that specifies the number of training jobs, categorized by the status of
     * their final objective metric, that this tuning job launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const{ return m_objectiveStatusCounters; }
    inline void SetObjectiveStatusCounters(const ObjectiveStatusCounters& value) { m_objectiveStatusCounters = value; }
    inline void SetObjectiveStatusCounters(ObjectiveStatusCounters&& value) { m_objectiveStatusCounters = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithObjectiveStatusCounters(const ObjectiveStatusCounters& value) { SetObjectiveStatusCounters(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithObjectiveStatusCounters(ObjectiveStatusCounters&& value) { SetObjectiveStatusCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobSummary.html">TrainingJobSummary</a>
     * object that describes the training job that completed with the best current <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobObjective.html">HyperParameterTuningJobObjective</a>.</p>
     */
    inline const HyperParameterTrainingJobSummary& GetBestTrainingJob() const{ return m_bestTrainingJob; }
    inline void SetBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_bestTrainingJob = value; }
    inline void SetBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_bestTrainingJob = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetBestTrainingJob(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetBestTrainingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobSummary.html">TrainingJobSummary</a>
     * for the training job with the best objective metric value of all training jobs
     * launched by this tuning job and all parent jobs specified for the warm start
     * tuning job.</p>
     */
    inline const HyperParameterTrainingJobSummary& GetOverallBestTrainingJob() const{ return m_overallBestTrainingJob; }
    inline void SetOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_overallBestTrainingJob = value; }
    inline void SetOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_overallBestTrainingJob = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetOverallBestTrainingJob(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetOverallBestTrainingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const{ return m_warmStartConfig; }
    inline void SetWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { m_warmStartConfig = value; }
    inline void SetWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { m_warmStartConfig = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { SetWarmStartConfig(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { SetWarmStartConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate if autotune is enabled for the hyperparameter tuning
     * job.</p>
     */
    inline const Autotune& GetAutotune() const{ return m_autotune; }
    inline void SetAutotune(const Autotune& value) { m_autotune = value; }
    inline void SetAutotune(Autotune&& value) { m_autotune = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithAutotune(const Autotune& value) { SetAutotune(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithAutotune(Autotune&& value) { SetAutotune(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tuning job completion information returned as the response from a
     * hyperparameter tuning job. This information tells if your tuning job has or has
     * not converged. It also includes the number of training jobs that have not
     * improved model performance as evaluated against the objective function.</p>
     */
    inline const HyperParameterTuningJobCompletionDetails& GetTuningJobCompletionDetails() const{ return m_tuningJobCompletionDetails; }
    inline void SetTuningJobCompletionDetails(const HyperParameterTuningJobCompletionDetails& value) { m_tuningJobCompletionDetails = value; }
    inline void SetTuningJobCompletionDetails(HyperParameterTuningJobCompletionDetails&& value) { m_tuningJobCompletionDetails = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithTuningJobCompletionDetails(const HyperParameterTuningJobCompletionDetails& value) { SetTuningJobCompletionDetails(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithTuningJobCompletionDetails(HyperParameterTuningJobCompletionDetails&& value) { SetTuningJobCompletionDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTuningJobConsumedResources& GetConsumedResources() const{ return m_consumedResources; }
    inline void SetConsumedResources(const HyperParameterTuningJobConsumedResources& value) { m_consumedResources = value; }
    inline void SetConsumedResources(HyperParameterTuningJobConsumedResources&& value) { m_consumedResources = std::move(value); }
    inline DescribeHyperParameterTuningJobResult& WithConsumedResources(const HyperParameterTuningJobConsumedResources& value) { SetConsumedResources(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithConsumedResources(HyperParameterTuningJobConsumedResources&& value) { SetConsumedResources(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHyperParameterTuningJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHyperParameterTuningJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;

    Aws::String m_hyperParameterTuningJobArn;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;

    Aws::Vector<HyperParameterTrainingJobDefinition> m_trainingJobDefinitions;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    TrainingJobStatusCounters m_trainingJobStatusCounters;

    ObjectiveStatusCounters m_objectiveStatusCounters;

    HyperParameterTrainingJobSummary m_bestTrainingJob;

    HyperParameterTrainingJobSummary m_overallBestTrainingJob;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;

    Autotune m_autotune;

    Aws::String m_failureReason;

    HyperParameterTuningJobCompletionDetails m_tuningJobCompletionDetails;

    HyperParameterTuningJobConsumedResources m_consumedResources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
