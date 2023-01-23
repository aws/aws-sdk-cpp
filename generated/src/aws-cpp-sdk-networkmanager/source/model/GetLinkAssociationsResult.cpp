/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetLinkAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLinkAssociationsResult::GetLinkAssociationsResult()
{
}

GetLinkAssociationsResult::GetLinkAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLinkAssociationsResult& GetLinkAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LinkAssociations"))
  {
    Aws::Utils::Array<JsonView> linkAssociationsJsonList = jsonValue.GetArray("LinkAssociations");
    for(unsigned linkAssociationsIndex = 0; linkAssociationsIndex < linkAssociationsJsonList.GetLength(); ++linkAssociationsIndex)
    {
      m_linkAssociations.push_back(linkAssociationsJsonList[linkAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
