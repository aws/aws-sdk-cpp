/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationTypeDefinition.h>
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

RegistrationTypeDefinition::RegistrationTypeDefinition() : 
    m_registrationTypeHasBeenSet(false),
    m_supportedAssociationsHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
}

RegistrationTypeDefinition::RegistrationTypeDefinition(JsonView jsonValue) : 
    m_registrationTypeHasBeenSet(false),
    m_supportedAssociationsHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationTypeDefinition& RegistrationTypeDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistrationType"))
  {
    m_registrationType = jsonValue.GetString("RegistrationType");

    m_registrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedAssociations"))
  {
    Aws::Utils::Array<JsonView> supportedAssociationsJsonList = jsonValue.GetArray("SupportedAssociations");
    for(unsigned supportedAssociationsIndex = 0; supportedAssociationsIndex < supportedAssociationsJsonList.GetLength(); ++supportedAssociationsIndex)
    {
      m_supportedAssociations.push_back(supportedAssociationsJsonList[supportedAssociationsIndex].AsObject());
    }
    m_supportedAssociationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayHints"))
  {
    m_displayHints = jsonValue.GetObject("DisplayHints");

    m_displayHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationTypeDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_registrationTypeHasBeenSet)
  {
   payload.WithString("RegistrationType", m_registrationType);

  }

  if(m_supportedAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedAssociationsJsonList(m_supportedAssociations.size());
   for(unsigned supportedAssociationsIndex = 0; supportedAssociationsIndex < supportedAssociationsJsonList.GetLength(); ++supportedAssociationsIndex)
   {
     supportedAssociationsJsonList[supportedAssociationsIndex].AsObject(m_supportedAssociations[supportedAssociationsIndex].Jsonize());
   }
   payload.WithArray("SupportedAssociations", std::move(supportedAssociationsJsonList));

  }

  if(m_displayHintsHasBeenSet)
  {
   payload.WithObject("DisplayHints", m_displayHints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
