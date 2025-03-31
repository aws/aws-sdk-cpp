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

StartCapacityTaskResult::StartCapacityTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartCapacityTaskResult& StartCapacityTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CapacityTaskId"))
  {
    m_capacityTaskId = jsonValue.GetString("CapacityTaskId");
    m_capacityTaskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");
    m_outpostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrderId"))
  {
    m_orderId = jsonValue.GetString("OrderId");
    m_orderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestedInstancePools"))
  {
    Aws::Utils::Array<JsonView> requestedInstancePoolsJsonList = jsonValue.GetArray("RequestedInstancePools");
    for(unsigned requestedInstancePoolsIndex = 0; requestedInstancePoolsIndex < requestedInstancePoolsJsonList.GetLength(); ++requestedInstancePoolsIndex)
    {
      m_requestedInstancePools.push_back(requestedInstancePoolsJsonList[requestedInstancePoolsIndex].AsObject());
    }
    m_requestedInstancePoolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesToExclude"))
  {
    m_instancesToExclude = jsonValue.GetObject("InstancesToExclude");
    m_instancesToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DryRun"))
  {
    m_dryRun = jsonValue.GetBool("DryRun");
    m_dryRunHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityTaskStatus"))
  {
    m_capacityTaskStatus = CapacityTaskStatusMapper::GetCapacityTaskStatusForName(jsonValue.GetString("CapacityTaskStatus"));
    m_capacityTaskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetObject("Failed");
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");
    m_completionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskActionOnBlockingInstances"))
  {
    m_taskActionOnBlockingInstances = TaskActionOnBlockingInstancesMapper::GetTaskActionOnBlockingInstancesForName(jsonValue.GetString("TaskActionOnBlockingInstances"));
    m_taskActionOnBlockingInstancesHasBeenSet = true;
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
