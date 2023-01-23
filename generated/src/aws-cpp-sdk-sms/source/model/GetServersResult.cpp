/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServersResult::GetServersResult() : 
    m_serverCatalogStatus(ServerCatalogStatus::NOT_SET)
{
}

GetServersResult::GetServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_serverCatalogStatus(ServerCatalogStatus::NOT_SET)
{
  *this = result;
}

GetServersResult& GetServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("lastModifiedOn");

  }

  if(jsonValue.ValueExists("serverCatalogStatus"))
  {
    m_serverCatalogStatus = ServerCatalogStatusMapper::GetServerCatalogStatusForName(jsonValue.GetString("serverCatalogStatus"));

  }

  if(jsonValue.ValueExists("serverList"))
  {
    Aws::Utils::Array<JsonView> serverListJsonList = jsonValue.GetArray("serverList");
    for(unsigned serverListIndex = 0; serverListIndex < serverListJsonList.GetLength(); ++serverListIndex)
    {
      m_serverList.push_back(serverListJsonList[serverListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
