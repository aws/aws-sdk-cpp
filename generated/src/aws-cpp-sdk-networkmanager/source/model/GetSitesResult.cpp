/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetSitesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSitesResult::GetSitesResult()
{
}

GetSitesResult::GetSitesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSitesResult& GetSitesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Sites"))
  {
    Aws::Utils::Array<JsonView> sitesJsonList = jsonValue.GetArray("Sites");
    for(unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex)
    {
      m_sites.push_back(sitesJsonList[sitesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
