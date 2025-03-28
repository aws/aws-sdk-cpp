﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServersResult::GetServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServersResult& GetServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("lastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverCatalogStatus"))
  {
    m_serverCatalogStatus = ServerCatalogStatusMapper::GetServerCatalogStatusForName(jsonValue.GetString("serverCatalogStatus"));
    m_serverCatalogStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverList"))
  {
    Aws::Utils::Array<JsonView> serverListJsonList = jsonValue.GetArray("serverList");
    for(unsigned serverListIndex = 0; serverListIndex < serverListJsonList.GetLength(); ++serverListIndex)
    {
      m_serverList.push_back(serverListJsonList[serverListIndex].AsObject());
    }
    m_serverListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
