/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListPortalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPortalsResult::ListPortalsResult()
{
}

ListPortalsResult::ListPortalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPortalsResult& ListPortalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("portals"))
  {
    Aws::Utils::Array<JsonView> portalsJsonList = jsonValue.GetArray("portals");
    for(unsigned portalsIndex = 0; portalsIndex < portalsJsonList.GetLength(); ++portalsIndex)
    {
      m_portals.push_back(portalsJsonList[portalsIndex].AsObject());
    }
  }



  return *this;
}
