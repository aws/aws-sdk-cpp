/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListCoreNetworksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreNetworksResult::ListCoreNetworksResult()
{
}

ListCoreNetworksResult::ListCoreNetworksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCoreNetworksResult& ListCoreNetworksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CoreNetworks"))
  {
    Aws::Utils::Array<JsonView> coreNetworksJsonList = jsonValue.GetArray("CoreNetworks");
    for(unsigned coreNetworksIndex = 0; coreNetworksIndex < coreNetworksJsonList.GetLength(); ++coreNetworksIndex)
    {
      m_coreNetworks.push_back(coreNetworksJsonList[coreNetworksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
