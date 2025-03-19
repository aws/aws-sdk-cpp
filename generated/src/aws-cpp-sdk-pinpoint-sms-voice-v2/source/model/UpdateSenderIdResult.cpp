/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdateSenderIdResult.h>
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

UpdateSenderIdResult::UpdateSenderIdResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSenderIdResult& UpdateSenderIdResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SenderIdArn"))
  {
    m_senderIdArn = jsonValue.GetString("SenderIdArn");
    m_senderIdArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");
    m_senderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");
    m_isoCountryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageTypes"))
  {
    Aws::Utils::Array<JsonView> messageTypesJsonList = jsonValue.GetArray("MessageTypes");
    for(unsigned messageTypesIndex = 0; messageTypesIndex < messageTypesJsonList.GetLength(); ++messageTypesIndex)
    {
      m_messageTypes.push_back(MessageTypeMapper::GetMessageTypeForName(messageTypesJsonList[messageTypesIndex].AsString()));
    }
    m_messageTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonthlyLeasingPrice"))
  {
    m_monthlyLeasingPrice = jsonValue.GetString("MonthlyLeasingPrice");
    m_monthlyLeasingPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Registered"))
  {
    m_registered = jsonValue.GetBool("Registered");
    m_registeredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrationId"))
  {
    m_registrationId = jsonValue.GetString("RegistrationId");
    m_registrationIdHasBeenSet = true;
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
