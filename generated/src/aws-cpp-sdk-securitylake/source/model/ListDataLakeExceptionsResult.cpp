/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListDataLakeExceptionsResult.h>
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

ListDataLakeExceptionsResult::ListDataLakeExceptionsResult()
{
}

ListDataLakeExceptionsResult::ListDataLakeExceptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataLakeExceptionsResult& ListDataLakeExceptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exceptions"))
  {
    Aws::Utils::Array<JsonView> exceptionsJsonList = jsonValue.GetArray("exceptions");
    for(unsigned exceptionsIndex = 0; exceptionsIndex < exceptionsJsonList.GetLength(); ++exceptionsIndex)
    {
      m_exceptions.push_back(exceptionsJsonList[exceptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
