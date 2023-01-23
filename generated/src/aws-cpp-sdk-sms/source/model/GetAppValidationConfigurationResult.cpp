/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetAppValidationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAppValidationConfigurationResult::GetAppValidationConfigurationResult()
{
}

GetAppValidationConfigurationResult::GetAppValidationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAppValidationConfigurationResult& GetAppValidationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> appValidationConfigurationsJsonList = jsonValue.GetArray("appValidationConfigurations");
    for(unsigned appValidationConfigurationsIndex = 0; appValidationConfigurationsIndex < appValidationConfigurationsJsonList.GetLength(); ++appValidationConfigurationsIndex)
    {
      m_appValidationConfigurations.push_back(appValidationConfigurationsJsonList[appValidationConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("serverGroupValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverGroupValidationConfigurationsJsonList = jsonValue.GetArray("serverGroupValidationConfigurations");
    for(unsigned serverGroupValidationConfigurationsIndex = 0; serverGroupValidationConfigurationsIndex < serverGroupValidationConfigurationsJsonList.GetLength(); ++serverGroupValidationConfigurationsIndex)
    {
      m_serverGroupValidationConfigurations.push_back(serverGroupValidationConfigurationsJsonList[serverGroupValidationConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
