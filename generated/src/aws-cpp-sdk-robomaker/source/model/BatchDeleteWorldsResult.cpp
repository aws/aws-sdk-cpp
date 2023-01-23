/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/BatchDeleteWorldsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteWorldsResult::BatchDeleteWorldsResult()
{
}

BatchDeleteWorldsResult::BatchDeleteWorldsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteWorldsResult& BatchDeleteWorldsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("unprocessedWorlds"))
  {
    Aws::Utils::Array<JsonView> unprocessedWorldsJsonList = jsonValue.GetArray("unprocessedWorlds");
    for(unsigned unprocessedWorldsIndex = 0; unprocessedWorldsIndex < unprocessedWorldsJsonList.GetLength(); ++unprocessedWorldsIndex)
    {
      m_unprocessedWorlds.push_back(unprocessedWorldsJsonList[unprocessedWorldsIndex].AsString());
    }
  }



  return *this;
}
