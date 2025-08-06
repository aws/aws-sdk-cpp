/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDeleteClusterNodesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteClusterNodesResult::BatchDeleteClusterNodesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteClusterNodesResult& BatchDeleteClusterNodesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Failed"))
  {
    Aws::Utils::Array<JsonView> failedJsonList = jsonValue.GetArray("Failed");
    for(unsigned failedIndex = 0; failedIndex < failedJsonList.GetLength(); ++failedIndex)
    {
      m_failed.push_back(failedJsonList[failedIndex].AsObject());
    }
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Successful"))
  {
    Aws::Utils::Array<JsonView> successfulJsonList = jsonValue.GetArray("Successful");
    for(unsigned successfulIndex = 0; successfulIndex < successfulJsonList.GetLength(); ++successfulIndex)
    {
      m_successful.push_back(successfulJsonList[successfulIndex].AsString());
    }
    m_successfulHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedNodeLogicalIds"))
  {
    Aws::Utils::Array<JsonView> failedNodeLogicalIdsJsonList = jsonValue.GetArray("FailedNodeLogicalIds");
    for(unsigned failedNodeLogicalIdsIndex = 0; failedNodeLogicalIdsIndex < failedNodeLogicalIdsJsonList.GetLength(); ++failedNodeLogicalIdsIndex)
    {
      m_failedNodeLogicalIds.push_back(failedNodeLogicalIdsJsonList[failedNodeLogicalIdsIndex].AsObject());
    }
    m_failedNodeLogicalIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessfulNodeLogicalIds"))
  {
    Aws::Utils::Array<JsonView> successfulNodeLogicalIdsJsonList = jsonValue.GetArray("SuccessfulNodeLogicalIds");
    for(unsigned successfulNodeLogicalIdsIndex = 0; successfulNodeLogicalIdsIndex < successfulNodeLogicalIdsJsonList.GetLength(); ++successfulNodeLogicalIdsIndex)
    {
      m_successfulNodeLogicalIds.push_back(successfulNodeLogicalIdsJsonList[successfulNodeLogicalIdsIndex].AsString());
    }
    m_successfulNodeLogicalIdsHasBeenSet = true;
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
