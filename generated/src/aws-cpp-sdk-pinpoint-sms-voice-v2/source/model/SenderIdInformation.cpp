﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SenderIdInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

SenderIdInformation::SenderIdInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

SenderIdInformation& SenderIdInformation::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue SenderIdInformation::Jsonize() const
{
  JsonValue payload;

  if(m_senderIdArnHasBeenSet)
  {
   payload.WithString("SenderIdArn", m_senderIdArn);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_messageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageTypesJsonList(m_messageTypes.size());
   for(unsigned messageTypesIndex = 0; messageTypesIndex < messageTypesJsonList.GetLength(); ++messageTypesIndex)
   {
     messageTypesJsonList[messageTypesIndex].AsString(MessageTypeMapper::GetNameForMessageType(m_messageTypes[messageTypesIndex]));
   }
   payload.WithArray("MessageTypes", std::move(messageTypesJsonList));

  }

  if(m_monthlyLeasingPriceHasBeenSet)
  {
   payload.WithString("MonthlyLeasingPrice", m_monthlyLeasingPrice);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  if(m_registeredHasBeenSet)
  {
   payload.WithBool("Registered", m_registered);

  }

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
