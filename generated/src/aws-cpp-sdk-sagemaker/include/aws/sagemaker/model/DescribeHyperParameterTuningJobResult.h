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
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult() = default;
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const { return m_hyperParameterTuningJobName; }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    void SetHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::forward<HyperParameterTuningJobNameT>(value); }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { SetHyperParameterTuningJobName(std::forward<HyperParameterTuningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const { return m_hyperParameterTuningJobArn; }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    void SetHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::forward<HyperParameterTuningJobArnT>(value); }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { SetHyperParameterTuningJobArn(std::forward<HyperParameterTuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">HyperParameterTuningJobConfig</a>
     * object that specifies the configuration of the tuning job.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const { return m_hyperParameterTuningJobConfig; }
    template<typename HyperParameterTuningJobConfigT = HyperParameterTuningJobConfig>
    void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfigT&& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = std::forward<HyperParameterTuningJobConfigT>(value); }
    template<typename HyperParameterTuningJobConfigT = HyperParameterTuningJobConfig>
    DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfigT&& value) { SetHyperParameterTuningJobConfig(std::forward<HyperParameterTuningJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * object that specifies the definition of the training jobs that this tuning job
     * launches.</p>
     */
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const { return m_trainingJobDefinition; }
    template<typename TrainingJobDefinitionT = HyperParameterTrainingJobDefinition>
    void SetTrainingJobDefinition(TrainingJobDefinitionT&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::forward<TrainingJobDefinitionT>(value); }
    template<typename TrainingJobDefinitionT = HyperParameterTrainingJobDefinition>
    DescribeHyperParameterTuningJobResult& WithTrainingJobDefinition(TrainingJobDefinitionT&& value) { SetTrainingJobDefinition(std::forward<TrainingJobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * objects launched for this tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobDefinition>& GetTrainingJobDefinitions() const { return m_trainingJobDefinitions; }
    template<typename TrainingJobDefinitionsT = Aws::Vector<HyperParameterTrainingJobDefinition>>
    void SetTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = std::forward<TrainingJobDefinitionsT>(value); }
    template<typename TrainingJobDefinitionsT = Aws::Vector<HyperParameterTrainingJobDefinition>>
    DescribeHyperParameterTuningJobResult& WithTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { SetTrainingJobDefinitions(std::forward<TrainingJobDefinitionsT>(value)); return *this;}
    template<typename TrainingJobDefinitionsT = HyperParameterTrainingJobDefinition>
    DescribeHyperParameterTuningJobResult& AddTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.emplace_back(std::forward<TrainingJobDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the tuning job.</p>
     */
    inline HyperParameterTuningJobStatus GetHyperParameterTuningJobStatus() const { return m_hyperParameterTuningJobStatus; }
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { SetHyperParameterTuningJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeHyperParameterTuningJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const { return m_hyperParameterTuningEndTime; }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    void SetHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::forward<HyperParameterTuningEndTimeT>(value); }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    DescribeHyperParameterTuningJobResult& WithHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { SetHyperParameterTuningEndTime(std::forward<HyperParameterTuningEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeHyperParameterTuningJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobStatusCounters.html">TrainingJobStatusCounters</a>
     * object that specifies the number of training jobs, categorized by status, that
     * this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const { return m_trainingJobStatusCounters; }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    void SetTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::forward<TrainingJobStatusCountersT>(value); }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    DescribeHyperParameterTuningJobResult& WithTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { SetTrainingJobStatusCounters(std::forward<TrainingJobStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ObjectiveStatusCounters.html">ObjectiveStatusCounters</a>
     * object that specifies the number of training jobs, categorized by the status of
     * their final objective metric, that this tuning job launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const { return m_objectiveStatusCounters; }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    void SetObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::forward<ObjectiveStatusCountersT>(value); }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    DescribeHyperParameterTuningJobResult& WithObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { SetObjectiveStatusCounters(std::forward<ObjectiveStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobSummary.html">TrainingJobSummary</a>
     * object that describes the training job that completed with the best current <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobObjective.html">HyperParameterTuningJobObjective</a>.</p>
     */
    inline const HyperParameterTrainingJobSummary& GetBestTrainingJob() const { return m_bestTrainingJob; }
    template<typename BestTrainingJobT = HyperParameterTrainingJobSummary>
    void SetBestTrainingJob(BestTrainingJobT&& value) { m_bestTrainingJobHasBeenSet = true; m_bestTrainingJob = std::forward<BestTrainingJobT>(value); }
    template<typename BestTrainingJobT = HyperParameterTrainingJobSummary>
    DescribeHyperParameterTuningJobResult& WithBestTrainingJob(BestTrainingJobT&& value) { SetBestTrainingJob(std::forward<BestTrainingJobT>(value)); return *this;}
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
    inline const HyperParameterTrainingJobSummary& GetOverallBestTrainingJob() const { return m_overallBestTrainingJob; }
    template<typename OverallBestTrainingJobT = HyperParameterTrainingJobSummary>
    void SetOverallBestTrainingJob(OverallBestTrainingJobT&& value) { m_overallBestTrainingJobHasBeenSet = true; m_overallBestTrainingJob = std::forward<OverallBestTrainingJobT>(value); }
    template<typename OverallBestTrainingJobT = HyperParameterTrainingJobSummary>
    DescribeHyperParameterTuningJobResult& WithOverallBestTrainingJob(OverallBestTrainingJobT&& value) { SetOverallBestTrainingJob(std::forward<OverallBestTrainingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const { return m_warmStartConfig; }
    template<typename WarmStartConfigT = HyperParameterTuningJobWarmStartConfig>
    void SetWarmStartConfig(WarmStartConfigT&& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = std::forward<WarmStartConfigT>(value); }
    template<typename WarmStartConfigT = HyperParameterTuningJobWarmStartConfig>
    DescribeHyperParameterTuningJobResult& WithWarmStartConfig(WarmStartConfigT&& value) { SetWarmStartConfig(std::forward<WarmStartConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate if autotune is enabled for the hyperparameter tuning
     * job.</p>
     */
    inline const Autotune& GetAutotune() const { return m_autotune; }
    template<typename AutotuneT = Autotune>
    void SetAutotune(AutotuneT&& value) { m_autotuneHasBeenSet = true; m_autotune = std::forward<AutotuneT>(value); }
    template<typename AutotuneT = Autotune>
    DescribeHyperParameterTuningJobResult& WithAutotune(AutotuneT&& value) { SetAutotune(std::forward<AutotuneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeHyperParameterTuningJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tuning job completion information returned as the response from a
     * hyperparameter tuning job. This information tells if your tuning job has or has
     * not converged. It also includes the number of training jobs that have not
     * improved model performance as evaluated against the objective function.</p>
     */
    inline const HyperParameterTuningJobCompletionDetails& GetTuningJobCompletionDetails() const { return m_tuningJobCompletionDetails; }
    template<typename TuningJobCompletionDetailsT = HyperParameterTuningJobCompletionDetails>
    void SetTuningJobCompletionDetails(TuningJobCompletionDetailsT&& value) { m_tuningJobCompletionDetailsHasBeenSet = true; m_tuningJobCompletionDetails = std::forward<TuningJobCompletionDetailsT>(value); }
    template<typename TuningJobCompletionDetailsT = HyperParameterTuningJobCompletionDetails>
    DescribeHyperParameterTuningJobResult& WithTuningJobCompletionDetails(TuningJobCompletionDetailsT&& value) { SetTuningJobCompletionDetails(std::forward<TuningJobCompletionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTuningJobConsumedResources& GetConsumedResources() const { return m_consumedResources; }
    template<typename ConsumedResourcesT = HyperParameterTuningJobConsumedResources>
    void SetConsumedResources(ConsumedResourcesT&& value) { m_consumedResourcesHasBeenSet = true; m_consumedResources = std::forward<ConsumedResourcesT>(value); }
    template<typename ConsumedResourcesT = HyperParameterTuningJobConsumedResources>
    DescribeHyperParameterTuningJobResult& WithConsumedResources(ConsumedResourcesT&& value) { SetConsumedResources(std::forward<ConsumedResourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHyperParameterTuningJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet = false;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;
    bool m_hyperParameterTuningJobConfigHasBeenSet = false;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;
    bool m_trainingJobDefinitionHasBeenSet = false;

    Aws::Vector<HyperParameterTrainingJobDefinition> m_trainingJobDefinitions;
    bool m_trainingJobDefinitionsHasBeenSet = false;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus{HyperParameterTuningJobStatus::NOT_SET};
    bool m_hyperParameterTuningJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime{};
    bool m_hyperParameterTuningEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    TrainingJobStatusCounters m_trainingJobStatusCounters;
    bool m_trainingJobStatusCountersHasBeenSet = false;

    ObjectiveStatusCounters m_objectiveStatusCounters;
    bool m_objectiveStatusCountersHasBeenSet = false;

    HyperParameterTrainingJobSummary m_bestTrainingJob;
    bool m_bestTrainingJobHasBeenSet = false;

    HyperParameterTrainingJobSummary m_overallBestTrainingJob;
    bool m_overallBestTrainingJobHasBeenSet = false;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;
    bool m_warmStartConfigHasBeenSet = false;

    Autotune m_autotune;
    bool m_autotuneHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    HyperParameterTuningJobCompletionDetails m_tuningJobCompletionDetails;
    bool m_tuningJobCompletionDetailsHasBeenSet = false;

    HyperParameterTuningJobConsumedResources m_consumedResources;
    bool m_consumedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
