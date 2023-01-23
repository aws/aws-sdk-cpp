/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ListChangeSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChangeSetsResult::ListChangeSetsResult()
{
}

ListChangeSetsResult::ListChangeSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChangeSetsResult& ListChangeSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangeSetSummaryList"))
  {
    Aws::Utils::Array<JsonView> changeSetSummaryListJsonList = jsonValue.GetArray("ChangeSetSummaryList");
    for(unsigned changeSetSummaryListIndex = 0; changeSetSummaryListIndex < changeSetSummaryListJsonList.GetLength(); ++changeSetSummaryListIndex)
    {
      m_changeSetSummaryList.push_back(changeSetSummaryListJsonList[changeSetSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
