/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListCatalogItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCatalogItemsResult::ListCatalogItemsResult()
{
}

ListCatalogItemsResult::ListCatalogItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCatalogItemsResult& ListCatalogItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CatalogItems"))
  {
    Aws::Utils::Array<JsonView> catalogItemsJsonList = jsonValue.GetArray("CatalogItems");
    for(unsigned catalogItemsIndex = 0; catalogItemsIndex < catalogItemsJsonList.GetLength(); ++catalogItemsIndex)
    {
      m_catalogItems.push_back(catalogItemsJsonList[catalogItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
