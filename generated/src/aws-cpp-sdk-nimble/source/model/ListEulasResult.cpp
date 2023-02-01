/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListEulasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEulasResult::ListEulasResult()
{
}

ListEulasResult::ListEulasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEulasResult& ListEulasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eulas"))
  {
    Aws::Utils::Array<JsonView> eulasJsonList = jsonValue.GetArray("eulas");
    for(unsigned eulasIndex = 0; eulasIndex < eulasJsonList.GetLength(); ++eulasIndex)
    {
      m_eulas.push_back(eulasJsonList[eulasIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
