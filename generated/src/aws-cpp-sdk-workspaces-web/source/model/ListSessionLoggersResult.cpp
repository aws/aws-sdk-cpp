﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/workspaces-web/model/ListSessionLoggersResult.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSessionLoggersResult::ListSessionLoggersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSessionLoggersResult& ListSessionLoggersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sessionLoggers")) {
    Aws::Utils::Array<JsonView> sessionLoggersJsonList = jsonValue.GetArray("sessionLoggers");
    for (unsigned sessionLoggersIndex = 0; sessionLoggersIndex < sessionLoggersJsonList.GetLength(); ++sessionLoggersIndex) {
      m_sessionLoggers.push_back(sessionLoggersJsonList[sessionLoggersIndex].AsObject());
    }
    m_sessionLoggersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
