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

GetSolNetworkOperationResult::GetSolNetworkOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSolNetworkOperationResult& GetSolNetworkOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lcmOperationType"))
  {
    m_lcmOperationType = LcmOperationTypeMapper::GetLcmOperationTypeForName(jsonValue.GetString("lcmOperationType"));
    m_lcmOperationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsInstanceId"))
  {
    m_nsInstanceId = jsonValue.GetString("nsInstanceId");
    m_nsInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationState"))
  {
    m_operationState = NsLcmOperationStateMapper::GetNsLcmOperationStateForName(jsonValue.GetString("operationState"));
    m_operationStateHasBeenSet = true;
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
  if(jsonValue.ValueExists("tasks"))
  {
    Aws::Utils::Array<JsonView> tasksJsonList = jsonValue.GetArray("tasks");
    for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
    {
      m_tasks.push_back(tasksJsonList[tasksIndex].AsObject());
    }
    m_tasksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = UpdateSolNetworkTypeMapper::GetUpdateSolNetworkTypeForName(jsonValue.GetString("updateType"));
    m_updateTypeHasBeenSet = true;
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
