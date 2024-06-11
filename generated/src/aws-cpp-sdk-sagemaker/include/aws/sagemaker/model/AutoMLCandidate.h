﻿/**
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
    AWS_SAGEMAKER_API AutoMLCandidate();
    AWS_SAGEMAKER_API AutoMLCandidate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the candidate.</p>
     */
    inline const Aws::String& GetCandidateName() const{ return m_candidateName; }
    inline bool CandidateNameHasBeenSet() const { return m_candidateNameHasBeenSet; }
    inline void SetCandidateName(const Aws::String& value) { m_candidateNameHasBeenSet = true; m_candidateName = value; }
    inline void SetCandidateName(Aws::String&& value) { m_candidateNameHasBeenSet = true; m_candidateName = std::move(value); }
    inline void SetCandidateName(const char* value) { m_candidateNameHasBeenSet = true; m_candidateName.assign(value); }
    inline AutoMLCandidate& WithCandidateName(const Aws::String& value) { SetCandidateName(value); return *this;}
    inline AutoMLCandidate& WithCandidateName(Aws::String&& value) { SetCandidateName(std::move(value)); return *this;}
    inline AutoMLCandidate& WithCandidateName(const char* value) { SetCandidateName(value); return *this;}
    ///@}

    ///@{
    
    inline const FinalAutoMLJobObjectiveMetric& GetFinalAutoMLJobObjectiveMetric() const{ return m_finalAutoMLJobObjectiveMetric; }
    inline bool FinalAutoMLJobObjectiveMetricHasBeenSet() const { return m_finalAutoMLJobObjectiveMetricHasBeenSet; }
    inline void SetFinalAutoMLJobObjectiveMetric(const FinalAutoMLJobObjectiveMetric& value) { m_finalAutoMLJobObjectiveMetricHasBeenSet = true; m_finalAutoMLJobObjectiveMetric = value; }
    inline void SetFinalAutoMLJobObjectiveMetric(FinalAutoMLJobObjectiveMetric&& value) { m_finalAutoMLJobObjectiveMetricHasBeenSet = true; m_finalAutoMLJobObjectiveMetric = std::move(value); }
    inline AutoMLCandidate& WithFinalAutoMLJobObjectiveMetric(const FinalAutoMLJobObjectiveMetric& value) { SetFinalAutoMLJobObjectiveMetric(value); return *this;}
    inline AutoMLCandidate& WithFinalAutoMLJobObjectiveMetric(FinalAutoMLJobObjectiveMetric&& value) { SetFinalAutoMLJobObjectiveMetric(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The objective's status.</p>
     */
    inline const ObjectiveStatus& GetObjectiveStatus() const{ return m_objectiveStatus; }
    inline bool ObjectiveStatusHasBeenSet() const { return m_objectiveStatusHasBeenSet; }
    inline void SetObjectiveStatus(const ObjectiveStatus& value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = value; }
    inline void SetObjectiveStatus(ObjectiveStatus&& value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = std::move(value); }
    inline AutoMLCandidate& WithObjectiveStatus(const ObjectiveStatus& value) { SetObjectiveStatus(value); return *this;}
    inline AutoMLCandidate& WithObjectiveStatus(ObjectiveStatus&& value) { SetObjectiveStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the candidate's steps.</p>
     */
    inline const Aws::Vector<AutoMLCandidateStep>& GetCandidateSteps() const{ return m_candidateSteps; }
    inline bool CandidateStepsHasBeenSet() const { return m_candidateStepsHasBeenSet; }
    inline void SetCandidateSteps(const Aws::Vector<AutoMLCandidateStep>& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps = value; }
    inline void SetCandidateSteps(Aws::Vector<AutoMLCandidateStep>&& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps = std::move(value); }
    inline AutoMLCandidate& WithCandidateSteps(const Aws::Vector<AutoMLCandidateStep>& value) { SetCandidateSteps(value); return *this;}
    inline AutoMLCandidate& WithCandidateSteps(Aws::Vector<AutoMLCandidateStep>&& value) { SetCandidateSteps(std::move(value)); return *this;}
    inline AutoMLCandidate& AddCandidateSteps(const AutoMLCandidateStep& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps.push_back(value); return *this; }
    inline AutoMLCandidate& AddCandidateSteps(AutoMLCandidateStep&& value) { m_candidateStepsHasBeenSet = true; m_candidateSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The candidate's status.</p>
     */
    inline const CandidateStatus& GetCandidateStatus() const{ return m_candidateStatus; }
    inline bool CandidateStatusHasBeenSet() const { return m_candidateStatusHasBeenSet; }
    inline void SetCandidateStatus(const CandidateStatus& value) { m_candidateStatusHasBeenSet = true; m_candidateStatus = value; }
    inline void SetCandidateStatus(CandidateStatus&& value) { m_candidateStatusHasBeenSet = true; m_candidateStatus = std::move(value); }
    inline AutoMLCandidate& WithCandidateStatus(const CandidateStatus& value) { SetCandidateStatus(value); return *this;}
    inline AutoMLCandidate& WithCandidateStatus(CandidateStatus&& value) { SetCandidateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the recommended inference container definitions.</p>
     */
    inline const Aws::Vector<AutoMLContainerDefinition>& GetInferenceContainers() const{ return m_inferenceContainers; }
    inline bool InferenceContainersHasBeenSet() const { return m_inferenceContainersHasBeenSet; }
    inline void SetInferenceContainers(const Aws::Vector<AutoMLContainerDefinition>& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers = value; }
    inline void SetInferenceContainers(Aws::Vector<AutoMLContainerDefinition>&& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers = std::move(value); }
    inline AutoMLCandidate& WithInferenceContainers(const Aws::Vector<AutoMLContainerDefinition>& value) { SetInferenceContainers(value); return *this;}
    inline AutoMLCandidate& WithInferenceContainers(Aws::Vector<AutoMLContainerDefinition>&& value) { SetInferenceContainers(std::move(value)); return *this;}
    inline AutoMLCandidate& AddInferenceContainers(const AutoMLContainerDefinition& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers.push_back(value); return *this; }
    inline AutoMLCandidate& AddInferenceContainers(AutoMLContainerDefinition&& value) { m_inferenceContainersHasBeenSet = true; m_inferenceContainers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AutoMLCandidate& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AutoMLCandidate& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AutoMLCandidate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AutoMLCandidate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AutoMLCandidate& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AutoMLCandidate& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AutoMLCandidate& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AutoMLCandidate& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AutoMLCandidate& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of an AutoML candidate job.</p>
     */
    inline const CandidateProperties& GetCandidateProperties() const{ return m_candidateProperties; }
    inline bool CandidatePropertiesHasBeenSet() const { return m_candidatePropertiesHasBeenSet; }
    inline void SetCandidateProperties(const CandidateProperties& value) { m_candidatePropertiesHasBeenSet = true; m_candidateProperties = value; }
    inline void SetCandidateProperties(CandidateProperties&& value) { m_candidatePropertiesHasBeenSet = true; m_candidateProperties = std::move(value); }
    inline AutoMLCandidate& WithCandidateProperties(const CandidateProperties& value) { SetCandidateProperties(value); return *this;}
    inline AutoMLCandidate& WithCandidateProperties(CandidateProperties&& value) { SetCandidateProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping of all supported processing unit (CPU, GPU, etc...) to inference
     * container definitions for the candidate. This field is populated for the AutoML
     * jobs V2 (for example, for jobs created by calling
     * <code>CreateAutoMLJobV2</code>) related to image or text classification problem
     * types only.</p>
     */
    inline const Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>& GetInferenceContainerDefinitions() const{ return m_inferenceContainerDefinitions; }
    inline bool InferenceContainerDefinitionsHasBeenSet() const { return m_inferenceContainerDefinitionsHasBeenSet; }
    inline void SetInferenceContainerDefinitions(const Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions = value; }
    inline void SetInferenceContainerDefinitions(Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>&& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions = std::move(value); }
    inline AutoMLCandidate& WithInferenceContainerDefinitions(const Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>& value) { SetInferenceContainerDefinitions(value); return *this;}
    inline AutoMLCandidate& WithInferenceContainerDefinitions(Aws::Map<AutoMLProcessingUnit, Aws::Vector<AutoMLContainerDefinition>>&& value) { SetInferenceContainerDefinitions(std::move(value)); return *this;}
    inline AutoMLCandidate& AddInferenceContainerDefinitions(const AutoMLProcessingUnit& key, const Aws::Vector<AutoMLContainerDefinition>& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions.emplace(key, value); return *this; }
    inline AutoMLCandidate& AddInferenceContainerDefinitions(AutoMLProcessingUnit&& key, const Aws::Vector<AutoMLContainerDefinition>& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions.emplace(std::move(key), value); return *this; }
    inline AutoMLCandidate& AddInferenceContainerDefinitions(const AutoMLProcessingUnit& key, Aws::Vector<AutoMLContainerDefinition>&& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions.emplace(key, std::move(value)); return *this; }
    inline AutoMLCandidate& AddInferenceContainerDefinitions(AutoMLProcessingUnit&& key, Aws::Vector<AutoMLContainerDefinition>&& value) { m_inferenceContainerDefinitionsHasBeenSet = true; m_inferenceContainerDefinitions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_candidateName;
    bool m_candidateNameHasBeenSet = false;

    FinalAutoMLJobObjectiveMetric m_finalAutoMLJobObjectiveMetric;
    bool m_finalAutoMLJobObjectiveMetricHasBeenSet = false;

    ObjectiveStatus m_objectiveStatus;
    bool m_objectiveStatusHasBeenSet = false;

    Aws::Vector<AutoMLCandidateStep> m_candidateSteps;
    bool m_candidateStepsHasBeenSet = false;

    CandidateStatus m_candidateStatus;
    bool m_candidateStatusHasBeenSet = false;

    Aws::Vector<AutoMLContainerDefinition> m_inferenceContainers;
    bool m_inferenceContainersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
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
