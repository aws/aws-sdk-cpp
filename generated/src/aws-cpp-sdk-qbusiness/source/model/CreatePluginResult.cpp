/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreatePluginResult.h>
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

CreatePluginResult::CreatePluginResult() : 
    m_buildStatus(PluginBuildStatus::NOT_SET)
{
}

CreatePluginResult::CreatePluginResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_buildStatus(PluginBuildStatus::NOT_SET)
{
  *this = result;
}

CreatePluginResult& CreatePluginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

  }

  if(jsonValue.ValueExists("pluginArn"))
  {
    m_pluginArn = jsonValue.GetString("pluginArn");

  }

  if(jsonValue.ValueExists("buildStatus"))
  {
    m_buildStatus = PluginBuildStatusMapper::GetPluginBuildStatusForName(jsonValue.GetString("buildStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
