/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/ListAccountRolesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSO::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountRolesResult::ListAccountRolesResult()
{
}

ListAccountRolesResult::ListAccountRolesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountRolesResult& ListAccountRolesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("roleList"))
  {
    Aws::Utils::Array<JsonView> roleListJsonList = jsonValue.GetArray("roleList");
    for(unsigned roleListIndex = 0; roleListIndex < roleListJsonList.GetLength(); ++roleListIndex)
    {
      m_roleList.push_back(roleListJsonList[roleListIndex].AsObject());
    }
  }



  return *this;
}
