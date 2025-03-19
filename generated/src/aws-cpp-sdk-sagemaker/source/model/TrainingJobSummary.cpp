/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobSummary.h>
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

TrainingJobSummary::TrainingJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainingJobSummary& TrainingJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJobName"))
  {
    m_trainingJobName = jsonValue.GetString("TrainingJobName");
    m_trainingJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");
    m_trainingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");
    m_trainingEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobStatus"))
  {
    m_trainingJobStatus = TrainingJobStatusMapper::GetTrainingJobStatusForName(jsonValue.GetString("TrainingJobStatus"));
    m_trainingJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecondaryStatus"))
  {
    m_secondaryStatus = SecondaryStatusMapper::GetSecondaryStatusForName(jsonValue.GetString("SecondaryStatus"));
    m_secondaryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmPoolStatus"))
  {
    m_warmPoolStatus = jsonValue.GetObject("WarmPoolStatus");
    m_warmPoolStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanArn"))
  {
    m_trainingPlanArn = jsonValue.GetString("TrainingPlanArn");
    m_trainingPlanArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("TrainingJobName", m_trainingJobName);

  }

  if(m_trainingJobArnHasBeenSet)
  {
   payload.WithString("TrainingJobArn", m_trainingJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_trainingEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingEndTime", m_trainingEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_trainingJobStatusHasBeenSet)
  {
   payload.WithString("TrainingJobStatus", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_trainingJobStatus));
  }

  if(m_secondaryStatusHasBeenSet)
  {
   payload.WithString("SecondaryStatus", SecondaryStatusMapper::GetNameForSecondaryStatus(m_secondaryStatus));
  }

  if(m_warmPoolStatusHasBeenSet)
  {
   payload.WithObject("WarmPoolStatus", m_warmPoolStatus.Jsonize());

  }

  if(m_trainingPlanArnHasBeenSet)
  {
   payload.WithString("TrainingPlanArn", m_trainingPlanArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
