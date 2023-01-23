/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ListParallelDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListParallelDataResult::ListParallelDataResult()
{
}

ListParallelDataResult::ListParallelDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListParallelDataResult& ListParallelDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ParallelDataPropertiesList"))
  {
    Aws::Utils::Array<JsonView> parallelDataPropertiesListJsonList = jsonValue.GetArray("ParallelDataPropertiesList");
    for(unsigned parallelDataPropertiesListIndex = 0; parallelDataPropertiesListIndex < parallelDataPropertiesListJsonList.GetLength(); ++parallelDataPropertiesListIndex)
    {
      m_parallelDataPropertiesList.push_back(parallelDataPropertiesListJsonList[parallelDataPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
