/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/FinalHyperParameterTuningJobObjectiveMetric.h>
#include <aws/sagemaker/model/ObjectiveStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The container for the summary information about a training job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTrainingJobSummary">AWS
   * API Reference</a></p>
   */
  class HyperParameterTrainingJobSummary
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTrainingJobSummary() = default;
    AWS_SAGEMAKER_API HyperParameterTrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The training job definition name.</p>
     */
    inline const Aws::String& GetTrainingJobDefinitionName() const { return m_trainingJobDefinitionName; }
    inline bool TrainingJobDefinitionNameHasBeenSet() const { return m_trainingJobDefinitionNameHasBeenSet; }
    template<typename TrainingJobDefinitionNameT = Aws::String>
    void SetTrainingJobDefinitionName(TrainingJobDefinitionNameT&& value) { m_trainingJobDefinitionNameHasBeenSet = true; m_trainingJobDefinitionName = std::forward<TrainingJobDefinitionNameT>(value); }
    template<typename TrainingJobDefinitionNameT = Aws::String>
    HyperParameterTrainingJobSummary& WithTrainingJobDefinitionName(TrainingJobDefinitionNameT&& value) { SetTrainingJobDefinitionName(std::forward<TrainingJobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    HyperParameterTrainingJobSummary& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    HyperParameterTrainingJobSummary& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline const Aws::String& GetTuningJobName() const { return m_tuningJobName; }
    inline bool TuningJobNameHasBeenSet() const { return m_tuningJobNameHasBeenSet; }
    template<typename TuningJobNameT = Aws::String>
    void SetTuningJobName(TuningJobNameT&& value) { m_tuningJobNameHasBeenSet = true; m_tuningJobName = std::forward<TuningJobNameT>(value); }
    template<typename TuningJobNameT = Aws::String>
    HyperParameterTrainingJobSummary& WithTuningJobName(TuningJobNameT&& value) { SetTuningJobName(std::forward<TuningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HyperParameterTrainingJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the training job started.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const { return m_trainingStartTime; }
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    void SetTrainingStartTime(TrainingStartTimeT&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::forward<TrainingStartTimeT>(value); }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    HyperParameterTrainingJobSummary& WithTrainingStartTime(TrainingStartTimeT&& value) { SetTrainingStartTime(std::forward<TrainingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const { return m_trainingEndTime; }
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    void SetTrainingEndTime(TrainingEndTimeT&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::forward<TrainingEndTimeT>(value); }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    HyperParameterTrainingJobSummary& WithTrainingEndTime(TrainingEndTimeT&& value) { SetTrainingEndTime(std::forward<TrainingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training job.</p>
     */
    inline TrainingJobStatus GetTrainingJobStatus() const { return m_trainingJobStatus; }
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }
    inline void SetTrainingJobStatus(TrainingJobStatus value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }
    inline HyperParameterTrainingJobSummary& WithTrainingJobStatus(TrainingJobStatus value) { SetTrainingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTunedHyperParameters() const { return m_tunedHyperParameters; }
    inline bool TunedHyperParametersHasBeenSet() const { return m_tunedHyperParametersHasBeenSet; }
    template<typename TunedHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTunedHyperParameters(TunedHyperParametersT&& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters = std::forward<TunedHyperParametersT>(value); }
    template<typename TunedHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    HyperParameterTrainingJobSummary& WithTunedHyperParameters(TunedHyperParametersT&& value) { SetTunedHyperParameters(std::forward<TunedHyperParametersT>(value)); return *this;}
    template<typename TunedHyperParametersKeyT = Aws::String, typename TunedHyperParametersValueT = Aws::String>
    HyperParameterTrainingJobSummary& AddTunedHyperParameters(TunedHyperParametersKeyT&& key, TunedHyperParametersValueT&& value) {
      m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(std::forward<TunedHyperParametersKeyT>(key), std::forward<TunedHyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The reason that the training job failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    HyperParameterTrainingJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_FinalHyperParameterTuningJobObjectiveMetric.html">FinalHyperParameterTuningJobObjectiveMetric</a>
     * object that specifies the value of the objective metric of the tuning job that
     * launched this training job.</p>
     */
    inline const FinalHyperParameterTuningJobObjectiveMetric& GetFinalHyperParameterTuningJobObjectiveMetric() const { return m_finalHyperParameterTuningJobObjectiveMetric; }
    inline bool FinalHyperParameterTuningJobObjectiveMetricHasBeenSet() const { return m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet; }
    template<typename FinalHyperParameterTuningJobObjectiveMetricT = FinalHyperParameterTuningJobObjectiveMetric>
    void SetFinalHyperParameterTuningJobObjectiveMetric(FinalHyperParameterTuningJobObjectiveMetricT&& value) { m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet = true; m_finalHyperParameterTuningJobObjectiveMetric = std::forward<FinalHyperParameterTuningJobObjectiveMetricT>(value); }
    template<typename FinalHyperParameterTuningJobObjectiveMetricT = FinalHyperParameterTuningJobObjectiveMetric>
    HyperParameterTrainingJobSummary& WithFinalHyperParameterTuningJobObjectiveMetric(FinalHyperParameterTuningJobObjectiveMetricT&& value) { SetFinalHyperParameterTuningJobObjectiveMetric(std::forward<FinalHyperParameterTuningJobObjectiveMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline ObjectiveStatus GetObjectiveStatus() const { return m_objectiveStatus; }
    inline bool ObjectiveStatusHasBeenSet() const { return m_objectiveStatusHasBeenSet; }
    inline void SetObjectiveStatus(ObjectiveStatus value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = value; }
    inline HyperParameterTrainingJobSummary& WithObjectiveStatus(ObjectiveStatus value) { SetObjectiveStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobDefinitionName;
    bool m_trainingJobDefinitionNameHasBeenSet = false;

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::String m_tuningJobName;
    bool m_tuningJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingStartTime{};
    bool m_trainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime{};
    bool m_trainingEndTimeHasBeenSet = false;

    TrainingJobStatus m_trainingJobStatus{TrainingJobStatus::NOT_SET};
    bool m_trainingJobStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tunedHyperParameters;
    bool m_tunedHyperParametersHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    FinalHyperParameterTuningJobObjectiveMetric m_finalHyperParameterTuningJobObjectiveMetric;
    bool m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet = false;

    ObjectiveStatus m_objectiveStatus{ObjectiveStatus::NOT_SET};
    bool m_objectiveStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
