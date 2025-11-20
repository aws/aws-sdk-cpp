/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/organizations/model/ListInboundResponsibilityTransfersResult.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInboundResponsibilityTransfersResult::ListInboundResponsibilityTransfersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListInboundResponsibilityTransfersResult& ListInboundResponsibilityTransfersResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ResponsibilityTransfers")) {
    Aws::Utils::Array<JsonView> responsibilityTransfersJsonList = jsonValue.GetArray("ResponsibilityTransfers");
    for (unsigned responsibilityTransfersIndex = 0; responsibilityTransfersIndex < responsibilityTransfersJsonList.GetLength();
         ++responsibilityTransfersIndex) {
      m_responsibilityTransfers.push_back(responsibilityTransfersJsonList[responsibilityTransfersIndex].AsObject());
    }
    m_responsibilityTransfersHasBeenSet = true;
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
