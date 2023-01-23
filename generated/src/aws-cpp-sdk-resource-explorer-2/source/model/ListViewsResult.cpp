/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ListViewsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListViewsResult::ListViewsResult()
{
}

ListViewsResult::ListViewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListViewsResult& ListViewsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Views"))
  {
    Aws::Utils::Array<JsonView> viewsJsonList = jsonValue.GetArray("Views");
    for(unsigned viewsIndex = 0; viewsIndex < viewsJsonList.GetLength(); ++viewsIndex)
    {
      m_views.push_back(viewsJsonList[viewsIndex].AsString());
    }
  }



  return *this;
}
