/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ListServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServersResult::ListServersResult()
{
}

ListServersResult::ListServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServersResult& ListServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("serverInfos"))
  {
    Aws::Utils::Array<JsonView> serverInfosJsonList = jsonValue.GetArray("serverInfos");
    for(unsigned serverInfosIndex = 0; serverInfosIndex < serverInfosJsonList.GetLength(); ++serverInfosIndex)
    {
      m_serverInfos.push_back(serverInfosJsonList[serverInfosIndex].AsObject());
    }
  }



  return *this;
}
