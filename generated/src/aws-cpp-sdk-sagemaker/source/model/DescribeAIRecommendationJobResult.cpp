/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeAIRecommendationJobResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAIRecommendationJobResult::DescribeAIRecommendationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeAIRecommendationJobResult& DescribeAIRecommendationJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AIRecommendationJobName")) {
    m_aIRecommendationJobName = jsonValue.GetString("AIRecommendationJobName");
    m_aIRecommendationJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIRecommendationJobArn")) {
    m_aIRecommendationJobArn = jsonValue.GetString("AIRecommendationJobArn");
    m_aIRecommendationJobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIRecommendationJobStatus")) {
    m_aIRecommendationJobStatus =
        AIRecommendationJobStatusMapper::GetAIRecommendationJobStatusForName(jsonValue.GetString("AIRecommendationJobStatus"));
    m_aIRecommendationJobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelSource")) {
    m_modelSource = jsonValue.GetObject("ModelSource");
    m_modelSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputConfig")) {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceSpecification")) {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");
    m_inferenceSpecificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIWorkloadConfigIdentifier")) {
    m_aIWorkloadConfigIdentifier = jsonValue.GetString("AIWorkloadConfigIdentifier");
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptimizeModel")) {
    m_optimizeModel = jsonValue.GetBool("OptimizeModel");
    m_optimizeModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformanceTarget")) {
    m_performanceTarget = jsonValue.GetObject("PerformanceTarget");
    m_performanceTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Recommendations")) {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("Recommendations");
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComputeSpec")) {
    m_computeSpec = jsonValue.GetObject("ComputeSpec");
    m_computeSpecHasBeenSet = true;
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
