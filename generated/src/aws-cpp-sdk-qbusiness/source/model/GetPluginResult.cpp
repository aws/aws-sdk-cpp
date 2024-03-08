/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetPluginResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPluginResult::GetPluginResult() : 
    m_state(PluginState::NOT_SET),
    m_type(PluginType::NOT_SET)
{
}

GetPluginResult::GetPluginResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(PluginState::NOT_SET),
    m_type(PluginType::NOT_SET)
{
  *this = result;
}

GetPluginResult& GetPluginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("authConfiguration"))
  {
    m_authConfiguration = jsonValue.GetObject("authConfiguration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("pluginArn"))
  {
    m_pluginArn = jsonValue.GetString("pluginArn");

  }

  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

  }

  if(jsonValue.ValueExists("serverUrl"))
  {
    m_serverUrl = jsonValue.GetString("serverUrl");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = PluginStateMapper::GetPluginStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
