/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobSummary.h>
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

LabelingJobSummary::LabelingJobSummary() : 
    m_labelingJobNameHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_labelingJobStatus(LabelingJobStatus::NOT_SET),
    m_labelingJobStatusHasBeenSet(false),
    m_labelCountersHasBeenSet(false),
    m_workteamArnHasBeenSet(false),
    m_preHumanTaskLambdaArnHasBeenSet(false),
    m_annotationConsolidationLambdaArnHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_labelingJobOutputHasBeenSet(false),
    m_inputConfigHasBeenSet(false)
{
}

LabelingJobSummary::LabelingJobSummary(JsonView jsonValue) : 
    m_labelingJobNameHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_labelingJobStatus(LabelingJobStatus::NOT_SET),
    m_labelingJobStatusHasBeenSet(false),
    m_labelCountersHasBeenSet(false),
    m_workteamArnHasBeenSet(false),
    m_preHumanTaskLambdaArnHasBeenSet(false),
    m_annotationConsolidationLambdaArnHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_labelingJobOutputHasBeenSet(false),
    m_inputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobSummary& LabelingJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelingJobName"))
  {
    m_labelingJobName = jsonValue.GetString("LabelingJobName");

    m_labelingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");

    m_labelingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingJobStatus"))
  {
    m_labelingJobStatus = LabelingJobStatusMapper::GetLabelingJobStatusForName(jsonValue.GetString("LabelingJobStatus"));

    m_labelingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelCounters"))
  {
    m_labelCounters = jsonValue.GetObject("LabelCounters");

    m_labelCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkteamArn"))
  {
    m_workteamArn = jsonValue.GetString("WorkteamArn");

    m_workteamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreHumanTaskLambdaArn"))
  {
    m_preHumanTaskLambdaArn = jsonValue.GetString("PreHumanTaskLambdaArn");

    m_preHumanTaskLambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnnotationConsolidationLambdaArn"))
  {
    m_annotationConsolidationLambdaArn = jsonValue.GetString("AnnotationConsolidationLambdaArn");

    m_annotationConsolidationLambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingJobOutput"))
  {
    m_labelingJobOutput = jsonValue.GetObject("LabelingJobOutput");

    m_labelingJobOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

    m_inputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_labelingJobNameHasBeenSet)
  {
   payload.WithString("LabelingJobName", m_labelingJobName);

  }

  if(m_labelingJobArnHasBeenSet)
  {
   payload.WithString("LabelingJobArn", m_labelingJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_labelingJobStatusHasBeenSet)
  {
   payload.WithString("LabelingJobStatus", LabelingJobStatusMapper::GetNameForLabelingJobStatus(m_labelingJobStatus));
  }

  if(m_labelCountersHasBeenSet)
  {
   payload.WithObject("LabelCounters", m_labelCounters.Jsonize());

  }

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_preHumanTaskLambdaArnHasBeenSet)
  {
   payload.WithString("PreHumanTaskLambdaArn", m_preHumanTaskLambdaArn);

  }

  if(m_annotationConsolidationLambdaArnHasBeenSet)
  {
   payload.WithString("AnnotationConsolidationLambdaArn", m_annotationConsolidationLambdaArn);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_labelingJobOutputHasBeenSet)
  {
   payload.WithObject("LabelingJobOutput", m_labelingJobOutput.Jsonize());

  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("InputConfig", m_inputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
