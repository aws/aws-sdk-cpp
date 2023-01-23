/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeSimulationJobBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSimulationJobBatchResult::DescribeSimulationJobBatchResult() : 
    m_status(SimulationJobBatchStatus::NOT_SET),
    m_failureCode(SimulationJobBatchErrorCode::NOT_SET)
{
}

DescribeSimulationJobBatchResult::DescribeSimulationJobBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SimulationJobBatchStatus::NOT_SET),
    m_failureCode(SimulationJobBatchErrorCode::NOT_SET)
{
  *this = result;
}

DescribeSimulationJobBatchResult& DescribeSimulationJobBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobBatchStatusMapper::GetSimulationJobBatchStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("batchPolicy"))
  {
    m_batchPolicy = jsonValue.GetObject("batchPolicy");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobBatchErrorCodeMapper::GetSimulationJobBatchErrorCodeForName(jsonValue.GetString("failureCode"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("failedRequests"))
  {
    Aws::Utils::Array<JsonView> failedRequestsJsonList = jsonValue.GetArray("failedRequests");
    for(unsigned failedRequestsIndex = 0; failedRequestsIndex < failedRequestsJsonList.GetLength(); ++failedRequestsIndex)
    {
      m_failedRequests.push_back(failedRequestsJsonList[failedRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("pendingRequests"))
  {
    Aws::Utils::Array<JsonView> pendingRequestsJsonList = jsonValue.GetArray("pendingRequests");
    for(unsigned pendingRequestsIndex = 0; pendingRequestsIndex < pendingRequestsJsonList.GetLength(); ++pendingRequestsIndex)
    {
      m_pendingRequests.push_back(pendingRequestsJsonList[pendingRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdRequests"))
  {
    Aws::Utils::Array<JsonView> createdRequestsJsonList = jsonValue.GetArray("createdRequests");
    for(unsigned createdRequestsIndex = 0; createdRequestsIndex < createdRequestsJsonList.GetLength(); ++createdRequestsIndex)
    {
      m_createdRequests.push_back(createdRequestsJsonList[createdRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
