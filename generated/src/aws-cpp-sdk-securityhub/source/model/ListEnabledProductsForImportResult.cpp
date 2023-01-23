/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListEnabledProductsForImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnabledProductsForImportResult::ListEnabledProductsForImportResult()
{
}

ListEnabledProductsForImportResult::ListEnabledProductsForImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnabledProductsForImportResult& ListEnabledProductsForImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductSubscriptions"))
  {
    Aws::Utils::Array<JsonView> productSubscriptionsJsonList = jsonValue.GetArray("ProductSubscriptions");
    for(unsigned productSubscriptionsIndex = 0; productSubscriptionsIndex < productSubscriptionsJsonList.GetLength(); ++productSubscriptionsIndex)
    {
      m_productSubscriptions.push_back(productSubscriptionsJsonList[productSubscriptionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
