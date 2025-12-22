/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/ListBlockedGuestUsersResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBlockedGuestUsersResult::ListBlockedGuestUsersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListBlockedGuestUsersResult& ListBlockedGuestUsersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blocklist")) {
    Aws::Utils::Array<JsonView> blocklistJsonList = jsonValue.GetArray("blocklist");
    for (unsigned blocklistIndex = 0; blocklistIndex < blocklistJsonList.GetLength(); ++blocklistIndex) {
      m_blocklist.push_back(blocklistJsonList[blocklistIndex].AsObject());
    }
    m_blocklistHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
