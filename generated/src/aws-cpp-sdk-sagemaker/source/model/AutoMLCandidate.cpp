/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLCandidate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLCandidate::AutoMLCandidate() : 
    m_candidateNameHasBeenSet(false),
    m_finalAutoMLJobObjectiveMetricHasBeenSet(false),
    m_objectiveStatus(ObjectiveStatus::NOT_SET),
    m_objectiveStatusHasBeenSet(false),
    m_candidateStepsHasBeenSet(false),
    m_candidateStatus(CandidateStatus::NOT_SET),
    m_candidateStatusHasBeenSet(false),
    m_inferenceContainersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_candidatePropertiesHasBeenSet(false)
{
}

AutoMLCandidate::AutoMLCandidate(JsonView jsonValue) : 
    m_candidateNameHasBeenSet(false),
    m_finalAutoMLJobObjectiveMetricHasBeenSet(false),
    m_objectiveStatus(ObjectiveStatus::NOT_SET),
    m_objectiveStatusHasBeenSet(false),
    m_candidateStepsHasBeenSet(false),
    m_candidateStatus(CandidateStatus::NOT_SET),
    m_candidateStatusHasBeenSet(false),
    m_inferenceContainersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_candidatePropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLCandidate& AutoMLCandidate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateName"))
  {
    m_candidateName = jsonValue.GetString("CandidateName");

    m_candidateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalAutoMLJobObjectiveMetric"))
  {
    m_finalAutoMLJobObjectiveMetric = jsonValue.GetObject("FinalAutoMLJobObjectiveMetric");

    m_finalAutoMLJobObjectiveMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectiveStatus"))
  {
    m_objectiveStatus = ObjectiveStatusMapper::GetObjectiveStatusForName(jsonValue.GetString("ObjectiveStatus"));

    m_objectiveStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateSteps"))
  {
    Aws::Utils::Array<JsonView> candidateStepsJsonList = jsonValue.GetArray("CandidateSteps");
    for(unsigned candidateStepsIndex = 0; candidateStepsIndex < candidateStepsJsonList.GetLength(); ++candidateStepsIndex)
    {
      m_candidateSteps.push_back(candidateStepsJsonList[candidateStepsIndex].AsObject());
    }
    m_candidateStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateStatus"))
  {
    m_candidateStatus = CandidateStatusMapper::GetCandidateStatusForName(jsonValue.GetString("CandidateStatus"));

    m_candidateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceContainers"))
  {
    Aws::Utils::Array<JsonView> inferenceContainersJsonList = jsonValue.GetArray("InferenceContainers");
    for(unsigned inferenceContainersIndex = 0; inferenceContainersIndex < inferenceContainersJsonList.GetLength(); ++inferenceContainersIndex)
    {
      m_inferenceContainers.push_back(inferenceContainersJsonList[inferenceContainersIndex].AsObject());
    }
    m_inferenceContainersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateProperties"))
  {
    m_candidateProperties = jsonValue.GetObject("CandidateProperties");

    m_candidatePropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLCandidate::Jsonize() const
{
  JsonValue payload;

  if(m_candidateNameHasBeenSet)
  {
   payload.WithString("CandidateName", m_candidateName);

  }

  if(m_finalAutoMLJobObjectiveMetricHasBeenSet)
  {
   payload.WithObject("FinalAutoMLJobObjectiveMetric", m_finalAutoMLJobObjectiveMetric.Jsonize());

  }

  if(m_objectiveStatusHasBeenSet)
  {
   payload.WithString("ObjectiveStatus", ObjectiveStatusMapper::GetNameForObjectiveStatus(m_objectiveStatus));
  }

  if(m_candidateStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> candidateStepsJsonList(m_candidateSteps.size());
   for(unsigned candidateStepsIndex = 0; candidateStepsIndex < candidateStepsJsonList.GetLength(); ++candidateStepsIndex)
   {
     candidateStepsJsonList[candidateStepsIndex].AsObject(m_candidateSteps[candidateStepsIndex].Jsonize());
   }
   payload.WithArray("CandidateSteps", std::move(candidateStepsJsonList));

  }

  if(m_candidateStatusHasBeenSet)
  {
   payload.WithString("CandidateStatus", CandidateStatusMapper::GetNameForCandidateStatus(m_candidateStatus));
  }

  if(m_inferenceContainersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceContainersJsonList(m_inferenceContainers.size());
   for(unsigned inferenceContainersIndex = 0; inferenceContainersIndex < inferenceContainersJsonList.GetLength(); ++inferenceContainersIndex)
   {
     inferenceContainersJsonList[inferenceContainersIndex].AsObject(m_inferenceContainers[inferenceContainersIndex].Jsonize());
   }
   payload.WithArray("InferenceContainers", std::move(inferenceContainersJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_candidatePropertiesHasBeenSet)
  {
   payload.WithObject("CandidateProperties", m_candidateProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
