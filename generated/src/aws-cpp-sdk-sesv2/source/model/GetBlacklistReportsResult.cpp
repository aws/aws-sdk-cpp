/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sesv2/model/GetBlacklistReportsResult.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlacklistReportsResult::GetBlacklistReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBlacklistReportsResult& GetBlacklistReportsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("BlacklistReport")) {
    Aws::Map<Aws::String, JsonView> blacklistReportJsonMap = jsonValue.GetObject("BlacklistReport").GetAllObjects();
    for (auto& blacklistReportItem : blacklistReportJsonMap) {
      Aws::Utils::Array<JsonView> blacklistEntries2JsonList = blacklistReportItem.second.AsArray();
      Aws::Vector<BlacklistEntry> blacklistEntries2List;
      blacklistEntries2List.reserve((size_t)blacklistEntries2JsonList.GetLength());
      for (unsigned blacklistEntries2Index = 0; blacklistEntries2Index < blacklistEntries2JsonList.GetLength(); ++blacklistEntries2Index) {
        blacklistEntries2List.push_back(blacklistEntries2JsonList[blacklistEntries2Index].AsObject());
      }
      m_blacklistReport[blacklistReportItem.first] = std::move(blacklistEntries2List);
    }
    m_blacklistReportHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
