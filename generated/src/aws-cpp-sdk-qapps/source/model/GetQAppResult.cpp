/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/GetQAppResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQAppResult::GetQAppResult() : 
    m_appVersion(0),
    m_status(AppStatus::NOT_SET)
{
}

GetQAppResult::GetQAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetQAppResult()
{
  *this = result;
}

GetQAppResult& GetQAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

  }

  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("initialPrompt"))
  {
    m_initialPrompt = jsonValue.GetString("initialPrompt");

  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetInteger("appVersion");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AppStatusMapper::GetAppStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }

  if(jsonValue.ValueExists("requiredCapabilities"))
  {
    Aws::Utils::Array<JsonView> requiredCapabilitiesJsonList = jsonValue.GetArray("requiredCapabilities");
    for(unsigned requiredCapabilitiesIndex = 0; requiredCapabilitiesIndex < requiredCapabilitiesJsonList.GetLength(); ++requiredCapabilitiesIndex)
    {
      m_requiredCapabilities.push_back(AppRequiredCapabilityMapper::GetAppRequiredCapabilityForName(requiredCapabilitiesJsonList[requiredCapabilitiesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("appDefinition"))
  {
    m_appDefinition = jsonValue.GetObject("appDefinition");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
