/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListVariantStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVariantStoresResult::ListVariantStoresResult()
{
}

ListVariantStoresResult::ListVariantStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVariantStoresResult& ListVariantStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("variantStores"))
  {
    Aws::Utils::Array<JsonView> variantStoresJsonList = jsonValue.GetArray("variantStores");
    for(unsigned variantStoresIndex = 0; variantStoresIndex < variantStoresJsonList.GetLength(); ++variantStoresIndex)
    {
      m_variantStores.push_back(variantStoresJsonList[variantStoresIndex].AsObject());
    }
  }



  return *this;
}
