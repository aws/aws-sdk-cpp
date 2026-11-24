/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListInferenceGatewaysResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceGatewaysResult::ListInferenceGatewaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListInferenceGatewaysResult& ListInferenceGatewaysResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("InferenceGatewaySummaries")) {
    Aws::Utils::Array<JsonView> inferenceGatewaySummariesJsonList = jsonValue.GetArray("InferenceGatewaySummaries");
    for (unsigned inferenceGatewaySummariesIndex = 0; inferenceGatewaySummariesIndex < inferenceGatewaySummariesJsonList.GetLength();
         ++inferenceGatewaySummariesIndex) {
      m_inferenceGatewaySummaries.push_back(inferenceGatewaySummariesJsonList[inferenceGatewaySummariesIndex].AsObject());
    }
    m_inferenceGatewaySummariesHasBeenSet = true;
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
