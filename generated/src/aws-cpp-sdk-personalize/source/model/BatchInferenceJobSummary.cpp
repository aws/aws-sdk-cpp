﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchInferenceJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchInferenceJobSummary::BatchInferenceJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchInferenceJobSummary& BatchInferenceJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("batchInferenceJobArn"))
  {
    m_batchInferenceJobArn = jsonValue.GetString("batchInferenceJobArn");
    m_batchInferenceJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");
    m_solutionVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("batchInferenceJobMode"))
  {
    m_batchInferenceJobMode = BatchInferenceJobModeMapper::GetBatchInferenceJobModeForName(jsonValue.GetString("batchInferenceJobMode"));
    m_batchInferenceJobModeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchInferenceJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_batchInferenceJobArnHasBeenSet)
  {
   payload.WithString("batchInferenceJobArn", m_batchInferenceJobArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_batchInferenceJobModeHasBeenSet)
  {
   payload.WithString("batchInferenceJobMode", BatchInferenceJobModeMapper::GetNameForBatchInferenceJobMode(m_batchInferenceJobMode));
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
