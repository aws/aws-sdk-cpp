/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListContextChangesResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContextChangesResult::ListContextChangesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListContextChangesResult& ListContextChangesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContextChanges")) {
    Aws::Utils::Array<JsonView> contextChangesJsonList = jsonValue.GetArray("ContextChanges");
    for (unsigned contextChangesIndex = 0; contextChangesIndex < contextChangesJsonList.GetLength(); ++contextChangesIndex) {
      m_contextChanges.push_back(contextChangesJsonList[contextChangesIndex].AsObject());
    }
    m_contextChangesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FromVersionId")) {
    m_fromVersionId = jsonValue.GetString("FromVersionId");
    m_fromVersionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ToVersionId")) {
    m_toVersionId = jsonValue.GetString("ToVersionId");
    m_toVersionIdHasBeenSet = true;
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
