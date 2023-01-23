/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CallAnalyticsJobSummary::CallAnalyticsJobSummary() : 
    m_callAnalyticsJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_callAnalyticsJobStatus(CallAnalyticsJobStatus::NOT_SET),
    m_callAnalyticsJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

CallAnalyticsJobSummary::CallAnalyticsJobSummary(JsonView jsonValue) : 
    m_callAnalyticsJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_callAnalyticsJobStatus(CallAnalyticsJobStatus::NOT_SET),
    m_callAnalyticsJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

CallAnalyticsJobSummary& CallAnalyticsJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CallAnalyticsJobName"))
  {
    m_callAnalyticsJobName = jsonValue.GetString("CallAnalyticsJobName");

    m_callAnalyticsJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallAnalyticsJobStatus"))
  {
    m_callAnalyticsJobStatus = CallAnalyticsJobStatusMapper::GetCallAnalyticsJobStatusForName(jsonValue.GetString("CallAnalyticsJobStatus"));

    m_callAnalyticsJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CallAnalyticsJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_callAnalyticsJobNameHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobName", m_callAnalyticsJobName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_callAnalyticsJobStatusHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobStatus", CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(m_callAnalyticsJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
