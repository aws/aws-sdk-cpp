/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/GetProductsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pricing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProductsResult::GetProductsResult()
{
}

GetProductsResult::GetProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetProductsResult& GetProductsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FormatVersion"))
  {
    m_formatVersion = jsonValue.GetString("FormatVersion");

  }

  if(jsonValue.ValueExists("PriceList"))
  {
    Aws::Utils::Array<JsonView> priceListJsonList = jsonValue.GetArray("PriceList");
    for(unsigned priceListIndex = 0; priceListIndex < priceListJsonList.GetLength(); ++priceListIndex)
    {
      m_priceList.push_back(priceListJsonList[priceListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
