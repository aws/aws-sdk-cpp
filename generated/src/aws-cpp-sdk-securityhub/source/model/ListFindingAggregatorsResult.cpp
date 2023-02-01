/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListFindingAggregatorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFindingAggregatorsResult::ListFindingAggregatorsResult()
{
}

ListFindingAggregatorsResult::ListFindingAggregatorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFindingAggregatorsResult& ListFindingAggregatorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FindingAggregators"))
  {
    Aws::Utils::Array<JsonView> findingAggregatorsJsonList = jsonValue.GetArray("FindingAggregators");
    for(unsigned findingAggregatorsIndex = 0; findingAggregatorsIndex < findingAggregatorsJsonList.GetLength(); ++findingAggregatorsIndex)
    {
      m_findingAggregators.push_back(findingAggregatorsJsonList[findingAggregatorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
