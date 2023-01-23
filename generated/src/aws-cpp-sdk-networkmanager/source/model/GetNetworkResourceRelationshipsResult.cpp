/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkResourceRelationshipsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkResourceRelationshipsResult::GetNetworkResourceRelationshipsResult()
{
}

GetNetworkResourceRelationshipsResult::GetNetworkResourceRelationshipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkResourceRelationshipsResult& GetNetworkResourceRelationshipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Relationships"))
  {
    Aws::Utils::Array<JsonView> relationshipsJsonList = jsonValue.GetArray("Relationships");
    for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
    {
      m_relationships.push_back(relationshipsJsonList[relationshipsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
