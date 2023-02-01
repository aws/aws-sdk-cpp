/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListSolutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSolutionsResult::ListSolutionsResult()
{
}

ListSolutionsResult::ListSolutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSolutionsResult& ListSolutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("solutions"))
  {
    Aws::Utils::Array<JsonView> solutionsJsonList = jsonValue.GetArray("solutions");
    for(unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex)
    {
      m_solutions.push_back(solutionsJsonList[solutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
