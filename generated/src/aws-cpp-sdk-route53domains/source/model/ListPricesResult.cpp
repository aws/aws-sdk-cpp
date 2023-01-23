/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListPricesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPricesResult::ListPricesResult()
{
}

ListPricesResult::ListPricesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPricesResult& ListPricesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Prices"))
  {
    Aws::Utils::Array<JsonView> pricesJsonList = jsonValue.GetArray("Prices");
    for(unsigned pricesIndex = 0; pricesIndex < pricesJsonList.GetLength(); ++pricesIndex)
    {
      m_prices.push_back(pricesJsonList[pricesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageMarker"))
  {
    m_nextPageMarker = jsonValue.GetString("NextPageMarker");

  }



  return *this;
}
