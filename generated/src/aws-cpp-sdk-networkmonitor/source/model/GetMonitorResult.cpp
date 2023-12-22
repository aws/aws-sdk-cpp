/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/GetMonitorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMonitorResult::GetMonitorResult() : 
    m_state(MonitorState::NOT_SET),
    m_aggregationPeriod(0)
{
}

GetMonitorResult::GetMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(MonitorState::NOT_SET),
    m_aggregationPeriod(0)
{
  *this = result;
}

GetMonitorResult& GetMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("monitorArn"))
  {
    m_monitorArn = jsonValue.GetString("monitorArn");

  }

  if(jsonValue.ValueExists("monitorName"))
  {
    m_monitorName = jsonValue.GetString("monitorName");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = MonitorStateMapper::GetMonitorStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("aggregationPeriod"))
  {
    m_aggregationPeriod = jsonValue.GetInt64("aggregationPeriod");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("probes"))
  {
    Aws::Utils::Array<JsonView> probesJsonList = jsonValue.GetArray("probes");
    for(unsigned probesIndex = 0; probesIndex < probesJsonList.GetLength(); ++probesIndex)
    {
      m_probes.push_back(probesJsonList[probesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
