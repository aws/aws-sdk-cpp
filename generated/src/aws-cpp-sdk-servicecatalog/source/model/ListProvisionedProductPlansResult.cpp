/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListProvisionedProductPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProvisionedProductPlansResult::ListProvisionedProductPlansResult()
{
}

ListProvisionedProductPlansResult::ListProvisionedProductPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProvisionedProductPlansResult& ListProvisionedProductPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedProductPlans"))
  {
    Aws::Utils::Array<JsonView> provisionedProductPlansJsonList = jsonValue.GetArray("ProvisionedProductPlans");
    for(unsigned provisionedProductPlansIndex = 0; provisionedProductPlansIndex < provisionedProductPlansJsonList.GetLength(); ++provisionedProductPlansIndex)
    {
      m_provisionedProductPlans.push_back(provisionedProductPlansJsonList[provisionedProductPlansIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
