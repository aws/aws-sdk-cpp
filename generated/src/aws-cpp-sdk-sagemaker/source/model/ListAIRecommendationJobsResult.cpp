/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListAIRecommendationJobsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAIRecommendationJobsResult::ListAIRecommendationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAIRecommendationJobsResult& ListAIRecommendationJobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AIRecommendationJobs")) {
    Aws::Utils::Array<JsonView> aIRecommendationJobsJsonList = jsonValue.GetArray("AIRecommendationJobs");
    for (unsigned aIRecommendationJobsIndex = 0; aIRecommendationJobsIndex < aIRecommendationJobsJsonList.GetLength();
         ++aIRecommendationJobsIndex) {
      m_aIRecommendationJobs.push_back(aIRecommendationJobsJsonList[aIRecommendationJobsIndex].AsObject());
    }
    m_aIRecommendationJobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
