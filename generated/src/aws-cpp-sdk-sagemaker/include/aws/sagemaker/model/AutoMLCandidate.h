/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FinalAutoMLJobObjectiveMetric.h>
#include <aws/sagemaker/model/ObjectiveStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CandidateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/CandidateProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AutoMLCandidateStep.h>
#include <aws/sagemaker/model/AutoMLContainerDefinition.h>
#include <aws/sagemaker/model/AutoMLProcessingUnit.h>
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
   * <p>Information about a candidate produced by an AutoML training job, including
   * its status, steps, and other properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLCandidate">AWS
   * API Reference</a></p>
   */
  class AutoMLCandidate
  {
  public:
    AWS_SAGEMAKER_API AutoMLCandidate() = default;
    AWS_SAGEMAKER_API AutoMLCandidate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the candidate.</p>
     */
    inline const Aws::String& GetCandidateName() const { return m_candidateName; }
    inline bool CandidateNameHasBeenSet() const { return m_candidateNameHasBeenSet; }
    template<typename CandidateNameT = Aws::String>
    void SetCandidateName(CandidateNameT&& value) { m_candidateNameHasBeenSet = true; m_candidateName = std::forward<CandidateNameT>(value); }
    template<typename CandidateNameT = Aws::String>
    AutoMLCandidate& WithCandidateName(CandidateNameT&& value) { SetCandidateName(std::forward<CandidateNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FinalAutoMLJobObjectiveMetric& GetFinalAutoMLJobObjectiveMetric() const { return m_finalAutoMLJobObjectiveMetric; }
    inline bool FinalAutoMLJobObjectiveMetricHasBeenSet() const { return m_finalAutoMLJobObjectiveMetricHasBeenSet; }
    template<typename FinalAutoMLJobObjectiveMetricT = FinalAutoMLJobObjectiveMetric>
    void SetFinalAutoMLJobObjectiveMetric(FinalAutoMLJobObjectiveMetricT&& value) { m_finalAutoMLJobObjectiveMetricHasBeenSet = true; m_finalAutoMLJobObjectiveMetric = std::forward<FinalAutoMLJobObjectiveMetricT>(value); }
    template<typename FinalAutoMLJobObjectiveMetricT = FinalAutoMLJobObjectiveMetric>
    AutoMLCandidate& WithFinalAutoMLJobObjectiveMetric(FinalAutoMLJobObjectiveMetricT&& value) { SetFinalAutoMLJobObjectiveMetric(std::forward<FinalAutoMLJobObjectiveMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The objective's status.</p>
     */
    inline ObjectiveStatus GetObjectiveStatus() const { return m_objectiveStatus; }
    inline bool ObjectiveStatusHasBeenSet() const { return m_objectiveStatusHasBeenSet; }
    inline void SetObjectiveStatus(ObjectiveStatus value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = value; }
    inline AutoMLCandidate& WithObjectiveStatus(ObjectiveStatus value) { SetObjectiveStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the candidate's steps.</p>
     */
    inline const Aws::Vector<AutoMLCandidateStep>& GetCandidateSteps() const { return m_candidateSteps; }
    inline bool CandidateStepsHasBeenSet() const { return m_candidateStepsHasBeenSet; }
    template<typename CandidateStepsT = Aws::Vector<AutoMLCandidateStep>>
    void SetCandidateSteps(CandidateStepsT&& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps = std::forward<CandidateStepsT>(value); }
    template<typename CandidateStepsT = Aws::Vector<AutoMLCandidateStep>>
    AutoMLCandidate& WithCandidateSteps(CandidateStepsT&& value) { SetCandidateSteps(std::forward<CandidateStepsT>(value)); return *this;}
    template<typename CandidateStepsT = AutoMLCandidateStep>
    AutoMLCandidate& AddCandidateSteps(CandidateStepsT&& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps.emplace_back(std::forward<CandidateStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The candidate's status.</p>
     */
    inline CandidateStatus GetCandidateStatus() const { return m_candidateStatus; }
    inline bool CandidateStatusHasBeenSet() const { return m_candidateStatusHasBeenSet; }
    inline void SetCandidateStatus(CandidateStatus value) { m_candidateStatusHasBeenSet = true; m_candidateStatus = value; }
    inline AutoMLCandidate& WithCandidateStatus(CandidateStatus value) { SetCandidateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the recommended inference container definitions.</p>
     */
    inline const Aws::Vector<AutoMLContainerDefinition>& GetInferenceContainers() const { return m_inferenceContainers; }
    inline bool InferenceContainersHasBeenSet() const { return m_inferenceContainersHasBeenSet; }
    template<typename InferenceContainersT = Aws::Vector<AutoMLContainerDefinition>>
    void SetInferenceContainers(InferenceContainersT&& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers = std::forward<InferenceContainersT>(value); }
    template<typename InferenceContainersT = Aws::Vector<AutoMLContainerDefinition>>
    AutoMLCandidate& WithInferenceContainers(InferenceContainersT&& value) { SetInferenceContainers(std::forward<InferenceContainersT>(value)); return *this;}
    template<typename InferenceContainersT = AutoMLContainerDefinition>
    AutoMLCandidate& AddInferenceContainers(InferenceContainersT&& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers.emplace_back(std::forward<InferenceContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AutoMLCandidate& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AutoMLCandidate& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AutoMLCandidate& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    AutoMLCandidate& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of an AutoML candidate job.</p>
     */
    inline const CandidateProperties& GetCandidateProperties() const { return m_candidateProperties; }
    inline bool CandidatePropertiesHasBeenSet() const { return m_candidatePropertiesHasBeenSet; }
    template<typename CandidatePropertiesT = CandidateProperties>
    void SetCandidateProperties(CandidatePropertiesT&& value) { m_candidatePropertiesHasBeenSet = true; m_candidateProperties = std::forward<CandidatePropertiesT>(value); }
    template<typename CandidatePropertiesT = CandidateProperties>
    AutoMLCandidate& WithCandidateProperties(CandidatePropertiesT&& value) { SetCandidateProperties(std::forward<CandidatePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping of all supported processing unit (CPU, GPU, etc...) to inference
     * container definitions for the candidate. This field is populated for the AutoML
     * jobs V2 (for example, for jobs created by calling
     * <code>CreateAutoMLJobV2</code>) related to image or text classification problem
     * types only.</p>
     */
    inline const Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>& GetInferenceContainerDefinitions() const { return m_inferenceContainerDefinitions; }
    inline bool InferenceContainerDefinitionsHasBeenSet() const { return m_inferenceContainerDefinitionsHasBeenSet; }
    template<typename InferenceContainerDefinitionsT = Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>>
    void SetInferenceContainerDefinitions(InferenceContainerDefinitionsT&& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions = std::forward<InferenceContainerDefinitionsT>(value); }
    template<typename InferenceContainerDefinitionsT = Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>>
    AutoMLCandidate& WithInferenceContainerDefinitions(InferenceContainerDefinitionsT&& value) { SetInferenceContainerDefinitions(std::forward<InferenceContainerDefinitionsT>(value)); return *this;}
    inline AutoMLCandidate& AddInferenceContainerDefinitions(AutoMLProcessingUnit key, Aws::Vector<AutoMLContainerDefinition> value) {
      m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_candidateName;
    bool m_candidateNameHasBeenSet = false;

    FinalAutoMLJobObjectiveMetric m_finalAutoMLJobObjectiveMetric;
    bool m_finalAutoMLJobObjectiveMetricHasBeenSet = false;

    ObjectiveStatus m_objectiveStatus{ObjectiveStatus::NOT_SET};
    bool m_objectiveStatusHasBeenSet = false;

    Aws::Vector<AutoMLCandidateStep> m_candidateSteps;
    bool m_candidateStepsHasBeenSet = false;

    CandidateStatus m_candidateStatus{CandidateStatus::NOT_SET};
    bool m_candidateStatusHasBeenSet = false;

    Aws::Vector<AutoMLContainerDefinition> m_inferenceContainers;
    bool m_inferenceContainersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    CandidateProperties m_candidateProperties;
    bool m_candidatePropertiesHasBeenSet = false;

    Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>> m_inferenceContainerDefinitions;
    bool m_inferenceContainerDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
