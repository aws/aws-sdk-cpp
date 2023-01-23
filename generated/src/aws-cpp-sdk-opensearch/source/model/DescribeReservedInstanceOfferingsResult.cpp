/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeReservedInstanceOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedInstanceOfferingsResult::DescribeReservedInstanceOfferingsResult()
{
}

DescribeReservedInstanceOfferingsResult::DescribeReservedInstanceOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedInstanceOfferingsResult& DescribeReservedInstanceOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ReservedInstanceOfferings"))
  {
    Aws::Utils::Array<JsonView> reservedInstanceOfferingsJsonList = jsonValue.GetArray("ReservedInstanceOfferings");
    for(unsigned reservedInstanceOfferingsIndex = 0; reservedInstanceOfferingsIndex < reservedInstanceOfferingsJsonList.GetLength(); ++reservedInstanceOfferingsIndex)
    {
      m_reservedInstanceOfferings.push_back(reservedInstanceOfferingsJsonList[reservedInstanceOfferingsIndex].AsObject());
    }
  }



  return *this;
}
