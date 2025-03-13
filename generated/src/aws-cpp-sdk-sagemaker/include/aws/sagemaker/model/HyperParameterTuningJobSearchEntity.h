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
#include <aws/sagemaker/model/HyperParameterTuningJobCompletionDetails.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConsumedResources.h>
#include <aws/sagemaker/model/Tag.h>
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
   * <p>An entity returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_SearchRecord.html">SearchRecord</a>
   * API containing the properties of a hyperparameter tuning job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobSearchEntity">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobSearchEntity
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity() = default;
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const { return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    void SetHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::forward<HyperParameterTuningJobNameT>(value); }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { SetHyperParameterTuningJobName(std::forward<HyperParameterTuningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const { return m_hyperParameterTuningJobArn; }
    inline bool HyperParameterTuningJobArnHasBeenSet() const { return m_hyperParameterTuningJobArnHasBeenSet; }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    void SetHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::forward<HyperParameterTuningJobArnT>(value); }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { SetHyperParameterTuningJobArn(std::forward<HyperParameterTuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const { return m_hyperParameterTuningJobConfig; }
    inline bool HyperParameterTuningJobConfigHasBeenSet() const { return m_hyperParameterTuningJobConfigHasBeenSet; }
    template<typename HyperParameterTuningJobConfigT = HyperParameterTuningJobConfig>
    void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfigT&& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = std::forward<HyperParameterTuningJobConfigT>(value); }
    template<typename HyperParameterTuningJobConfigT = HyperParameterTuningJobConfig>
    HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfigT&& value) { SetHyperParameterTuningJobConfig(std::forward<HyperParameterTuningJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const { return m_trainingJobDefinition; }
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }
    template<typename TrainingJobDefinitionT = HyperParameterTrainingJobDefinition>
    void SetTrainingJobDefinition(TrainingJobDefinitionT&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::forward<TrainingJobDefinitionT>(value); }
    template<typename TrainingJobDefinitionT = HyperParameterTrainingJobDefinition>
    HyperParameterTuningJobSearchEntity& WithTrainingJobDefinition(TrainingJobDefinitionT&& value) { SetTrainingJobDefinition(std::forward<TrainingJobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobDefinition>& GetTrainingJobDefinitions() const { return m_trainingJobDefinitions; }
    inline bool TrainingJobDefinitionsHasBeenSet() const { return m_trainingJobDefinitionsHasBeenSet; }
    template<typename TrainingJobDefinitionsT = Aws::Vector<HyperParameterTrainingJobDefinition>>
    void SetTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = std::forward<TrainingJobDefinitionsT>(value); }
    template<typename TrainingJobDefinitionsT = Aws::Vector<HyperParameterTrainingJobDefinition>>
    HyperParameterTuningJobSearchEntity& WithTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { SetTrainingJobDefinitions(std::forward<TrainingJobDefinitionsT>(value)); return *this;}
    template<typename TrainingJobDefinitionsT = HyperParameterTrainingJobDefinition>
    HyperParameterTuningJobSearchEntity& AddTrainingJobDefinitions(TrainingJobDefinitionsT&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.emplace_back(std::forward<TrainingJobDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobStatus GetHyperParameterTuningJobStatus() const { return m_hyperParameterTuningJobStatus; }
    inline bool HyperParameterTuningJobStatusHasBeenSet() const { return m_hyperParameterTuningJobStatusHasBeenSet; }
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus value) { SetHyperParameterTuningJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSearchEntity& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const { return m_hyperParameterTuningEndTime; }
    inline bool HyperParameterTuningEndTimeHasBeenSet() const { return m_hyperParameterTuningEndTimeHasBeenSet; }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    void SetHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::forward<HyperParameterTuningEndTimeT>(value); }
    template<typename HyperParameterTuningEndTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSearchEntity& WithHyperParameterTuningEndTime(HyperParameterTuningEndTimeT&& value) { SetHyperParameterTuningEndTime(std::forward<HyperParameterTuningEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobSearchEntity& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const { return m_trainingJobStatusCounters; }
    inline bool TrainingJobStatusCountersHasBeenSet() const { return m_trainingJobStatusCountersHasBeenSet; }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    void SetTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::forward<TrainingJobStatusCountersT>(value); }
    template<typename TrainingJobStatusCountersT = TrainingJobStatusCounters>
    HyperParameterTuningJobSearchEntity& WithTrainingJobStatusCounters(TrainingJobStatusCountersT&& value) { SetTrainingJobStatusCounters(std::forward<TrainingJobStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const { return m_objectiveStatusCounters; }
    inline bool ObjectiveStatusCountersHasBeenSet() const { return m_objectiveStatusCountersHasBeenSet; }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    void SetObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::forward<ObjectiveStatusCountersT>(value); }
    template<typename ObjectiveStatusCountersT = ObjectiveStatusCounters>
    HyperParameterTuningJobSearchEntity& WithObjectiveStatusCounters(ObjectiveStatusCountersT&& value) { SetObjectiveStatusCounters(std::forward<ObjectiveStatusCountersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTrainingJobSummary& GetBestTrainingJob() const { return m_bestTrainingJob; }
    inline bool BestTrainingJobHasBeenSet() const { return m_bestTrainingJobHasBeenSet; }
    template<typename BestTrainingJobT = HyperParameterTrainingJobSummary>
    void SetBestTrainingJob(BestTrainingJobT&& value) { m_bestTrainingJobHasBeenSet = true; m_bestTrainingJob = std::forward<BestTrainingJobT>(value); }
    template<typename BestTrainingJobT = HyperParameterTrainingJobSummary>
    HyperParameterTuningJobSearchEntity& WithBestTrainingJob(BestTrainingJobT&& value) { SetBestTrainingJob(std::forward<BestTrainingJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTrainingJobSummary& GetOverallBestTrainingJob() const { return m_overallBestTrainingJob; }
    inline bool OverallBestTrainingJobHasBeenSet() const { return m_overallBestTrainingJobHasBeenSet; }
    template<typename OverallBestTrainingJobT = HyperParameterTrainingJobSummary>
    void SetOverallBestTrainingJob(OverallBestTrainingJobT&& value) { m_overallBestTrainingJobHasBeenSet = true; m_overallBestTrainingJob = std::forward<OverallBestTrainingJobT>(value); }
    template<typename OverallBestTrainingJobT = HyperParameterTrainingJobSummary>
    HyperParameterTuningJobSearchEntity& WithOverallBestTrainingJob(OverallBestTrainingJobT&& value) { SetOverallBestTrainingJob(std::forward<OverallBestTrainingJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const { return m_warmStartConfig; }
    inline bool WarmStartConfigHasBeenSet() const { return m_warmStartConfigHasBeenSet; }
    template<typename WarmStartConfigT = HyperParameterTuningJobWarmStartConfig>
    void SetWarmStartConfig(WarmStartConfigT&& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = std::forward<WarmStartConfigT>(value); }
    template<typename WarmStartConfigT = HyperParameterTuningJobWarmStartConfig>
    HyperParameterTuningJobSearchEntity& WithWarmStartConfig(WarmStartConfigT&& value) { SetWarmStartConfig(std::forward<WarmStartConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    HyperParameterTuningJobSearchEntity& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about either a current or completed hyperparameter tuning
     * job.</p>
     */
    inline const HyperParameterTuningJobCompletionDetails& GetTuningJobCompletionDetails() const { return m_tuningJobCompletionDetails; }
    inline bool TuningJobCompletionDetailsHasBeenSet() const { return m_tuningJobCompletionDetailsHasBeenSet; }
    template<typename TuningJobCompletionDetailsT = HyperParameterTuningJobCompletionDetails>
    void SetTuningJobCompletionDetails(TuningJobCompletionDetailsT&& value) { m_tuningJobCompletionDetailsHasBeenSet = true; m_tuningJobCompletionDetails = std::forward<TuningJobCompletionDetailsT>(value); }
    template<typename TuningJobCompletionDetailsT = HyperParameterTuningJobCompletionDetails>
    HyperParameterTuningJobSearchEntity& WithTuningJobCompletionDetails(TuningJobCompletionDetailsT&& value) { SetTuningJobCompletionDetails(std::forward<TuningJobCompletionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of resources consumed by a hyperparameter tuning job.</p>
     */
    inline const HyperParameterTuningJobConsumedResources& GetConsumedResources() const { return m_consumedResources; }
    inline bool ConsumedResourcesHasBeenSet() const { return m_consumedResourcesHasBeenSet; }
    template<typename ConsumedResourcesT = HyperParameterTuningJobConsumedResources>
    void SetConsumedResources(ConsumedResourcesT&& value) { m_consumedResourcesHasBeenSet = true; m_consumedResources = std::forward<ConsumedResourcesT>(value); }
    template<typename ConsumedResourcesT = HyperParameterTuningJobConsumedResources>
    HyperParameterTuningJobSearchEntity& WithConsumedResources(ConsumedResourcesT&& value) { SetConsumedResources(std::forward<ConsumedResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    HyperParameterTuningJobSearchEntity& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    HyperParameterTuningJobSearchEntity& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    HyperParameterTuningJobCompletionDetails m_tuningJobCompletionDetails;
    bool m_tuningJobCompletionDetailsHasBeenSet = false;

    HyperParameterTuningJobConsumedResources m_consumedResources;
    bool m_consumedResourcesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
