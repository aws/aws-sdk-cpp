/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/odb/model/ListAutonomousDatabasePeersResult.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutonomousDatabasePeersResult::ListAutonomousDatabasePeersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAutonomousDatabasePeersResult& ListAutonomousDatabasePeersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabasePeers")) {
    Aws::Utils::Array<JsonView> autonomousDatabasePeersJsonList = jsonValue.GetArray("autonomousDatabasePeers");
    for (unsigned autonomousDatabasePeersIndex = 0; autonomousDatabasePeersIndex < autonomousDatabasePeersJsonList.GetLength();
         ++autonomousDatabasePeersIndex) {
      m_autonomousDatabasePeers.push_back(autonomousDatabasePeersJsonList[autonomousDatabasePeersIndex].AsObject());
    }
    m_autonomousDatabasePeersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
