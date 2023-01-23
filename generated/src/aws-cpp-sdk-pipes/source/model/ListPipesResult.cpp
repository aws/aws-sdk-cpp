/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/ListPipesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipesResult::ListPipesResult()
{
}

ListPipesResult::ListPipesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipesResult& ListPipesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Pipes"))
  {
    Aws::Utils::Array<JsonView> pipesJsonList = jsonValue.GetArray("Pipes");
    for(unsigned pipesIndex = 0; pipesIndex < pipesJsonList.GetLength(); ++pipesIndex)
    {
      m_pipes.push_back(pipesJsonList[pipesIndex].AsObject());
    }
  }



  return *this;
}
