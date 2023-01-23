/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/GrantFlowEntitlementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GrantFlowEntitlementsResult::GrantFlowEntitlementsResult()
{
}

GrantFlowEntitlementsResult::GrantFlowEntitlementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GrantFlowEntitlementsResult& GrantFlowEntitlementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entitlements"))
  {
    Aws::Utils::Array<JsonView> entitlementsJsonList = jsonValue.GetArray("entitlements");
    for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
    {
      m_entitlements.push_back(entitlementsJsonList[entitlementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

  }



  return *this;
}
