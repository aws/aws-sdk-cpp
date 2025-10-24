/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/ListFlowsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFlowsResult::ListFlowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFlowsResult& ListFlowsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("FlowSummaryList")) {
    Aws::Utils::Array<JsonView> flowSummaryListJsonList = jsonValue.GetArray("FlowSummaryList");
    for (unsigned flowSummaryListIndex = 0; flowSummaryListIndex < flowSummaryListJsonList.GetLength(); ++flowSummaryListIndex) {
      m_flowSummaryList.push_back(flowSummaryListJsonList[flowSummaryListIndex].AsObject());
    }
    m_flowSummaryListHasBeenSet = true;
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

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
