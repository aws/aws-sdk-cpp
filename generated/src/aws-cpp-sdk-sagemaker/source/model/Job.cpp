/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/Job.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

Job::Job(JsonView jsonValue) { *this = jsonValue; }

Job& Job::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobName")) {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobArn")) {
    m_jobArn = jsonValue.GetString("JobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobCategory")) {
    m_jobCategory = JobCategoryMapper::GetJobCategoryForName(jsonValue.GetString("JobCategory"));
    m_jobCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobConfigSchemaVersion")) {
    m_jobConfigSchemaVersion = jsonValue.GetString("JobConfigSchemaVersion");
    m_jobConfigSchemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobConfigDocument")) {
    m_jobConfigDocument = jsonValue.GetString("JobConfigDocument");
    m_jobConfigDocumentHasBeenSet = true;
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
  if (jsonValue.ValueExists("JobStatus")) {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecondaryStatus")) {
    m_secondaryStatus = JobSecondaryStatusMapper::GetJobSecondaryStatusForName(jsonValue.GetString("SecondaryStatus"));
    m_secondaryStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecondaryStatusTransitions")) {
    Aws::Utils::Array<JsonView> secondaryStatusTransitionsJsonList = jsonValue.GetArray("SecondaryStatusTransitions");
    for (unsigned secondaryStatusTransitionsIndex = 0; secondaryStatusTransitionsIndex < secondaryStatusTransitionsJsonList.GetLength();
         ++secondaryStatusTransitionsIndex) {
      m_secondaryStatusTransitions.push_back(secondaryStatusTransitionsJsonList[secondaryStatusTransitionsIndex].AsObject());
    }
    m_secondaryStatusTransitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Job::Jsonize() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_jobArnHasBeenSet) {
    payload.WithString("JobArn", m_jobArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_jobCategoryHasBeenSet) {
    payload.WithString("JobCategory", JobCategoryMapper::GetNameForJobCategory(m_jobCategory));
  }

  if (m_jobConfigSchemaVersionHasBeenSet) {
    payload.WithString("JobConfigSchemaVersion", m_jobConfigSchemaVersion);
  }

  if (m_jobConfigDocumentHasBeenSet) {
    payload.WithString("JobConfigDocument", m_jobConfigDocument);
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

  if (m_jobStatusHasBeenSet) {
    payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if (m_secondaryStatusHasBeenSet) {
    payload.WithString("SecondaryStatus", JobSecondaryStatusMapper::GetNameForJobSecondaryStatus(m_secondaryStatus));
  }

  if (m_secondaryStatusTransitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secondaryStatusTransitionsJsonList(m_secondaryStatusTransitions.size());
    for (unsigned secondaryStatusTransitionsIndex = 0; secondaryStatusTransitionsIndex < secondaryStatusTransitionsJsonList.GetLength();
         ++secondaryStatusTransitionsIndex) {
      secondaryStatusTransitionsJsonList[secondaryStatusTransitionsIndex].AsObject(
          m_secondaryStatusTransitions[secondaryStatusTransitionsIndex].Jsonize());
    }
    payload.WithArray("SecondaryStatusTransitions", std::move(secondaryStatusTransitionsJsonList));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
