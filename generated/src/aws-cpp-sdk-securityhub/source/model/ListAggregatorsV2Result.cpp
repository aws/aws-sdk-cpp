/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListAggregatorsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAggregatorsV2Result::ListAggregatorsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAggregatorsV2Result& ListAggregatorsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregatorsV2"))
  {
    Aws::Utils::Array<JsonView> aggregatorsV2JsonList = jsonValue.GetArray("AggregatorsV2");
    for(unsigned aggregatorsV2Index = 0; aggregatorsV2Index < aggregatorsV2JsonList.GetLength(); ++aggregatorsV2Index)
    {
      m_aggregatorsV2.push_back(aggregatorsV2JsonList[aggregatorsV2Index].AsObject());
    }
    m_aggregatorsV2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
