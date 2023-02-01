/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberInformation.h>
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

PhoneNumberInformation::PhoneNumberInformation() : 
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_status(NumberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false),
    m_numberType(NumberType::NOT_SET),
    m_numberTypeHasBeenSet(false),
    m_monthlyLeasingPriceHasBeenSet(false),
    m_twoWayEnabled(false),
    m_twoWayEnabledHasBeenSet(false),
    m_twoWayChannelArnHasBeenSet(false),
    m_selfManagedOptOutsEnabled(false),
    m_selfManagedOptOutsEnabledHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

PhoneNumberInformation::PhoneNumberInformation(JsonView jsonValue) : 
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_status(NumberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false),
    m_numberType(NumberType::NOT_SET),
    m_numberTypeHasBeenSet(false),
    m_monthlyLeasingPriceHasBeenSet(false),
    m_twoWayEnabled(false),
    m_twoWayEnabledHasBeenSet(false),
    m_twoWayChannelArnHasBeenSet(false),
    m_selfManagedOptOutsEnabled(false),
    m_selfManagedOptOutsEnabledHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberInformation& PhoneNumberInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberArn"))
  {
    m_phoneNumberArn = jsonValue.GetString("PhoneNumberArn");

    m_phoneNumberArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NumberStatusMapper::GetNumberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

    m_isoCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberCapabilities"))
  {
    Aws::Utils::Array<JsonView> numberCapabilitiesJsonList = jsonValue.GetArray("NumberCapabilities");
    for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
    {
      m_numberCapabilities.push_back(NumberCapabilityMapper::GetNumberCapabilityForName(numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString()));
    }
    m_numberCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberType"))
  {
    m_numberType = NumberTypeMapper::GetNumberTypeForName(jsonValue.GetString("NumberType"));

    m_numberTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonthlyLeasingPrice"))
  {
    m_monthlyLeasingPrice = jsonValue.GetString("MonthlyLeasingPrice");

    m_monthlyLeasingPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwoWayEnabled"))
  {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");

    m_twoWayEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwoWayChannelArn"))
  {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");

    m_twoWayChannelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfManagedOptOutsEnabled"))
  {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");

    m_selfManagedOptOutsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

    m_optOutListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");

    m_deletionProtectionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberInformation::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberArnHasBeenSet)
  {
   payload.WithString("PhoneNumberArn", m_phoneNumberArn);

  }

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NumberStatusMapper::GetNameForNumberStatus(m_status));
  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_numberCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> numberCapabilitiesJsonList(m_numberCapabilities.size());
   for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
   {
     numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString(NumberCapabilityMapper::GetNameForNumberCapability(m_numberCapabilities[numberCapabilitiesIndex]));
   }
   payload.WithArray("NumberCapabilities", std::move(numberCapabilitiesJsonList));

  }

  if(m_numberTypeHasBeenSet)
  {
   payload.WithString("NumberType", NumberTypeMapper::GetNameForNumberType(m_numberType));
  }

  if(m_monthlyLeasingPriceHasBeenSet)
  {
   payload.WithString("MonthlyLeasingPrice", m_monthlyLeasingPrice);

  }

  if(m_twoWayEnabledHasBeenSet)
  {
   payload.WithBool("TwoWayEnabled", m_twoWayEnabled);

  }

  if(m_twoWayChannelArnHasBeenSet)
  {
   payload.WithString("TwoWayChannelArn", m_twoWayChannelArn);

  }

  if(m_selfManagedOptOutsEnabledHasBeenSet)
  {
   payload.WithBool("SelfManagedOptOutsEnabled", m_selfManagedOptOutsEnabled);

  }

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
