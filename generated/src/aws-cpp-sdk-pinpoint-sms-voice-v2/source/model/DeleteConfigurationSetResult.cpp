/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteConfigurationSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteConfigurationSetResult::DeleteConfigurationSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteConfigurationSetResult& DeleteConfigurationSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationSetArn"))
  {
    m_configurationSetArn = jsonValue.GetString("ConfigurationSetArn");
    m_configurationSetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationSetName"))
  {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");
    m_configurationSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventDestinations"))
  {
    Aws::Utils::Array<JsonView> eventDestinationsJsonList = jsonValue.GetArray("EventDestinations");
    for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
    {
      m_eventDestinations.push_back(eventDestinationsJsonList[eventDestinationsIndex].AsObject());
    }
    m_eventDestinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultMessageType"))
  {
    m_defaultMessageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("DefaultMessageType"));
    m_defaultMessageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultSenderId"))
  {
    m_defaultSenderId = jsonValue.GetString("DefaultSenderId");
    m_defaultSenderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultMessageFeedbackEnabled"))
  {
    m_defaultMessageFeedbackEnabled = jsonValue.GetBool("DefaultMessageFeedbackEnabled");
    m_defaultMessageFeedbackEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
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
