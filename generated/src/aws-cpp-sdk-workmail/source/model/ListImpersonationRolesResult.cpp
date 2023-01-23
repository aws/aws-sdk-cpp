/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListImpersonationRolesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImpersonationRolesResult::ListImpersonationRolesResult()
{
}

ListImpersonationRolesResult::ListImpersonationRolesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImpersonationRolesResult& ListImpersonationRolesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("Roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(rolesJsonList[rolesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
