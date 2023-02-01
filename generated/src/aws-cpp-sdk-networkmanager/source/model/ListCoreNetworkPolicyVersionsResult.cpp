/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreNetworkPolicyVersionsResult::ListCoreNetworkPolicyVersionsResult()
{
}

ListCoreNetworkPolicyVersionsResult::ListCoreNetworkPolicyVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCoreNetworkPolicyVersionsResult& ListCoreNetworkPolicyVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CoreNetworkPolicyVersions"))
  {
    Aws::Utils::Array<JsonView> coreNetworkPolicyVersionsJsonList = jsonValue.GetArray("CoreNetworkPolicyVersions");
    for(unsigned coreNetworkPolicyVersionsIndex = 0; coreNetworkPolicyVersionsIndex < coreNetworkPolicyVersionsJsonList.GetLength(); ++coreNetworkPolicyVersionsIndex)
    {
      m_coreNetworkPolicyVersions.push_back(coreNetworkPolicyVersionsJsonList[coreNetworkPolicyVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
