/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationSetEventDestinationsResult::GetConfigurationSetEventDestinationsResult()
{
}

GetConfigurationSetEventDestinationsResult::GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationSetEventDestinationsResult& GetConfigurationSetEventDestinationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDestinations"))
  {
    Aws::Utils::Array<JsonView> eventDestinationsJsonList = jsonValue.GetArray("EventDestinations");
    for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
    {
      m_eventDestinations.push_back(eventDestinationsJsonList[eventDestinationsIndex].AsObject());
    }
  }



  return *this;
}
