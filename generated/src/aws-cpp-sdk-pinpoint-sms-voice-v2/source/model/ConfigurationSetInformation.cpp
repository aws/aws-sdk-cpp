/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetInformation.h>
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

ConfigurationSetInformation::ConfigurationSetInformation() : 
    m_configurationSetArnHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationsHasBeenSet(false),
    m_defaultMessageType(MessageType::NOT_SET),
    m_defaultMessageTypeHasBeenSet(false),
    m_defaultSenderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

ConfigurationSetInformation::ConfigurationSetInformation(JsonView jsonValue) : 
    m_configurationSetArnHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationsHasBeenSet(false),
    m_defaultMessageType(MessageType::NOT_SET),
    m_defaultMessageTypeHasBeenSet(false),
    m_defaultSenderIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationSetInformation& ConfigurationSetInformation::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationSetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_configurationSetArnHasBeenSet)
  {
   payload.WithString("ConfigurationSetArn", m_configurationSetArn);

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_eventDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventDestinationsJsonList(m_eventDestinations.size());
   for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
   {
     eventDestinationsJsonList[eventDestinationsIndex].AsObject(m_eventDestinations[eventDestinationsIndex].Jsonize());
   }
   payload.WithArray("EventDestinations", std::move(eventDestinationsJsonList));

  }

  if(m_defaultMessageTypeHasBeenSet)
  {
   payload.WithString("DefaultMessageType", MessageTypeMapper::GetNameForMessageType(m_defaultMessageType));
  }

  if(m_defaultSenderIdHasBeenSet)
  {
   payload.WithString("DefaultSenderId", m_defaultSenderId);

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
