/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/odb/model/ListAutonomousDatabaseBackupsResult.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutonomousDatabaseBackupsResult::ListAutonomousDatabaseBackupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAutonomousDatabaseBackupsResult& ListAutonomousDatabaseBackupsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseBackups")) {
    Aws::Utils::Array<JsonView> autonomousDatabaseBackupsJsonList = jsonValue.GetArray("autonomousDatabaseBackups");
    for (unsigned autonomousDatabaseBackupsIndex = 0; autonomousDatabaseBackupsIndex < autonomousDatabaseBackupsJsonList.GetLength();
         ++autonomousDatabaseBackupsIndex) {
      m_autonomousDatabaseBackups.push_back(autonomousDatabaseBackupsJsonList[autonomousDatabaseBackupsIndex].AsObject());
    }
    m_autonomousDatabaseBackupsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
