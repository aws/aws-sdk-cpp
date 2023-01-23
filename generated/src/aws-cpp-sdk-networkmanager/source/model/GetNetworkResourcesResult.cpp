/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkResourcesResult::GetNetworkResourcesResult()
{
}

GetNetworkResourcesResult::GetNetworkResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkResourcesResult& GetNetworkResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NetworkResources"))
  {
    Aws::Utils::Array<JsonView> networkResourcesJsonList = jsonValue.GetArray("NetworkResources");
    for(unsigned networkResourcesIndex = 0; networkResourcesIndex < networkResourcesJsonList.GetLength(); ++networkResourcesIndex)
    {
      m_networkResources.push_back(networkResourcesJsonList[networkResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
