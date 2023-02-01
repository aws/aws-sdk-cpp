/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeEngineVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEngineVersionsResult::DescribeEngineVersionsResult()
{
}

DescribeEngineVersionsResult::DescribeEngineVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEngineVersionsResult& DescribeEngineVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("EngineVersions"))
  {
    Aws::Utils::Array<JsonView> engineVersionsJsonList = jsonValue.GetArray("EngineVersions");
    for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
    {
      m_engineVersions.push_back(engineVersionsJsonList[engineVersionsIndex].AsObject());
    }
  }



  return *this;
}
