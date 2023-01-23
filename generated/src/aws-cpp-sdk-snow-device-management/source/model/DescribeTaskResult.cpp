/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DescribeTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTaskResult::DescribeTaskResult() : 
    m_state(TaskState::NOT_SET)
{
}

DescribeTaskResult::DescribeTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(TaskState::NOT_SET)
{
  *this = result;
}

DescribeTaskResult& DescribeTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = TaskStateMapper::GetTaskStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }



  return *this;
}
