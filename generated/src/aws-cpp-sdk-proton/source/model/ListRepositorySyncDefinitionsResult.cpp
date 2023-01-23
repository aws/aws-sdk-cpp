/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRepositorySyncDefinitionsResult::ListRepositorySyncDefinitionsResult()
{
}

ListRepositorySyncDefinitionsResult::ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRepositorySyncDefinitionsResult& ListRepositorySyncDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("syncDefinitions"))
  {
    Aws::Utils::Array<JsonView> syncDefinitionsJsonList = jsonValue.GetArray("syncDefinitions");
    for(unsigned syncDefinitionsIndex = 0; syncDefinitionsIndex < syncDefinitionsJsonList.GetLength(); ++syncDefinitionsIndex)
    {
      m_syncDefinitions.push_back(syncDefinitionsJsonList[syncDefinitionsIndex].AsObject());
    }
  }



  return *this;
}
