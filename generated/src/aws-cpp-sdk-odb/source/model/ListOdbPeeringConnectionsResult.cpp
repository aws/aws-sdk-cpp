/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ListOdbPeeringConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOdbPeeringConnectionsResult::ListOdbPeeringConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOdbPeeringConnectionsResult& ListOdbPeeringConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbPeeringConnections"))
  {
    Aws::Utils::Array<JsonView> odbPeeringConnectionsJsonList = jsonValue.GetArray("odbPeeringConnections");
    for(unsigned odbPeeringConnectionsIndex = 0; odbPeeringConnectionsIndex < odbPeeringConnectionsJsonList.GetLength(); ++odbPeeringConnectionsIndex)
    {
      m_odbPeeringConnections.push_back(odbPeeringConnectionsJsonList[odbPeeringConnectionsIndex].AsObject());
    }
    m_odbPeeringConnectionsHasBeenSet = true;
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
