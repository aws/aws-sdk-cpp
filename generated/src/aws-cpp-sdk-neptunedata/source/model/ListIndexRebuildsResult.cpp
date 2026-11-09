/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/neptunedata/model/ListIndexRebuildsResult.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIndexRebuildsResult::ListIndexRebuildsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListIndexRebuildsResult& ListIndexRebuildsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("rebuildIds")) {
    Aws::Utils::Array<JsonView> rebuildIdsJsonList = jsonValue.GetArray("rebuildIds");
    for (unsigned rebuildIdsIndex = 0; rebuildIdsIndex < rebuildIdsJsonList.GetLength(); ++rebuildIdsIndex) {
      m_rebuildIds.push_back(rebuildIdsJsonList[rebuildIdsIndex].AsString());
    }
    m_rebuildIdsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
