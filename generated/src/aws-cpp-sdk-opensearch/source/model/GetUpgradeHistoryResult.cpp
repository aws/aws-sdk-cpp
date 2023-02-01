/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetUpgradeHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUpgradeHistoryResult::GetUpgradeHistoryResult()
{
}

GetUpgradeHistoryResult::GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUpgradeHistoryResult& GetUpgradeHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpgradeHistories"))
  {
    Aws::Utils::Array<JsonView> upgradeHistoriesJsonList = jsonValue.GetArray("UpgradeHistories");
    for(unsigned upgradeHistoriesIndex = 0; upgradeHistoriesIndex < upgradeHistoriesJsonList.GetLength(); ++upgradeHistoriesIndex)
    {
      m_upgradeHistories.push_back(upgradeHistoriesJsonList[upgradeHistoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
