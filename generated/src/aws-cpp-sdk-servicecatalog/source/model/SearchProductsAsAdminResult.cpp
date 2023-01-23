/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SearchProductsAsAdminResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchProductsAsAdminResult::SearchProductsAsAdminResult()
{
}

SearchProductsAsAdminResult::SearchProductsAsAdminResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchProductsAsAdminResult& SearchProductsAsAdminResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewDetails"))
  {
    Aws::Utils::Array<JsonView> productViewDetailsJsonList = jsonValue.GetArray("ProductViewDetails");
    for(unsigned productViewDetailsIndex = 0; productViewDetailsIndex < productViewDetailsJsonList.GetLength(); ++productViewDetailsIndex)
    {
      m_productViewDetails.push_back(productViewDetailsJsonList[productViewDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
