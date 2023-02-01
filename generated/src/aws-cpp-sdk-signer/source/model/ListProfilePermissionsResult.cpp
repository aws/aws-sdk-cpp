/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ListProfilePermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfilePermissionsResult::ListProfilePermissionsResult() : 
    m_policySizeBytes(0)
{
}

ListProfilePermissionsResult::ListProfilePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_policySizeBytes(0)
{
  *this = result;
}

ListProfilePermissionsResult& ListProfilePermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

  }

  if(jsonValue.ValueExists("policySizeBytes"))
  {
    m_policySizeBytes = jsonValue.GetInteger("policySizeBytes");

  }

  if(jsonValue.ValueExists("permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
