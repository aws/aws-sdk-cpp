/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeConnectionAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionAliasesResult::DescribeConnectionAliasesResult()
{
}

DescribeConnectionAliasesResult::DescribeConnectionAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectionAliasesResult& DescribeConnectionAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectionAliases"))
  {
    Aws::Utils::Array<JsonView> connectionAliasesJsonList = jsonValue.GetArray("ConnectionAliases");
    for(unsigned connectionAliasesIndex = 0; connectionAliasesIndex < connectionAliasesJsonList.GetLength(); ++connectionAliasesIndex)
    {
      m_connectionAliases.push_back(connectionAliasesJsonList[connectionAliasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
