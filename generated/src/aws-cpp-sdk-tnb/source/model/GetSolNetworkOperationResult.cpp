/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkOperationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSolNetworkOperationResult::GetSolNetworkOperationResult() : 
    m_lcmOperationType(LcmOperationType::NOT_SET),
    m_operationState(NsLcmOperationState::NOT_SET)
{
}

GetSolNetworkOperationResult::GetSolNetworkOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lcmOperationType(LcmOperationType::NOT_SET),
    m_operationState(NsLcmOperationState::NOT_SET)
{
  *this = result;
}

GetSolNetworkOperationResult& GetSolNetworkOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lcmOperationType"))
  {
    m_lcmOperationType = LcmOperationTypeMapper::GetLcmOperationTypeForName(jsonValue.GetString("lcmOperationType"));

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }

  if(jsonValue.ValueExists("nsInstanceId"))
  {
    m_nsInstanceId = jsonValue.GetString("nsInstanceId");

  }

  if(jsonValue.ValueExists("operationState"))
  {
    m_operationState = NsLcmOperationStateMapper::GetNsLcmOperationStateForName(jsonValue.GetString("operationState"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("tasks"))
  {
    Aws::Utils::Array<JsonView> tasksJsonList = jsonValue.GetArray("tasks");
    for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
    {
      m_tasks.push_back(tasksJsonList[tasksIndex].AsObject());
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
