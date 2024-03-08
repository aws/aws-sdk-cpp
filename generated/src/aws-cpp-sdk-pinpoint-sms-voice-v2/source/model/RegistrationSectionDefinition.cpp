/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationSectionDefinition.h>
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

RegistrationSectionDefinition::RegistrationSectionDefinition() : 
    m_sectionPathHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
}

RegistrationSectionDefinition::RegistrationSectionDefinition(JsonView jsonValue) : 
    m_sectionPathHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationSectionDefinition& RegistrationSectionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SectionPath"))
  {
    m_sectionPath = jsonValue.GetString("SectionPath");

    m_sectionPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayHints"))
  {
    m_displayHints = jsonValue.GetObject("DisplayHints");

    m_displayHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationSectionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_sectionPathHasBeenSet)
  {
   payload.WithString("SectionPath", m_sectionPath);

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
