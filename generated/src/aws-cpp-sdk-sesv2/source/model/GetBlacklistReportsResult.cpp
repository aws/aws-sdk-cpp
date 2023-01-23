/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetBlacklistReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlacklistReportsResult::GetBlacklistReportsResult()
{
}

GetBlacklistReportsResult::GetBlacklistReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBlacklistReportsResult& GetBlacklistReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlacklistReport"))
  {
    Aws::Map<Aws::String, JsonView> blacklistReportJsonMap = jsonValue.GetObject("BlacklistReport").GetAllObjects();
    for(auto& blacklistReportItem : blacklistReportJsonMap)
    {
      Aws::Utils::Array<JsonView> blacklistEntriesJsonList = blacklistReportItem.second.AsArray();
      Aws::Vector<BlacklistEntry> blacklistEntriesList;
      blacklistEntriesList.reserve((size_t)blacklistEntriesJsonList.GetLength());
      for(unsigned blacklistEntriesIndex = 0; blacklistEntriesIndex < blacklistEntriesJsonList.GetLength(); ++blacklistEntriesIndex)
      {
        blacklistEntriesList.push_back(blacklistEntriesJsonList[blacklistEntriesIndex].AsObject());
      }
      m_blacklistReport[blacklistReportItem.first] = std::move(blacklistEntriesList);
    }
  }



  return *this;
}
