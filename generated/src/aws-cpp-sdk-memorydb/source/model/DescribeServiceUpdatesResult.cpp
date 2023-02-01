/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeServiceUpdatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceUpdatesResult::DescribeServiceUpdatesResult()
{
}

DescribeServiceUpdatesResult::DescribeServiceUpdatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeServiceUpdatesResult& DescribeServiceUpdatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ServiceUpdates"))
  {
    Aws::Utils::Array<JsonView> serviceUpdatesJsonList = jsonValue.GetArray("ServiceUpdates");
    for(unsigned serviceUpdatesIndex = 0; serviceUpdatesIndex < serviceUpdatesJsonList.GetLength(); ++serviceUpdatesIndex)
    {
      m_serviceUpdates.push_back(serviceUpdatesJsonList[serviceUpdatesIndex].AsObject());
    }
  }



  return *this;
}
