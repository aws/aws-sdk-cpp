/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListTrainingSessionsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrainingSessionsResult::ListTrainingSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTrainingSessionsResult& ListTrainingSessionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingSessionSummaries")) {
    Aws::Utils::Array<JsonView> trainingSessionSummariesJsonList = jsonValue.GetArray("TrainingSessionSummaries");
    for (unsigned trainingSessionSummariesIndex = 0; trainingSessionSummariesIndex < trainingSessionSummariesJsonList.GetLength();
         ++trainingSessionSummariesIndex) {
      m_trainingSessionSummaries.push_back(trainingSessionSummariesJsonList[trainingSessionSummariesIndex].AsObject());
    }
    m_trainingSessionSummariesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
