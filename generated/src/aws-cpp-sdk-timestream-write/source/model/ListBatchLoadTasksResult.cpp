/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/ListBatchLoadTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchLoadTasksResult::ListBatchLoadTasksResult()
{
}

ListBatchLoadTasksResult::ListBatchLoadTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchLoadTasksResult& ListBatchLoadTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BatchLoadTasks"))
  {
    Aws::Utils::Array<JsonView> batchLoadTasksJsonList = jsonValue.GetArray("BatchLoadTasks");
    for(unsigned batchLoadTasksIndex = 0; batchLoadTasksIndex < batchLoadTasksJsonList.GetLength(); ++batchLoadTasksIndex)
    {
      m_batchLoadTasks.push_back(batchLoadTasksJsonList[batchLoadTasksIndex].AsObject());
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
