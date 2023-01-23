/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListNetworkSitesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkSitesResult::ListNetworkSitesResult()
{
}

ListNetworkSitesResult::ListNetworkSitesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworkSitesResult& ListNetworkSitesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkSites"))
  {
    Aws::Utils::Array<JsonView> networkSitesJsonList = jsonValue.GetArray("networkSites");
    for(unsigned networkSitesIndex = 0; networkSitesIndex < networkSitesJsonList.GetLength(); ++networkSitesIndex)
    {
      m_networkSites.push_back(networkSitesJsonList[networkSitesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
