/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wafv2/model/ListSettlementRecordsResult.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSettlementRecordsResult::ListSettlementRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSettlementRecordsResult& ListSettlementRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Settlements")) {
    Aws::Utils::Array<JsonView> settlementsJsonList = jsonValue.GetArray("Settlements");
    for (unsigned settlementsIndex = 0; settlementsIndex < settlementsJsonList.GetLength(); ++settlementsIndex) {
      m_settlements.push_back(settlementsJsonList[settlementsIndex].AsObject());
    }
    m_settlementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
