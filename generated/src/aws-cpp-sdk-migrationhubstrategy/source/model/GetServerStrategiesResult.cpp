/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetServerStrategiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServerStrategiesResult::GetServerStrategiesResult()
{
}

GetServerStrategiesResult::GetServerStrategiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServerStrategiesResult& GetServerStrategiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serverStrategies"))
  {
    Aws::Utils::Array<JsonView> serverStrategiesJsonList = jsonValue.GetArray("serverStrategies");
    for(unsigned serverStrategiesIndex = 0; serverStrategiesIndex < serverStrategiesJsonList.GetLength(); ++serverStrategiesIndex)
    {
      m_serverStrategies.push_back(serverStrategiesJsonList[serverStrategiesIndex].AsObject());
    }
  }



  return *this;
}
