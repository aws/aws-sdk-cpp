/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ListIndexesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIndexesResult::ListIndexesResult()
{
}

ListIndexesResult::ListIndexesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIndexesResult& ListIndexesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Indexes"))
  {
    Aws::Utils::Array<JsonView> indexesJsonList = jsonValue.GetArray("Indexes");
    for(unsigned indexesIndex = 0; indexesIndex < indexesJsonList.GetLength(); ++indexesIndex)
    {
      m_indexes.push_back(indexesJsonList[indexesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
