/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeConnectionAliasPermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionAliasPermissionsResult::DescribeConnectionAliasPermissionsResult()
{
}

DescribeConnectionAliasPermissionsResult::DescribeConnectionAliasPermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectionAliasPermissionsResult& DescribeConnectionAliasPermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AliasId"))
  {
    m_aliasId = jsonValue.GetString("AliasId");

  }

  if(jsonValue.ValueExists("ConnectionAliasPermissions"))
  {
    Aws::Utils::Array<JsonView> connectionAliasPermissionsJsonList = jsonValue.GetArray("ConnectionAliasPermissions");
    for(unsigned connectionAliasPermissionsIndex = 0; connectionAliasPermissionsIndex < connectionAliasPermissionsJsonList.GetLength(); ++connectionAliasPermissionsIndex)
    {
      m_connectionAliasPermissions.push_back(connectionAliasPermissionsJsonList[connectionAliasPermissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
