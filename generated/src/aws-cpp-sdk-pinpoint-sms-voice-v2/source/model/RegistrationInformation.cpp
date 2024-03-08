/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationInformation.h>
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

RegistrationInformation::RegistrationInformation() : 
    m_registrationArnHasBeenSet(false),
    m_registrationIdHasBeenSet(false),
    m_registrationTypeHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_currentVersionNumber(0),
    m_currentVersionNumberHasBeenSet(false),
    m_approvedVersionNumber(0),
    m_approvedVersionNumberHasBeenSet(false),
    m_latestDeniedVersionNumber(0),
    m_latestDeniedVersionNumberHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

RegistrationInformation::RegistrationInformation(JsonView jsonValue) : 
    m_registrationArnHasBeenSet(false),
    m_registrationIdHasBeenSet(false),
    m_registrationTypeHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_currentVersionNumber(0),
    m_currentVersionNumberHasBeenSet(false),
    m_approvedVersionNumber(0),
    m_approvedVersionNumberHasBeenSet(false),
    m_latestDeniedVersionNumber(0),
    m_latestDeniedVersionNumberHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationInformation& RegistrationInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistrationArn"))
  {
    m_registrationArn = jsonValue.GetString("RegistrationArn");

    m_registrationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationId"))
  {
    m_registrationId = jsonValue.GetString("RegistrationId");

    m_registrationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationType"))
  {
    m_registrationType = jsonValue.GetString("RegistrationType");

    m_registrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("RegistrationStatus"));

    m_registrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentVersionNumber"))
  {
    m_currentVersionNumber = jsonValue.GetInt64("CurrentVersionNumber");

    m_currentVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedVersionNumber"))
  {
    m_approvedVersionNumber = jsonValue.GetInt64("ApprovedVersionNumber");

    m_approvedVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestDeniedVersionNumber"))
  {
    m_latestDeniedVersionNumber = jsonValue.GetInt64("LatestDeniedVersionNumber");

    m_latestDeniedVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalAttributes"))
  {
    Aws::Map<Aws::String, JsonView> additionalAttributesJsonMap = jsonValue.GetObject("AdditionalAttributes").GetAllObjects();
    for(auto& additionalAttributesItem : additionalAttributesJsonMap)
    {
      m_additionalAttributes[additionalAttributesItem.first] = additionalAttributesItem.second.AsString();
    }
    m_additionalAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationInformation::Jsonize() const
{
  JsonValue payload;

  if(m_registrationArnHasBeenSet)
  {
   payload.WithString("RegistrationArn", m_registrationArn);

  }

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  if(m_registrationTypeHasBeenSet)
  {
   payload.WithString("RegistrationType", m_registrationType);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("RegistrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_currentVersionNumberHasBeenSet)
  {
   payload.WithInt64("CurrentVersionNumber", m_currentVersionNumber);

  }

  if(m_approvedVersionNumberHasBeenSet)
  {
   payload.WithInt64("ApprovedVersionNumber", m_approvedVersionNumber);

  }

  if(m_latestDeniedVersionNumberHasBeenSet)
  {
   payload.WithInt64("LatestDeniedVersionNumber", m_latestDeniedVersionNumber);

  }

  if(m_additionalAttributesHasBeenSet)
  {
   JsonValue additionalAttributesJsonMap;
   for(auto& additionalAttributesItem : m_additionalAttributes)
   {
     additionalAttributesJsonMap.WithString(additionalAttributesItem.first, additionalAttributesItem.second);
   }
   payload.WithObject("AdditionalAttributes", std::move(additionalAttributesJsonMap));

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
