/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/sagemaker/model/ResourceLimits.h>
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
   * <p>Provides summary information about a hyperparameter tuning job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobSummary">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobSummary
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary() = default;
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const { return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    void SetHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::forward<HyperParameterTuningJobNameT>(value); }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { SetHyperParameterTuningJobName(std::forward<HyperParameterTuningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const { return m_hyperParameterTuningJobArn; }
    inline bool HyperParameterTuningJobArnHasBeenSet() const { return m_hyperParameterTuningJobArnHasBeenSet; }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    void SetHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::forward<HyperParameterTuningJobArnT>(value); }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { SetHyperParameterTuningJobArn(std::forward<HyperParameterTuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tuning job.</p>
     */
    inline HyperParameterTuningJobStatus GetHyperParameterTuningJobStatus() const { return m_hyperParameterTuningJobStatus; }
    inline bool HyperParameterTuningJobStatusHasBeenSet() const { return m_hyperParameterTuningJobStatusHasBeenSet; }
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { SetHyperParameterTuningJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to evaluate at each iteration.</p>
     */
    inline HyperParameterTuningJobStrategyType GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(HyperParameterTuningJobStrategyType value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline HyperParameterTuningJobSummary& WithStrategy(HyperParameterTuningJobStrategyType value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const { return m_hyperParameterTuningEndTime; }
    inline bool HyperParameterTuningEndTimeHasBeenSet() const { return m_hyperParameterTuningEndTimeHasBeenSet; }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    void SetHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::forward<HyperParameterTuningEndTimeT>(value); }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSummary& WithHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { SetHyperParameterTuningEndTime(std::forward<HyperParameterTuningEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobStatusCounters.html">TrainingJobStatusCounters</a>
     * object that specifies the numbers of training jobs, categorized by status, that
     * this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const { return m_trainingJobStatusCounters; }
    inline bool TrainingJobStatusCountersHasBeenSet() const { return m_trainingJobStatusCountersHasBeenSet; }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    void SetTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::forward<TrainingJobStatusCountersT>(value); }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    HyperParameterTuningJobSummary& WithTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { SetTrainingJobStatusCounters(std::forward<TrainingJobStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ObjectiveStatusCounters.html">ObjectiveStatusCounters</a>
     * object that specifies the numbers of training jobs, categorized by objective
     * metric status, that this tuning job launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const { return m_objectiveStatusCounters; }
    inline bool ObjectiveStatusCountersHasBeenSet() const { return m_objectiveStatusCountersHasBeenSet; }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    void SetObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::forward<ObjectiveStatusCountersT>(value); }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    HyperParameterTuningJobSummary& WithObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { SetObjectiveStatusCounters(std::forward<ObjectiveStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>
     * object that specifies the maximum number of training jobs and parallel training
     * jobs allowed for this tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const { return m_resourceLimits; }
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
    template<typename ResourceLimitsT = ResourceLimits>
    void SetResourceLimits(ResourceLimitsT&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::forward<ResourceLimitsT>(value); }
    template<typename ResourceLimitsT = ResourceLimits>
    HyperParameterTuningJobSummary& WithResourceLimits(ResourceLimitsT&& value) { SetResourceLimits(std::forward<ResourceLimitsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet = false;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus{HyperParameterTuningJobStatus::NOT_SET};
    bool m_hyperParameterTuningJobStatusHasBeenSet = false;

    HyperParameterTuningJobStrategyType m_strategy{HyperParameterTuningJobStrategyType::NOT_SET};
    bool m_strategyHasBeenSet = false;

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

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
