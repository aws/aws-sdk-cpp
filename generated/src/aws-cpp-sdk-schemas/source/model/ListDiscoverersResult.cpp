/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ListDiscoverersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDiscoverersResult::ListDiscoverersResult()
{
}

ListDiscoverersResult::ListDiscoverersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDiscoverersResult& ListDiscoverersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Discoverers"))
  {
    Aws::Utils::Array<JsonView> discoverersJsonList = jsonValue.GetArray("Discoverers");
    for(unsigned discoverersIndex = 0; discoverersIndex < discoverersJsonList.GetLength(); ++discoverersIndex)
    {
      m_discoverers.push_back(discoverersJsonList[discoverersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
