/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListWorldsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorldsResult::ListWorldsResult()
{
}

ListWorldsResult::ListWorldsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorldsResult& ListWorldsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("worldSummaries"))
  {
    Aws::Utils::Array<JsonView> worldSummariesJsonList = jsonValue.GetArray("worldSummaries");
    for(unsigned worldSummariesIndex = 0; worldSummariesIndex < worldSummariesJsonList.GetLength(); ++worldSummariesIndex)
    {
      m_worldSummaries.push_back(worldSummariesJsonList[worldSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
