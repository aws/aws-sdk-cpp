/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeSimulationJobBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSimulationJobBatchResult::DescribeSimulationJobBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSimulationJobBatchResult& DescribeSimulationJobBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobBatchStatusMapper::GetSimulationJobBatchStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");
    m_clientRequestTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("batchPolicy"))
  {
    m_batchPolicy = jsonValue.GetObject("batchPolicy");
    m_batchPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobBatchErrorCodeMapper::GetSimulationJobBatchErrorCodeForName(jsonValue.GetString("failureCode"));
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedRequests"))
  {
    Aws::Utils::Array<JsonView> failedRequestsJsonList = jsonValue.GetArray("failedRequests");
    for(unsigned failedRequestsIndex = 0; failedRequestsIndex < failedRequestsJsonList.GetLength(); ++failedRequestsIndex)
    {
      m_failedRequests.push_back(failedRequestsJsonList[failedRequestsIndex].AsObject());
    }
    m_failedRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingRequests"))
  {
    Aws::Utils::Array<JsonView> pendingRequestsJsonList = jsonValue.GetArray("pendingRequests");
    for(unsigned pendingRequestsIndex = 0; pendingRequestsIndex < pendingRequestsJsonList.GetLength(); ++pendingRequestsIndex)
    {
      m_pendingRequests.push_back(pendingRequestsJsonList[pendingRequestsIndex].AsObject());
    }
    m_pendingRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdRequests"))
  {
    Aws::Utils::Array<JsonView> createdRequestsJsonList = jsonValue.GetArray("createdRequests");
    for(unsigned createdRequestsIndex = 0; createdRequestsIndex < createdRequestsJsonList.GetLength(); ++createdRequestsIndex)
    {
      m_createdRequests.push_back(createdRequestsJsonList[createdRequestsIndex].AsObject());
    }
    m_createdRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
