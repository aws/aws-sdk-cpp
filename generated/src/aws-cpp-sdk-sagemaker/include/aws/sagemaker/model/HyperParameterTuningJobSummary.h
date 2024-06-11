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
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary();
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }
    inline bool HyperParameterTuningJobArnHasBeenSet() const { return m_hyperParameterTuningJobArnHasBeenSet; }
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = value; }
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::move(value); }
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn.assign(value); }
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tuning job.</p>
     */
    inline const HyperParameterTuningJobStatus& GetHyperParameterTuningJobStatus() const{ return m_hyperParameterTuningJobStatus; }
    inline bool HyperParameterTuningJobStatusHasBeenSet() const { return m_hyperParameterTuningJobStatusHasBeenSet; }
    inline void SetHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = std::move(value); }
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { SetHyperParameterTuningJobStatus(value); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { SetHyperParameterTuningJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to evaluate at each iteration.</p>
     */
    inline const HyperParameterTuningJobStrategyType& GetStrategy() const{ return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(const HyperParameterTuningJobStrategyType& value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline void SetStrategy(HyperParameterTuningJobStrategyType&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }
    inline HyperParameterTuningJobSummary& WithStrategy(const HyperParameterTuningJobStrategyType& value) { SetStrategy(value); return *this;}
    inline HyperParameterTuningJobSummary& WithStrategy(HyperParameterTuningJobStrategyType&& value) { SetStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline HyperParameterTuningJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline HyperParameterTuningJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const{ return m_hyperParameterTuningEndTime; }
    inline bool HyperParameterTuningEndTimeHasBeenSet() const { return m_hyperParameterTuningEndTimeHasBeenSet; }
    inline void SetHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = value; }
    inline void SetHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::move(value); }
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { SetHyperParameterTuningEndTime(value); return *this;}
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { SetHyperParameterTuningEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline HyperParameterTuningJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline HyperParameterTuningJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobStatusCounters.html">TrainingJobStatusCounters</a>
     * object that specifies the numbers of training jobs, categorized by status, that
     * this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const{ return m_trainingJobStatusCounters; }
    inline bool TrainingJobStatusCountersHasBeenSet() const { return m_trainingJobStatusCountersHasBeenSet; }
    inline void SetTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = value; }
    inline void SetTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::move(value); }
    inline HyperParameterTuningJobSummary& WithTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { SetTrainingJobStatusCounters(value); return *this;}
    inline HyperParameterTuningJobSummary& WithTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { SetTrainingJobStatusCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ObjectiveStatusCounters.html">ObjectiveStatusCounters</a>
     * object that specifies the numbers of training jobs, categorized by objective
     * metric status, that this tuning job launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const{ return m_objectiveStatusCounters; }
    inline bool ObjectiveStatusCountersHasBeenSet() const { return m_objectiveStatusCountersHasBeenSet; }
    inline void SetObjectiveStatusCounters(const ObjectiveStatusCounters& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = value; }
    inline void SetObjectiveStatusCounters(ObjectiveStatusCounters&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::move(value); }
    inline HyperParameterTuningJobSummary& WithObjectiveStatusCounters(const ObjectiveStatusCounters& value) { SetObjectiveStatusCounters(value); return *this;}
    inline HyperParameterTuningJobSummary& WithObjectiveStatusCounters(ObjectiveStatusCounters&& value) { SetObjectiveStatusCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>
     * object that specifies the maximum number of training jobs and parallel training
     * jobs allowed for this tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const{ return m_resourceLimits; }
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
    inline void SetResourceLimits(const ResourceLimits& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = value; }
    inline void SetResourceLimits(ResourceLimits&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::move(value); }
    inline HyperParameterTuningJobSummary& WithResourceLimits(const ResourceLimits& value) { SetResourceLimits(value); return *this;}
    inline HyperParameterTuningJobSummary& WithResourceLimits(ResourceLimits&& value) { SetResourceLimits(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet = false;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus;
    bool m_hyperParameterTuningJobStatusHasBeenSet = false;

    HyperParameterTuningJobStrategyType m_strategy;
    bool m_strategyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime;
    bool m_hyperParameterTuningEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
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
