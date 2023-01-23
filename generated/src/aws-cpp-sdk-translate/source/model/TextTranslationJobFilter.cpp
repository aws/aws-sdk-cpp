/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TextTranslationJobFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TextTranslationJobFilter::TextTranslationJobFilter() : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submittedBeforeTimeHasBeenSet(false),
    m_submittedAfterTimeHasBeenSet(false)
{
}

TextTranslationJobFilter::TextTranslationJobFilter(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submittedBeforeTimeHasBeenSet(false),
    m_submittedAfterTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TextTranslationJobFilter& TextTranslationJobFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmittedBeforeTime"))
  {
    m_submittedBeforeTime = jsonValue.GetDouble("SubmittedBeforeTime");

    m_submittedBeforeTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmittedAfterTime"))
  {
    m_submittedAfterTime = jsonValue.GetDouble("SubmittedAfterTime");

    m_submittedAfterTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TextTranslationJobFilter::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_submittedBeforeTimeHasBeenSet)
  {
   payload.WithDouble("SubmittedBeforeTime", m_submittedBeforeTime.SecondsWithMSPrecision());
  }

  if(m_submittedAfterTimeHasBeenSet)
  {
   payload.WithDouble("SubmittedAfterTime", m_submittedAfterTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
