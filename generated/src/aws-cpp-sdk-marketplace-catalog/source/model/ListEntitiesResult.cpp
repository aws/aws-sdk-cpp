/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ListEntitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntitiesResult::ListEntitiesResult()
{
}

ListEntitiesResult::ListEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntitiesResult& ListEntitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntitySummaryList"))
  {
    Aws::Utils::Array<JsonView> entitySummaryListJsonList = jsonValue.GetArray("EntitySummaryList");
    for(unsigned entitySummaryListIndex = 0; entitySummaryListIndex < entitySummaryListJsonList.GetLength(); ++entitySummaryListIndex)
    {
      m_entitySummaryList.push_back(entitySummaryListJsonList[entitySummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
