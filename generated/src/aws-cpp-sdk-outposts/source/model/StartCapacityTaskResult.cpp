/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/StartCapacityTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartCapacityTaskResult::StartCapacityTaskResult() : 
    m_dryRun(false),
    m_capacityTaskStatus(CapacityTaskStatus::NOT_SET)
{
}

StartCapacityTaskResult::StartCapacityTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dryRun(false),
    m_capacityTaskStatus(CapacityTaskStatus::NOT_SET)
{
  *this = result;
}

StartCapacityTaskResult& StartCapacityTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CapacityTaskId"))
  {
    m_capacityTaskId = jsonValue.GetString("CapacityTaskId");

  }

  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");

  }

  if(jsonValue.ValueExists("OrderId"))
  {
    m_orderId = jsonValue.GetString("OrderId");

  }

  if(jsonValue.ValueExists("RequestedInstancePools"))
  {
    Aws::Utils::Array<JsonView> requestedInstancePoolsJsonList = jsonValue.GetArray("RequestedInstancePools");
    for(unsigned requestedInstancePoolsIndex = 0; requestedInstancePoolsIndex < requestedInstancePoolsJsonList.GetLength(); ++requestedInstancePoolsIndex)
    {
      m_requestedInstancePools.push_back(requestedInstancePoolsJsonList[requestedInstancePoolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DryRun"))
  {
    m_dryRun = jsonValue.GetBool("DryRun");

  }

  if(jsonValue.ValueExists("CapacityTaskStatus"))
  {
    m_capacityTaskStatus = CapacityTaskStatusMapper::GetCapacityTaskStatusForName(jsonValue.GetString("CapacityTaskStatus"));

  }

  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetObject("Failed");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");

  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
