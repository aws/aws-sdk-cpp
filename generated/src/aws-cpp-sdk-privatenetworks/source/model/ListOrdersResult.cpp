/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListOrdersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOrdersResult::ListOrdersResult()
{
}

ListOrdersResult::ListOrdersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrdersResult& ListOrdersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("orders"))
  {
    Aws::Utils::Array<JsonView> ordersJsonList = jsonValue.GetArray("orders");
    for(unsigned ordersIndex = 0; ordersIndex < ordersJsonList.GetLength(); ++ordersIndex)
    {
      m_orders.push_back(ordersJsonList[ordersIndex].AsObject());
    }
  }



  return *this;
}
