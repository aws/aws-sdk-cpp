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

GetPluginResult::GetPluginResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPluginResult& GetPluginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");
    m_pluginIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverUrl"))
  {
    m_serverUrl = jsonValue.GetString("serverUrl");
    m_serverUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authConfiguration"))
  {
    m_authConfiguration = jsonValue.GetObject("authConfiguration");
    m_authConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customPluginConfiguration"))
  {
    m_customPluginConfiguration = jsonValue.GetObject("customPluginConfiguration");
    m_customPluginConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildStatus"))
  {
    m_buildStatus = PluginBuildStatusMapper::GetPluginBuildStatusForName(jsonValue.GetString("buildStatus"));
    m_buildStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pluginArn"))
  {
    m_pluginArn = jsonValue.GetString("pluginArn");
    m_pluginArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = PluginStateMapper::GetPluginStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
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
