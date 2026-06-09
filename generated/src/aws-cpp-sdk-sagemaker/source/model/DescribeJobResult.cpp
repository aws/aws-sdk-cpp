/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeJobResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobResult::DescribeJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeJobResult& DescribeJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
