/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListDataLakesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataLakesResult::ListDataLakesResult()
{
}

ListDataLakesResult::ListDataLakesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataLakesResult& ListDataLakesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataLakes"))
  {
    Aws::Utils::Array<JsonView> dataLakesJsonList = jsonValue.GetArray("dataLakes");
    for(unsigned dataLakesIndex = 0; dataLakesIndex < dataLakesJsonList.GetLength(); ++dataLakesIndex)
    {
      m_dataLakes.push_back(dataLakesJsonList[dataLakesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
