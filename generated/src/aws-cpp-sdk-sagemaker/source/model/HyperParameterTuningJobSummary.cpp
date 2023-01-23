/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobSummary.h>
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

HyperParameterTuningJobSummary::HyperParameterTuningJobSummary() : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_hyperParameterTuningJobArnHasBeenSet(false),
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET),
    m_hyperParameterTuningJobStatusHasBeenSet(false),
    m_strategy(HyperParameterTuningJobStrategyType::NOT_SET),
    m_strategyHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_hyperParameterTuningEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatusCountersHasBeenSet(false),
    m_objectiveStatusCountersHasBeenSet(false),
    m_resourceLimitsHasBeenSet(false)
{
}

HyperParameterTuningJobSummary::HyperParameterTuningJobSummary(JsonView jsonValue) : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_hyperParameterTuningJobArnHasBeenSet(false),
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET),
    m_hyperParameterTuningJobStatusHasBeenSet(false),
    m_strategy(HyperParameterTuningJobStrategyType::NOT_SET),
    m_strategyHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_hyperParameterTuningEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatusCountersHasBeenSet(false),
    m_objectiveStatusCountersHasBeenSet(false),
    m_resourceLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobSummary& HyperParameterTuningJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HyperParameterTuningJobName"))
  {
    m_hyperParameterTuningJobName = jsonValue.GetString("HyperParameterTuningJobName");

    m_hyperParameterTuningJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobArn"))
  {
    m_hyperParameterTuningJobArn = jsonValue.GetString("HyperParameterTuningJobArn");

    m_hyperParameterTuningJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobStatus"))
  {
    m_hyperParameterTuningJobStatus = HyperParameterTuningJobStatusMapper::GetHyperParameterTuningJobStatusForName(jsonValue.GetString("HyperParameterTuningJobStatus"));

    m_hyperParameterTuningJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = HyperParameterTuningJobStrategyTypeMapper::GetHyperParameterTuningJobStrategyTypeForName(jsonValue.GetString("Strategy"));

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningEndTime"))
  {
    m_hyperParameterTuningEndTime = jsonValue.GetDouble("HyperParameterTuningEndTime");

    m_hyperParameterTuningEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobStatusCounters"))
  {
    m_trainingJobStatusCounters = jsonValue.GetObject("TrainingJobStatusCounters");

    m_trainingJobStatusCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectiveStatusCounters"))
  {
    m_objectiveStatusCounters = jsonValue.GetObject("ObjectiveStatusCounters");

    m_objectiveStatusCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLimits"))
  {
    m_resourceLimits = jsonValue.GetObject("ResourceLimits");

    m_resourceLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  if(m_hyperParameterTuningJobArnHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobArn", m_hyperParameterTuningJobArn);

  }

  if(m_hyperParameterTuningJobStatusHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobStatus", HyperParameterTuningJobStatusMapper::GetNameForHyperParameterTuningJobStatus(m_hyperParameterTuningJobStatus));
  }

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", HyperParameterTuningJobStrategyTypeMapper::GetNameForHyperParameterTuningJobStrategyType(m_strategy));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_hyperParameterTuningEndTimeHasBeenSet)
  {
   payload.WithDouble("HyperParameterTuningEndTime", m_hyperParameterTuningEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_trainingJobStatusCountersHasBeenSet)
  {
   payload.WithObject("TrainingJobStatusCounters", m_trainingJobStatusCounters.Jsonize());

  }

  if(m_objectiveStatusCountersHasBeenSet)
  {
   payload.WithObject("ObjectiveStatusCounters", m_objectiveStatusCounters.Jsonize());

  }

  if(m_resourceLimitsHasBeenSet)
  {
   payload.WithObject("ResourceLimits", m_resourceLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
