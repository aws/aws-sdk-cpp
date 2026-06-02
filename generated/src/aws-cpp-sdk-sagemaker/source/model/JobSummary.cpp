/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/JobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

JobSummary::JobSummary(JsonView jsonValue) { *this = jsonValue; }

JobSummary& JobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobArn")) {
    m_jobArn = jsonValue.GetString("JobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobName")) {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobCategory")) {
    m_jobCategory = JobCategoryMapper::GetJobCategoryForName(jsonValue.GetString("JobCategory"));
    m_jobCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobStatus")) {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobSecondaryStatus")) {
    m_jobSecondaryStatus = JobSecondaryStatusMapper::GetJobSecondaryStatusForName(jsonValue.GetString("JobSecondaryStatus"));
    m_jobSecondaryStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue JobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobArnHasBeenSet) {
    payload.WithString("JobArn", m_jobArn);
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_jobCategoryHasBeenSet) {
    payload.WithString("JobCategory", JobCategoryMapper::GetNameForJobCategory(m_jobCategory));
  }

  if (m_jobStatusHasBeenSet) {
    payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if (m_jobSecondaryStatusHasBeenSet) {
    payload.WithString("JobSecondaryStatus", JobSecondaryStatusMapper::GetNameForJobSecondaryStatus(m_jobSecondaryStatus));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
