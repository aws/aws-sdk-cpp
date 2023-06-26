/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDataLakeSourcesResult.h>
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

GetDataLakeSourcesResult::GetDataLakeSourcesResult()
{
}

GetDataLakeSourcesResult::GetDataLakeSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataLakeSourcesResult& GetDataLakeSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataLakeArn"))
  {
    m_dataLakeArn = jsonValue.GetString("dataLakeArn");

  }

  if(jsonValue.ValueExists("dataLakeSources"))
  {
    Aws::Utils::Array<JsonView> dataLakeSourcesJsonList = jsonValue.GetArray("dataLakeSources");
    for(unsigned dataLakeSourcesIndex = 0; dataLakeSourcesIndex < dataLakeSourcesJsonList.GetLength(); ++dataLakeSourcesIndex)
    {
      m_dataLakeSources.push_back(dataLakeSourcesJsonList[dataLakeSourcesIndex].AsObject());
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
