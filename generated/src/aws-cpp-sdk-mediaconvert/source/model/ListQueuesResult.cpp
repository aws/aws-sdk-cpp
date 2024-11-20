/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ListQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQueuesResult::ListQueuesResult() : 
    m_totalConcurrentJobs(0),
    m_unallocatedConcurrentJobs(0)
{
}

ListQueuesResult::ListQueuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ListQueuesResult()
{
  *this = result;
}

ListQueuesResult& ListQueuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("queues"))
  {
    Aws::Utils::Array<JsonView> queuesJsonList = jsonValue.GetArray("queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("totalConcurrentJobs"))
  {
    m_totalConcurrentJobs = jsonValue.GetInteger("totalConcurrentJobs");

  }

  if(jsonValue.ValueExists("unallocatedConcurrentJobs"))
  {
    m_unallocatedConcurrentJobs = jsonValue.GetInteger("unallocatedConcurrentJobs");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
