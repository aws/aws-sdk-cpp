/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/GetIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIndexResult::GetIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIndexResult& GetIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicatingFrom"))
  {
    Aws::Utils::Array<JsonView> replicatingFromJsonList = jsonValue.GetArray("ReplicatingFrom");
    for(unsigned replicatingFromIndex = 0; replicatingFromIndex < replicatingFromJsonList.GetLength(); ++replicatingFromIndex)
    {
      m_replicatingFrom.push_back(replicatingFromJsonList[replicatingFromIndex].AsString());
    }
    m_replicatingFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicatingTo"))
  {
    Aws::Utils::Array<JsonView> replicatingToJsonList = jsonValue.GetArray("ReplicatingTo");
    for(unsigned replicatingToIndex = 0; replicatingToIndex < replicatingToJsonList.GetLength(); ++replicatingToIndex)
    {
      m_replicatingTo.push_back(replicatingToJsonList[replicatingToIndex].AsString());
    }
    m_replicatingToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = IndexStateMapper::GetIndexStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IndexTypeMapper::GetIndexTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
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
