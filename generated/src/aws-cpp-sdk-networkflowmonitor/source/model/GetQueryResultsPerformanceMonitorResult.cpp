/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkflowmonitor/model/GetQueryResultsPerformanceMonitorResult.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsPerformanceMonitorResult::GetQueryResultsPerformanceMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetQueryResultsPerformanceMonitorResult& GetQueryResultsPerformanceMonitorResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("data")) {
    Aws::Utils::Array<JsonView> dataJsonList = jsonValue.GetArray("data");
    for (unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex) {
      Aws::Utils::Array<JsonView> queryRow2JsonList = dataJsonList[dataIndex].AsArray();
      Aws::Vector<Aws::Crt::Optional<Aws::String>> queryRow2List;
      queryRow2List.reserve((size_t)queryRow2JsonList.GetLength());
      for (unsigned queryRow2Index = 0; queryRow2Index < queryRow2JsonList.GetLength(); ++queryRow2Index) {
        if (queryRow2JsonList[queryRow2Index].IsNull()) {
          queryRow2List.emplace_back();
          continue;
        }
        queryRow2List.emplace_back(queryRow2JsonList[queryRow2Index].AsString());
      }
      m_data.push_back(std::move(queryRow2List));
    }
    m_dataHasBeenSet = true;
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
