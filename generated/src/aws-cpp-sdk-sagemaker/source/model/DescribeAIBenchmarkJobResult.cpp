/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeAIBenchmarkJobResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAIBenchmarkJobResult::DescribeAIBenchmarkJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeAIBenchmarkJobResult& DescribeAIBenchmarkJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AIBenchmarkJobName")) {
    m_aIBenchmarkJobName = jsonValue.GetString("AIBenchmarkJobName");
    m_aIBenchmarkJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIBenchmarkJobArn")) {
    m_aIBenchmarkJobArn = jsonValue.GetString("AIBenchmarkJobArn");
    m_aIBenchmarkJobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIBenchmarkJobStatus")) {
    m_aIBenchmarkJobStatus = AIBenchmarkJobStatusMapper::GetAIBenchmarkJobStatusForName(jsonValue.GetString("AIBenchmarkJobStatus"));
    m_aIBenchmarkJobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenchmarkTarget")) {
    m_benchmarkTarget = jsonValue.GetObject("BenchmarkTarget");
    m_benchmarkTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputConfig")) {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIWorkloadConfigIdentifier")) {
    m_aIWorkloadConfigIdentifier = jsonValue.GetString("AIWorkloadConfigIdentifier");
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkConfig")) {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");
    m_networkConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
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
