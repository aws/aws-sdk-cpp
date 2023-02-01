/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetAppLaunchConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAppLaunchConfigurationResult::GetAppLaunchConfigurationResult() : 
    m_autoLaunch(false)
{
}

GetAppLaunchConfigurationResult::GetAppLaunchConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoLaunch(false)
{
  *this = result;
}

GetAppLaunchConfigurationResult& GetAppLaunchConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

  }

  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

  }

  if(jsonValue.ValueExists("autoLaunch"))
  {
    m_autoLaunch = jsonValue.GetBool("autoLaunch");

  }

  if(jsonValue.ValueExists("serverGroupLaunchConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverGroupLaunchConfigurationsJsonList = jsonValue.GetArray("serverGroupLaunchConfigurations");
    for(unsigned serverGroupLaunchConfigurationsIndex = 0; serverGroupLaunchConfigurationsIndex < serverGroupLaunchConfigurationsJsonList.GetLength(); ++serverGroupLaunchConfigurationsIndex)
    {
      m_serverGroupLaunchConfigurations.push_back(serverGroupLaunchConfigurationsJsonList[serverGroupLaunchConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
