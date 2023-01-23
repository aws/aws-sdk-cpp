/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeReservedInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedInstancesResult::DescribeReservedInstancesResult()
{
}

DescribeReservedInstancesResult::DescribeReservedInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedInstancesResult& DescribeReservedInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ReservedInstances"))
  {
    Aws::Utils::Array<JsonView> reservedInstancesJsonList = jsonValue.GetArray("ReservedInstances");
    for(unsigned reservedInstancesIndex = 0; reservedInstancesIndex < reservedInstancesJsonList.GetLength(); ++reservedInstancesIndex)
    {
      m_reservedInstances.push_back(reservedInstancesJsonList[reservedInstancesIndex].AsObject());
    }
  }



  return *this;
}
