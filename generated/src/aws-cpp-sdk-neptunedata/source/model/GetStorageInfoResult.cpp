/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/neptunedata/model/GetStorageInfoResult.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStorageInfoResult::GetStorageInfoResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetStorageInfoResult& GetStorageInfoResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("totalStorageBytesUsed")) {
    m_totalStorageBytesUsed = jsonValue.GetInt64("totalStorageBytesUsed");
    m_totalStorageBytesUsedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quads")) {
    m_quads = jsonValue.GetObject("quads");
    m_quadsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dictionaries")) {
    m_dictionaries = jsonValue.GetObject("dictionaries");
    m_dictionariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("undoLogs")) {
    m_undoLogs = jsonValue.GetObject("undoLogs");
    m_undoLogsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streams")) {
    m_streams = jsonValue.GetObject("streams");
    m_streamsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dfeStatistics")) {
    m_dfeStatistics = jsonValue.GetObject("dfeStatistics");
    m_dfeStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("internals")) {
    m_internals = jsonValue.GetObject("internals");
    m_internalsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
