/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentAccountConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentAccountConnectionsResult::ListEnvironmentAccountConnectionsResult()
{
}

ListEnvironmentAccountConnectionsResult::ListEnvironmentAccountConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentAccountConnectionsResult& ListEnvironmentAccountConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentAccountConnections"))
  {
    Aws::Utils::Array<JsonView> environmentAccountConnectionsJsonList = jsonValue.GetArray("environmentAccountConnections");
    for(unsigned environmentAccountConnectionsIndex = 0; environmentAccountConnectionsIndex < environmentAccountConnectionsJsonList.GetLength(); ++environmentAccountConnectionsIndex)
    {
      m_environmentAccountConnections.push_back(environmentAccountConnectionsJsonList[environmentAccountConnectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
